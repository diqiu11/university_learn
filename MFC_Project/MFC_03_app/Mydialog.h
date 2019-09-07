#if !defined(AFX_MYDIALOG_H__DE346800_287E_45B3_9336_B25794BEFA6C__INCLUDED_)
#define AFX_MYDIALOG_H__DE346800_287E_45B3_9336_B25794BEFA6C__INCLUDED_
#include "resource.h" // main symbols
#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Mydialog.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CMydialog dialog

class CMydialog : public CDialog
{
// Construction
public:
	CMydialog(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CMydialog)
	enum { IDD = DIALOG1 };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMydialog)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CMydialog)
	virtual void OnCancel();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MYDIALOG_H__DE346800_287E_45B3_9336_B25794BEFA6C__INCLUDED_)
