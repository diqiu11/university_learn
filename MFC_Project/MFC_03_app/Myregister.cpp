// Myregister.cpp : implementation file
//

#include "stdafx.h"
#include "MFC_03_app.h"
#include "Myregister.h"

#include "Myadmin.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// Myregister dialog


Myregister::Myregister(CWnd* pParent /*=NULL*/)
	: CDialog(Myregister::IDD, pParent)
{
	//{{AFX_DATA_INIT(Myregister)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void Myregister::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(Myregister)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(Myregister, CDialog)
	//{{AFX_MSG_MAP(Myregister)
	ON_EN_CHANGE(IDC_EDIT1, Onaccount)
	ON_EN_CHANGE(IDC_EDIT2, Onpassword)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// Myregister message handlers

void Myregister::OnOK() 
{
	// TODO: Add extra validation here
	//occur manager dialog 

	CDialog::OnCancel();

	CMyadmin dlg;
	dlg.DoModal();
	//CDialog::OnOK();
	
}

void Myregister::OnCancel() 
{
	// TODO: Add extra cleanup here
	
	CDialog::OnCancel();
}

void Myregister::Onaccount() 
{
	// TODO: If this is a RICHEDIT control, the control will not
	// send this notification unless you override the CDialog::OnInitDialog()
	// function and call CRichEditCtrl().SetEventMask()
	// with the ENM_CHANGE flag ORed into the mask.
	
	// TODO: Add your control notification handler code here
	
}

void Myregister::Onpassword() 
{
	// TODO: If this is a RICHEDIT control, the control will not
	// send this notification unless you override the CDialog::OnInitDialog()
	// function and call CRichEditCtrl().SetEventMask()
	// with the ENM_CHANGE flag ORed into the mask.
	
	// TODO: Add your control notification handler code here
	
}
