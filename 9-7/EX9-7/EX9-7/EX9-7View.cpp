// EX9-7View.cpp : CEX97View ���ʵ��
//

#include "stdafx.h"
#include "EX9-7.h"

#include "EX9-7Doc.h"
#include "EX9-7View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CEX97View

IMPLEMENT_DYNCREATE(CEX97View, CView)

BEGIN_MESSAGE_MAP(CEX97View, CView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_COMMAND(ID_32771, &CEX97View::Onsearch)
END_MESSAGE_MAP()

// CEX97View ����/����

CEX97View::CEX97View()
{
	// TODO: �ڴ˴���ӹ������

}

CEX97View::~CEX97View()
{
}

BOOL CEX97View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CEX97View ����

void CEX97View::OnDraw(CDC* /*pDC*/)
{
	CEX97Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CEX97View ��ӡ

BOOL CEX97View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void CEX97View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void CEX97View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӵ�ӡ����е��������
}


// CEX97View ���

#ifdef _DEBUG
void CEX97View::AssertValid() const
{
	CView::AssertValid();
}

void CEX97View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CEX97Doc* CEX97View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CEX97Doc)));
	return (CEX97Doc*)m_pDocument;
}
#endif //_DEBUG


// CEX97View ��Ϣ�������

void CEX97View::Onsearch()
{
	// TODO: �ڴ���������������
	EX9-7Doc* pDoc=GetDocument();
	CDlgsearch dlg;
	dlg.DoModal();

}
