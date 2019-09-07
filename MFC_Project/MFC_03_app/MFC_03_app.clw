; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=CMyadmin
LastTemplate=CDialog
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "MFC_03_app.h"

ClassCount=8
Class1=CMFC_03_appApp
Class2=CMFC_03_appDlg
Class3=CAboutDlg

ResourceCount=6
Resource1=IDD_MFC_03_APP_DIALOG
Resource2=IDR_MAINFRAME
Resource3=DIALOG1
Class4=CMydialog
Resource4=IDD_ABOUTBOX
Class5=Myregister
Resource5=DIALOG2
Class6=my_ctblist
Class7=my_ctblist1
Class8=CMyadmin
Resource6=admin

[CLS:CMFC_03_appApp]
Type=0
HeaderFile=MFC_03_app.h
ImplementationFile=MFC_03_app.cpp
Filter=N

[CLS:CMFC_03_appDlg]
Type=0
HeaderFile=MFC_03_appDlg.h
ImplementationFile=MFC_03_appDlg.cpp
Filter=D
BaseClass=CDialog
VirtualFilter=dWC
LastObject=CMFC_03_appDlg

[CLS:CAboutDlg]
Type=0
HeaderFile=MFC_03_appDlg.h
ImplementationFile=MFC_03_appDlg.cpp
Filter=D

[DLG:IDD_ABOUTBOX]
Type=1
Class=CAboutDlg
ControlCount=4
Control1=IDC_STATIC,static,1342177283
Control2=IDC_STATIC,static,1342308480
Control3=IDC_STATIC,static,1342308352
Control4=IDOK,button,1342373889

[DLG:IDD_MFC_03_APP_DIALOG]
Type=1
Class=CMFC_03_appDlg
ControlCount=11
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_STATIC,static,1342177287
Control4=IDC_EDIT1,edit,1350631552
Control5=IDC_RADIO1,button,1342177289
Control6=IDC_RADIO2,button,1342177289
Control7=IDC_RADIO3,button,1342177289
Control8=IDC_RADIO4,button,1342177289
Control9=IDC_STATIC,static,1342308865
Control10=IDC_STATIC,static,1342308865
Control11=IDC_BUTTON2,button,1342242816

[DLG:DIALOG1]
Type=1
Class=CMydialog
ControlCount=4
Control1=IDCANCEL,button,1342242816
Control2=IDC_STATIC,static,1342308865
Control3=IDC_STATIC,static,1342308865
Control4=IDC_STATIC,static,1342308865

[CLS:CMydialog]
Type=0
HeaderFile=Mydialog.h
ImplementationFile=Mydialog.cpp
BaseClass=CDialog
Filter=D
LastObject=CMydialog
VirtualFilter=dWC

[DLG:DIALOG2]
Type=1
Class=Myregister
ControlCount=6
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_EDIT1,edit,1350631552
Control4=IDC_EDIT2,edit,1350631552
Control5=IDC_STATIC,static,1342308865
Control6=IDC_STATIC,static,1342308865

[CLS:Myregister]
Type=0
HeaderFile=Myregister.h
ImplementationFile=Myregister.cpp
BaseClass=CDialog
Filter=D
LastObject=IDC_EDIT1
VirtualFilter=dWC

[CLS:my_ctblist]
Type=0
HeaderFile=my_ctblist.h
ImplementationFile=my_ctblist.cpp
BaseClass=CDialog
Filter=D
LastObject=my_ctblist

[CLS:my_ctblist1]
Type=0
HeaderFile=my_ctblist1.h
ImplementationFile=my_ctblist1.cpp
BaseClass=CDialog
Filter=D
VirtualFilter=dWC

[DLG:admin]
Type=1
Class=CMyadmin
ControlCount=4
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDOK2,button,1342242817
Control4=IDC_LIST1,SysListView32,1350631425

[CLS:CMyadmin]
Type=0
HeaderFile=Myadmin.h
ImplementationFile=Myadmin.cpp
BaseClass=CDialog
Filter=D
LastObject=IDC_LIST1
VirtualFilter=dWC

