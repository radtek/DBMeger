
// MySQL_DBMeger.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CMySQL_DBMegerApp: 
// �йش����ʵ�֣������ MySQL_DBMeger.cpp
//

class CMySQL_DBMegerApp : public CWinApp
{
public:
	CMySQL_DBMegerApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CMySQL_DBMegerApp theApp;