// MFC_03_appDlg.h : header file
//

#if !defined(AFX_MFC_03_APPDLG_H__416C4259_AC92_44B4_97F8_A61543AD4DA2__INCLUDED_)
#define AFX_MFC_03_APPDLG_H__416C4259_AC92_44B4_97F8_A61543AD4DA2__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CMFC_03_appDlg dialog

class CMFC_03_appDlg : public CDialog
{
// Construction
public:
	CMFC_03_appDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CMFC_03_appDlg)
	enum { IDD = IDD_MFC_03_APP_DIALOG };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMFC_03_appDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CMFC_03_appDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnScore();
	afx_msg void Onkemu1();
	afx_msg void Onkemu2();
	afx_msg void Onkemu3();
	afx_msg void Onkemu4();
	afx_msg void Onsee_score();
	afx_msg void Onabout();
	virtual void OnCancel();
	afx_msg void Onkaohao();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MFC_03_APPDLG_H__416C4259_AC92_44B4_97F8_A61543AD4DA2__INCLUDED_)
