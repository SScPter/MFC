// EX9-7Doc.cpp : CEX97Doc ���ʵ��
//

#include "stdafx.h"
#include "EX9-7.h"

#include "EX9-7Doc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CEX97Doc

IMPLEMENT_DYNCREATE(CEX97Doc, CDocument)

BEGIN_MESSAGE_MAP(CEX97Doc, CDocument)
END_MESSAGE_MAP()


// CEX97Doc ����/����

CEX97Doc::CEX97Doc()
{
	// TODO: �ڴ����һ���Թ������

}

CEX97Doc::~CEX97Doc()
{
}

BOOL CEX97Doc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: �ڴ�������³�ʼ������
	// (SDI �ĵ������ø��ĵ�)

	return TRUE;
}




// CEX97Doc ���л�

void CEX97Doc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: �ڴ���Ӵ洢����
	}
	else
	{
		// TODO: �ڴ���Ӽ��ش���
	}
}


// CEX97Doc ���

#ifdef _DEBUG
void CEX97Doc::AssertValid() const
{
	CDocument::AssertValid();
}

void CEX97Doc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// CEX97Doc ����
