// ConnectInfoDlg.cpp : 实现文件
//

#include "stdafx.h"
#include "MySQL_DBMeger.h"
#include "ConnectInfoDlg.h"
#include "afxdialogex.h"


// CConnectInfoDlg 对话框

IMPLEMENT_DYNAMIC(CConnectInfoDlg, CDialogEx)

CConnectInfoDlg::CConnectInfoDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_CONNECTINFODLG, pParent)
{

}

CConnectInfoDlg::~CConnectInfoDlg()
{
}

void CConnectInfoDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CConnectInfoDlg, CDialogEx)
END_MESSAGE_MAP()


// CConnectInfoDlg 消息处理程序
