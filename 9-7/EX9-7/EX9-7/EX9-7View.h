// EX9-7View.h : CEX97View ��Ľӿ�
//


#pragma once


class CEX97View : public CView
{
protected: // �������л�����
	CEX97View();
	DECLARE_DYNCREATE(CEX97View)

// ����
public:
	CEX97Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// ʵ��
public:
	virtual ~CEX97View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void Onsearch();
};

#ifndef _DEBUG  // EX9-7View.cpp �еĵ��԰汾
inline CEX97Doc* CEX97View::GetDocument() const
   { return reinterpret_cast<CEX97Doc*>(m_pDocument); }
#endif

