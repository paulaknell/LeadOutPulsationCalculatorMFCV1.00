
// LeadOutPulsationCalcMFCV1.01Dlg.h : header file
//

#pragma once


// CLeadOutPulsationCalcMFCV101Dlg dialog
class CLeadOutPulsationCalcMFCV101Dlg : public CDialogEx
{
// Construction
public:
	CLeadOutPulsationCalcMFCV101Dlg(CWnd* pParent = nullptr);	// standard constructor

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_LEADOUTPULSATIONCALCMFCV101_DIALOG };
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
	afx_msg void OnBnClickedButton1();
	// Global Double
	double Global_Variable_1;
};
