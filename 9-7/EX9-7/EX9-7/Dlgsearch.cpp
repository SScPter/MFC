// Dlgsearch.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "EX9-7.h"
#include "Dlgsearch.h"


// CDlgsearch �Ի���

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


// CDlgsearch ��Ϣ�������

void CDlgsearch::OnCbnSelchangeCombo2()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
}
