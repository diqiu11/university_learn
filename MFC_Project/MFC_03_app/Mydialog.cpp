// Mydialog.cpp : implementation file
//

#include "stdafx.h"
#include "MFC_03_app.h"
#include "Mydialog.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMydialog dialog


CMydialog::CMydialog(CWnd* pParent /*=NULL*/)
	: CDialog(CMydialog::IDD, pParent)
{
	//{{AFX_DATA_INIT(CMydialog)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void CMydialog::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CMydialog)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CMydialog, CDialog)
	//{{AFX_MSG_MAP(CMydialog)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMydialog message handlers

void CMydialog::OnCancel() 
{
	// TODO: Add extra cleanup here
	
	CDialog::OnCancel();
}
