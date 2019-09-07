// Myadmin.cpp : implementation file
//

#include "stdafx.h"
#include "MFC_03_app.h"
#include "Myadmin.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMyadmin dialog


CMyadmin::CMyadmin(CWnd* pParent /*=NULL*/)
	: CDialog(CMyadmin::IDD, pParent)
{
	//{{AFX_DATA_INIT(CMyadmin)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void CMyadmin::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CMyadmin)
	DDX_Control(pDX, IDC_LIST1, m_ctblist);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CMyadmin, CDialog)
	//{{AFX_MSG_MAP(CMyadmin)
	ON_NOTIFY(NM_CLICK, IDC_LIST1, OnClickList)
	ON_BN_CLICKED(IDOK2, Oninsert)
	ON_BN_CLICKED(IDOK, Ondelete)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMyadmin message handlers

void CMyadmin::OnClickList(NMHDR* pNMHDR, LRESULT* pResult) 
{
	// TODO: Add your control notification handler code here
	DWORD dwStyle = m_ctblist.GetExtendedStyle();
	dwStyle |= LVS_EX_FULLROWSELECT;           
    dwStyle |= LVS_EX_GRIDLINES;                
    m_ctblist.SetExtendedStyle(dwStyle);
	m_ctblist.InsertColumn(0,"ÐÕÃû",LVCFMT_LEFT,80);
	m_ctblist.InsertColumn(1,"¿¼ºÅ",LVCFMT_LEFT,120);
	m_ctblist.InsertColumn(2,"kemu1",LVCFMT_LEFT,40);
	m_ctblist.InsertColumn(3,"kemu2",LVCFMT_LEFT,40);
	m_ctblist.InsertColumn(4,"kemu3",LVCFMT_LEFT,40);
	m_ctblist.InsertColumn(5,"kemu4",LVCFMT_LEFT,40);
	//*pResult = 0;
}

void CMyadmin::Oninsert() 
{
	// TODO: Add your control notification handler code here
	
}

void CMyadmin::Ondelete() 
{
	// TODO: Add your control notification handler code here
	
}

void CMyadmin::OnCancel() 
{
	// TODO: Add extra cleanup here
	
	CDialog::OnCancel();
}
