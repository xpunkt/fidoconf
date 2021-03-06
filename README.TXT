
                           FIDOCONFIG LIBRARY
                           ~~~~~~~~~~~~~~~~~~

Warning: see "LAST CHANGES" section in this file!

WHAT IS IT
----------

This library is a core part of HUSKY portable fidonet software which
parsing and manipulating config file.
For details see docs/fidoconfig.*


SUPPORTED COMPILERS
-------------------

The following makefiles can be used to compile this release of FIDOCONFIG:

Makefile       Target library   Compiler
------------   --------------   -------------------------------------------
Makefile       libfidoconfig.*       Any (huskymak.cfg required), use GNU make
makefile.bcd   fconfbcd.lib          Borland C++ 3.1 for DOS
makefile.bco   fconfbco.lib          Borland C++ 1.0 for OS/2
makefile.bcw   fconfbco.lib          Borland C++ 4.0 for Windows
makefile.be    libfidoconfigbe.a     GNU C 2.7.x for BeOS
makefile.bsd   libfidoconfigbsd.a    GNU C 2.9.x for BSD clones
makefile.bsd4  libfidoconfigbsd.a    GNU C 2.9.x for FreeBSD 4.*
makefile.cyg   libfidoconfigcyg.a    GNU C 2.9.3 - 3.2.1 for Cygwin (mingw32
               fidoconf.dll          library and/or dll and binaries)
makefile.djg   fconfdjg.a            GNU C 2.7.x for MS-DOS (DJGPP)
makefile.emo   fconfemo.lib          GNU C 2.7.x for OS/2 (EMX 0.9) with
                                     OMF-Style linkage
makefile.emx   fconfemx.a            GNU C 2.7.x for OS/2 (EMX 0.9) a.out-style
                                     linkage (EMX Runtime)
makefile.hco   fconfhco.lib          MetaWare High C 3.2 for OS/2
makefile.ibo   fconfibo.lib          IBM C/Set++ 2.0 for OS/2
makefile.lnx   fconflnx.a            GNU C 2.7.x for Linux
makefile.qnx   libfidconfigqnx.*     GNU C 2.95.3 for QNX 6.x
makefile.mgw   libfidoconfigmgw.a    Mingw32 for NT
makefile.mvc   fidoconfigmvc.lib     Microsoft Visual C/C++ 6.0
makefile.mvcdll fidoconfigmvc.dll    Microsoft Visual C/C++ 6.0
                                     (shared library produced)
makefile.qcd   fconfqcd.lib          Microsoft QuickC 2.5 for DOS (makefile
                                     requires either the Microsoft Macro
                                     Assembler, MASM, or the Borland Turbo
                                     Assembler, TASM)
makefile.rxw   fconfrxw.lib          GNU C 2.7.x for Windows NT (RSXNT/EMX)
makefile.sun   libfidoconfigsun.a    GNU C 2.7.x for Solaris
makefile.unx   libfidoconfigunix.a   Generic Unix Makefile
makefile.wcd   fconfwcd.lib          WATCOM C/C++ 10.x for 16-bit DOS
makefile.wco   fconfwco.lib          WATCOM C/C++ 10.x for 32-bit OS/2
makefile.wcw   fconfwcw.lib          WATCOM C/C++ 10.x for 32-bit Windows
makefile.wcx   fconfwcx.lib          WATCOM C/C++ 10.x for 32-bit DOS

Note that the Linux, BSD and other unix-like makefiles must be in UNIX text
file format (linefeeds only; no carriage returns). Other must be in DOS text
file format usually (CRLF ends of lines).

The Makefile creates a shared library and depends on GCC, while the
generic Unix Makefile (makefile.unx) should work on any Unix system with
any set of cc, ld and ranlib, and creates a static libarry.


LAST CHANGES
------------

This russian (CP866) text is describing undocumented changes.

