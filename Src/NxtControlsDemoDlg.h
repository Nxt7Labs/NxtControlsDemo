
// NxtControlsDemoDlg.h : header file
//

#pragma once
#include "NxtControlFactory.h"

// CNxtControlsDemoDlg dialog
class CNxtControlsDemoDlg : public CDialogEx
{
// Construction
public:
	CNxtControlsDemoDlg(CWnd* pParent = nullptr);	// standard constructor

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_NXTCONTROLSDEMO_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	CNxtButtonEx m_btnTry; //Change CButton to CNxtControlFactory
	CNxtControlFactory m_clControlFactory; // Must create this object

	afx_msg void OnBnClickedTryButton();
};
