#pragma once


// CDlgsearch 对话框

class CDlgsearch : public CDialog
{
	DECLARE_DYNAMIC(CDlgsearch)

public:
	CDlgsearch(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CDlgsearch();

// 对话框数据
	enum { IDD = IDD_Dialoguesearch };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnCbnSelchangeCombo2();
};
