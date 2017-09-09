// EX9-7View.h : CEX97View 类的接口
//


#pragma once


class CEX97View : public CView
{
protected: // 仅从序列化创建
	CEX97View();
	DECLARE_DYNCREATE(CEX97View)

// 属性
public:
	CEX97Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// 实现
public:
	virtual ~CEX97View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void Onsearch();
};

#ifndef _DEBUG  // EX9-7View.cpp 中的调试版本
inline CEX97Doc* CEX97View::GetDocument() const
   { return reinterpret_cast<CEX97Doc*>(m_pDocument); }
#endif

