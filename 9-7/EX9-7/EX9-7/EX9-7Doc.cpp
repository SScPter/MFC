// EX9-7Doc.cpp : CEX97Doc 类的实现
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


// CEX97Doc 构造/析构

CEX97Doc::CEX97Doc()
{
	// TODO: 在此添加一次性构造代码

}

CEX97Doc::~CEX97Doc()
{
}

BOOL CEX97Doc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: 在此添加重新初始化代码
	// (SDI 文档将重用该文档)

	return TRUE;
}




// CEX97Doc 序列化

void CEX97Doc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: 在此添加存储代码
	}
	else
	{
		// TODO: 在此添加加载代码
	}
}


// CEX97Doc 诊断

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


// CEX97Doc 命令