����砭�� � (�����㬥��஢�����) �����⢠� � current.
������� ᤥ��� Serge Travin, 2:5030/1080.18

�������������������������������������������������������������������������������
��  : val khokhlov                          2:550/180       02 ﭢ 05  22:28
����: husky-current
�������������������������������������������������������������������������������
  Greetings, All!

        �����襭� ��ࢠ� (� ���������) ��।� ࠡ��, �易���� � ��।�����
��⥬� ஡�⮢. hpt-current � htick-current ᮡ������ � ����, ����⭮,
ࠡ����. � �஢��� ���ଠ樮��� ������� � �������/�⯨�� - ࠡ�⠥�. ��
�஢��﫨�� �ࢠ�-४�����, ���ᮧ����� �� � ࠡ�� � ��।��.
        ������ ���졠 �� �ᯮ�짮���� current �� ࠡ��� ��⥬��, �� �� ���
ᨫ ������ � ���஢�����.
        ��������� ⮪���� �ந��諨 �� ��� ����訬 ���ࠢ�����:
1. ������� �������� ⮪��� ��७�ᥭ� � ᥪ樨 robot
        �ਬ�� ���ᠭ�� ᥪ樨:
robot default|areafix|filefix|<��-� ��㣮�>
        helpfile <��� 䠩��>
        robotorigin <�ਤ��� ��� ������� ஡��> � �.�.
��᫥����⥫쭮��� ��ࠥ� ஫� - default ��������� ⥬ ஡�⠬, �����
���ᠭ� ��᫥ ���� (�� �� �� ����!). hpt �ᯮ���� ��� ஡�� "areafix", htick
- "filefix". ����� �������� - ��� ����� ���� �ந������ (�� ���饥)

2. ������� ⮪��� �� ᥪ権 link ��२�������� � ����᪠�� ��䨪��
        �� �����, ��, � �ਬ���, "areafixecholimit" ��।���� �࠭�筮�
�᫮ ��, ����� ����� �������� ����� ���� � areafix'�, � "echolimit" (���
��䨪�) ��।���� �������筮� ���祭�� � ��� areafix, � ��� filefix.
        ��䨪ᠬ� ����� ���� �।��।������ ����� ஡�⮢ "areafix" �
"filefix". ஡���, ����� ॠ�쭮 ��।����� � ���䨣�, ����� �� ������ �� ��
(�.�., ॠ�쭮 ����� �� ��易⥫쭮 ����� ������ ᥪ�� "robot areafix")

        ��� ᯨ᮪ ���������� ⮪����:

[robot]

areafixfromname                        fromname
areafixhelp                            helpfile
areafixkillrequests                    killrequests
areafixmsgsize                         msgsize
areafixnames                           robotnames
areafixorigin                          robotorigin
areafixqueryreports                    queryreports
areafixqueuefile                       queuefile
areafixreportsattr                     reportsattr
areafixsplitstr                        splitstr
autoareacreateflag                     autocreateflag
autofilecreateflag                     autocreateflag
filefixfromname                        fromname
filefixhelp                            helpfile
filefixkillrequests                    killrequests
filefixnames                           robotnames
filefixreportsattr                     reportsattr

[link]

areafixecholimit                      *echolimit
autoareacreate                        *autocreate
autoareacreatedefaults                *autocreatedefaults
autoareacreatefile                    *autocreatefile
autofilecreate                        *autocreate
autofilecreatedefaults                *autocreatedefaults
autofilecreatefile                    *autocreatefile
denyfwdfile                           *fwddenyfile
denyfwdmask                           *fwddenymask
denyfwdreqaccess                      *
denyuncondfwdreqaccess                *
filefixecholimit                      *echolimit
forwardareapriority                   *fwdpriority
forwardfilepriority                   *fwdpriority
forwardfilerequestfile                *fwdfile
forwardfilerequests                   *fwdmask
forwardrequestfile                    *fwdfile
forwardrequestmask                    *fwdmask
remotefilerobotname                    filefixname
remoterobotname                        areafixname

