#pragma once


// CDlgsearch �Ի���

class CDlgsearch : public CDialog
{
	DECLARE_DYNAMIC(CDlgsearch)

public:
	CDlgsearch(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CDlgsearch();

// �Ի�������
	enum { IDD = IDD_Dialoguesearch };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnCbnSelchangeCombo2();
};
