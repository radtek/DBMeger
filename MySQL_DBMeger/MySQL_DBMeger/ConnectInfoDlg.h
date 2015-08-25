#pragma once


// CConnectInfoDlg 对话框

class CConnectInfoDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CConnectInfoDlg)

public:
	CConnectInfoDlg(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CConnectInfoDlg();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_CONNECTINFODLG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};
