#if !defined(AFX_MYADMIN_H__0C12934E_9E37_4459_80D9_A5941C6F93AC__INCLUDED_)
#define AFX_MYADMIN_H__0C12934E_9E37_4459_80D9_A5941C6F93AC__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Myadmin.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CMyadmin dialog

class CMyadmin : public CDialog
{
// Construction
public:
	CMyadmin(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CMyadmin)
	enum { IDD = admin };
	CListCtrl	m_ctblist;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMyadmin)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CMyadmin)
	afx_msg void OnClickList(NMHDR* pNMHDR, LRESULT* pResult);
	afx_msg void Oninsert();
	afx_msg void Ondelete();
	virtual void OnCancel();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MYADMIN_H__0C12934E_9E37_4459_80D9_A5941C6F93AC__INCLUDED_)
