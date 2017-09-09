// EX9-7Doc.h : CEX97Doc 类的接口
//
#include"Dlgsearch.h"


#pragma once


class CEX97Doc : public CDocument
{
protected:
	CDlgsearch m_dlgsearch;//对话框类对象
	Clistr lr;			   //读者链表类
	Clista la;				//管理员链表类
protected: // 仅从序列化创建
	CEX97Doc();
	DECLARE_DYNCREATE(CEX97Doc)

// 属性
public:

// 操作
public:

// 重写
public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);

// 实现
public:
	virtual ~CEX97Doc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
};


