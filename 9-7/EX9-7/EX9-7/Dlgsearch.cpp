// Dlgsearch.cpp : 实现文件
//

#include "stdafx.h"
#include "EX9-7.h"
#include "Dlgsearch.h"


// CDlgsearch 对话框

IMPLEMENT_DYNAMIC(CDlgsearch, CDialog)

CDlgsearch::CDlgsearch(CWnd* pParent /*=NULL*/)
	: CDialog(CDlgsearch::IDD, pParent)
{

}

CDlgsearch::~CDlgsearch()
{
}

void CDlgsearch::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CDlgsearch, CDialog)
	ON_CBN_SELCHANGE(IDC_COMBO2, &CDlgsearch::OnCbnSelchangeCombo2)
END_MESSAGE_MAP()


// CDlgsearch 消息处理程序

void CDlgsearch::OnCbnSelchangeCombo2()
{
	// TODO: 在此添加控件通知处理程序代码
}
