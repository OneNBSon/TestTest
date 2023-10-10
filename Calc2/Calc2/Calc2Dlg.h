
// Calc2Dlg.h: 헤더 파일
//

#pragma once

enum OperaterFlag {
	NONE,
	PLUS,
	MINUS,
	MULTYPL,
	DIVID,

	MAXNUM,

};

enum LastOperater {
	LAST_NONE,
	LAST_PLUS,
	LAST_MINUS,
	LAST_MULTYPL,
	LAST_DIVID,
	LAST_Equal,

	LAST_MAXNUM,

};

struct CalcType {

};

// CCalc2Dlg 대화 상자
class CCalc2Dlg : public CDialogEx
{
public:
	//char operater_flag = 0;
	enum OperaterFlag operater_flag = NONE;
	enum LastOperater LastOperate = LAST_NONE;

	int m_step = 0;
	double m_value = 0;
	int m_count = 0;
	bool Overflow = FALSE;
	CString exception = L"OverFlow";

	//Func
	void CalcOperate(double m_value_two);
	void Fourbasicoperations(OperaterFlag Flag);
	CString SignCalc(CString str);
	void Clear();
	CString ConvertOperate(OperaterFlag Operate);
	BOOL ChckforOverFlow(double Value);

// 생성입니다.
public:
	CCalc2Dlg(CWnd* pParent = nullptr);	// 표준 생성자입니다.

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_CALC2_DIALOG };
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
	virtual BOOL OnCommand(WPARAM wParam, LPARAM lParam);
public:
	afx_msg void OnBnClickedButton11();
	afx_msg void OnBnClickedButton12();
	afx_msg void OnBnClickedResult();
	afx_msg void OnBnClickedClear();
	afx_msg void OnBnClickedBackspace();
	afx_msg void OnBnClickedSign();
};