* ����� ����砥� ����������� ���������� ��䨪� areafix ��� filefix � �������
⮪��� ��� ��࠭�祭�� ������ ����⢨� ᮮ⢥�����騬 ஡�⮬

  Good luck!
             val

-*- System uptime: 17 days, 10 hours, 33 minutes, 28 seconds
 * 0rigin: I noore uu alasseo (2:550/180)

�������������������������������������������������������������������������������
��  : val khokhlov                          2:550/180       02 ﭢ 05  22:42
����: htick-current
�������������������������������������������������������������������������������
  Greetings, All!

        ���������� � ����� "husky-current" �� ������ htick:
        htick ⥯��� �ᯮ���� ������ ������⥪� ஡�⮢ areafix, ���⮬�
���� �� �㭪樨 ࠡ���� ⥯��� ⠪ ��, ��� � hpt (�஬� %resend). ॠ�쭮
�� �ࠧ� ������� �� �ଠ� %list � �������� ������, ����� ����� ���஢���
� ��㯯�஢��� ������ � ᯨ᪥. ⠪��, ��� ��� ������ �������� 㪠�����
��᮪ 䠩��� - �� �����᪥/�⯨᪥, %list, %query, %unlinked, %avail (� ��饬,
ᬮ��� �ଠ� ��� ������ � hpt/misc/areafix.hlp). ���� ������� � filefix ��
������﫨��
        ������� hpt, ��� htick ������ �㭪樮���쭮��� ��।� ���
�ࢠ�-४���⮢. ������ �������� ⮣�, �� �뫮 � hpt. �ࠢ��, ���� ���
������ ᮮ⢥������� ���稪�� ����᪠ qupd/qrep.

  Good luck!
             val

-*- System uptime: 17 days, 10 hours, 47 minutes, 35 seconds
 * 0rigin: I noore uu alasseo (2:550/180)

�������������������������������������������������������������������������������
��  : val khokhlov                          2:550/180       10 ﭢ 05  19:50
����: htick-current
�������������������������������������������������������������������������������
  Greetings, All!

        subj 㬥�� ���뫠�� �ࠢ��� 䠩���. �筥�, ������ - � �� �� �஢���.
        � �裡 � �⨬ ⮪�� rulesdir ��७�ᥭ � ᥪ�� ஡�⮢ (��।����
��� ��⠫��� � �ࠢ����� ��� �� � 䠩��� � ᮮ�. ஡��), � � ⮪��� norules
����� ���� �������� ���䨪�, ����� ��࠭�稢��� ��� ����⢨� ����� ஡�⮬
(areafix ��� filefix)

  Good luck!
             val

-*- System uptime: 25 days, 7 hours, 55 minutes, 43 seconds
 * 0rigin: I noore uu alasseo (2:550/180)

�������������������������������������������������������������������������������
��  : val khokhlov                          2:550/180       22 ﭢ 05  17:02
����: Max Chernogor
����: husky-current
�������������������������������������������������������������������������������
  Greetings, Max!

22 Jan 05 14:34, Max Chernogor wrote to val khokhlov:

 MC> ForwardRequestTimeout
 MC> IdlePassthruTimeout
 MC> KilledRequestTimeout

        ���, ���� 㪠����. �� ⮪��� ����뢠���� � ᥪ樨 robot
        tearline - ���� �� ���. ��७���.

  Good luck!
             val

-*- System uptime: 2 days, 5 hours, 43 minutes, 36 seconds
 * 0rigin: I noore uu alasseo (2:550/180)

 . Sermon - No Place [From Death To Death/1997]
... ���� �᫨ ��� �ꥫ�, � � ��� ���� ��� ��室� ...
-+- [������� ��. 0461] --- [death&black metal] --- [������ࠤ᪠� �������] ---
 + Origin: Like a moving truck (2:5030/2404)
