#pragma once


// CConnectInfoDlg �Ի���

class CConnectInfoDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CConnectInfoDlg)

public:
	CConnectInfoDlg(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CConnectInfoDlg();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_CONNECTINFODLG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
};
