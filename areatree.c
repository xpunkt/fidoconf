/******************************************************************************
 * FIDOCONFIG --- library for fidonet configs
 ******************************************************************************
 * areatree.c : some functions to make search areas by names faster
 *
 * by Max Chernogor <mihz@mail.ru>, 2:464/108@fidonet
 *
 * This file is part of FIDOCONFIG library (part of the Husky FIDOnet
 * software project)
 *
 * This is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published
 * by the Free Software Foundation; either version 2, or (at your option)
 * any later version.
 *
 * FIDOCONFIG library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with FIDOCONFIG library; see the file COPYING.  If not, write
 * to the Free Software Foundation, 675 Mass Ave, Cambridge, MA 02139, USA
 * or visit http://www.gnu.org
 *****************************************************************************
 * $Id$
 */

#include <string.h>
#include "areatree.h"

static tree* echoAreaTree = NULL;

int fc_compareEntries(char *p_e1, char *p_e2)
{
   ps_area e1 = (ps_area)p_e1;
   ps_area e2 = (ps_area)p_e2;
   if(stricmp(e1->areaName,e2->areaName) < 0)
      return -1;
   else if(stricmp(e1->areaName,e2->areaName) > 0)
      return 1;
   return 0;
}

int fc_deleteEntry(char *p_e1) {
   return 1;
}

void  addAreaToTree(ps_area areaPtr)
{
   tree_add(&echoAreaTree, fc_compareEntries, (char *)areaPtr, fc_deleteEntry);     
}

ps_area FindAreaInTree(char* areaName)
{
   static ps_area areaPtr = NULL;
   static s_area areaSrc;
   if(areaPtr && stricmp(areaPtr->areaName,areaName) == 0)
      return areaPtr;
   else
      areaSrc.areaName = areaName;
   areaPtr = (ps_area)tree_srch(&echoAreaTree, fc_compareEntries, (char *)(&areaSrc));
   return areaPtr;
}

void     RebuildEchoAreaTree(ps_fidoconfig config)
{
   unsigned int i = 0;
   if(config->quickAreaSearch)
   {
      FreeAreaTree(config);
      for (i=0; i < config->echoAreaCount; i++)
         addAreaToTree(&(config->echoAreas[i]));
      for (i=0; i < config->localAreaCount; i++) 
         addAreaToTree(&(config->localAreas[i]));
   }
}

void     FreeAreaTree(ps_fidoconfig config)
{
   if(config->quickAreaSearch)
   {
      tree_mung(&echoAreaTree, fc_deleteEntry);
   }
}