// EX9-7View.cpp : CEX97View 类的实现
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
	// 标准打印命令
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_COMMAND(ID_32771, &CEX97View::Onsearch)
END_MESSAGE_MAP()

// CEX97View 构造/析构

CEX97View::CEX97View()
{
	// TODO: 在此处添加构造代码

}

CEX97View::~CEX97View()
{
}

BOOL CEX97View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CEX97View 绘制

void CEX97View::OnDraw(CDC* /*pDC*/)
{
	CEX97Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CEX97View 打印

BOOL CEX97View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 默认准备
	return DoPreparePrinting(pInfo);
}

void CEX97View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加额外的打印前进行的初始化过程
}

void CEX97View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加打印后进行的清除过程
}


// CEX97View 诊断

#ifdef _DEBUG
void CEX97View::AssertValid() const
{
	CView::AssertValid();
}

void CEX97View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CEX97Doc* CEX97View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CEX97Doc)));
	return (CEX97Doc*)m_pDocument;
}
#endif //_DEBUG


// CEX97View 消息处理程序

void CEX97View::Onsearch()
{
	// TODO: 在此添加命令处理程序代码
	EX9-7Doc* pDoc=GetDocument();
	CDlgsearch dlg;
	dlg.DoModal();

}
