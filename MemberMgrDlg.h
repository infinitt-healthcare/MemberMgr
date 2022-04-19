
// MemberMgrDlg.h: 헤더 파일
//

#pragma once


// CMemberMgrDlg 대화 상자
class CMemberMgrDlg : public CDialogEx
{
// 생성입니다.
public:
	CMemberMgrDlg(CWnd* pParent = nullptr);	// 표준 생성자입니다.

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MEMBERMGR_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 지원입니다.


// 구현입니다.
protected:
	HICON m_hIcon;

	// 생성된 메시지 맵 함수
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	// 아이디
	CString m_strID;
	// 이름
	CString m_strName;
	// 우편번호
	int m_intPostCode;
	// 주소
	CString m_strAdress;
	afx_msg void OnBnClickedCheckMale();
	BOOL m_bMale;
	BOOL m_bFemale;
	// 전화번호
	CString m_strPhone1;
	CString m_strPhone2;
	CString m_strPhone3;
	// 나이
	int m_intAge;
	int m_iHobby1;

	afx_msg void OnBnClickedRadioHobby1();
	afx_msg void OnBnClickedOk();
	afx_msg void OnBnClickedButtonNew();
};
