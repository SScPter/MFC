// EX9-7Doc.h : CEX97Doc ��Ľӿ�
//
#include"Dlgsearch.h"


#pragma once


class CEX97Doc : public CDocument
{
protected:
	CDlgsearch m_dlgsearch;//�Ի��������
	Clistr lr;			   //����������
	Clista la;				//����Ա������
protected: // �������л�����
	CEX97Doc();
	DECLARE_DYNCREATE(CEX97Doc)

// ����
public:

// ����
public:

// ��д
public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);

// ʵ��
public:
	virtual ~CEX97Doc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};


