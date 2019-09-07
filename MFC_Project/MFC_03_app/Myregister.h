#if !defined(AFX_MYREGISTER_H__43E7C035_030F_45EC_9CFD_4703E894AEBC__INCLUDED_)
#define AFX_MYREGISTER_H__43E7C035_030F_45EC_9CFD_4703E894AEBC__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Myregister.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// Myregister dialog

class Myregister : public CDialog
{
// Construction
public:
	Myregister(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(Myregister)
	enum { IDD = DIALOG2 };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(Myregister)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(Myregister)
	virtual void OnOK();
	virtual void OnCancel();
	afx_msg void Onaccount();
	afx_msg void Onpassword();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MYREGISTER_H__43E7C035_030F_45EC_9CFD_4703E894AEBC__INCLUDED_)
