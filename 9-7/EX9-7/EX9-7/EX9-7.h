// EX9-7.h : EX9-7 应用程序的主头文件
//
#pragma once

#ifndef __AFXWIN_H__
	#error "在包含此文件之前包含“stdafx.h”以生成 PCH 文件"
#endif

#include "resource.h"       // 主符号


// CEX97App:
// 有关此类的实现，请参阅 EX9-7.cpp
//

class CEX97App : public CWinApp
{
public:
	CEX97App();


// 重写
public:
	virtual BOOL InitInstance();

// 实现
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CEX97App theApp;