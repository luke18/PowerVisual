#pragma once



// CFunctionView 窗体视图

class CFunctionView : public CFormView
{
	DECLARE_DYNCREATE(CFunctionView)

protected:
	CFunctionView();           // 动态创建所使用的受保护的构造函数
	virtual ~CFunctionView();

public:
	enum { IDD = IDD_FORMVIEW2 };
#ifdef _DEBUG
	virtual void AssertValid() const;
#ifndef _WIN32_WCE
	virtual void Dump(CDumpContext& dc) const;
#endif
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButtonRemoveSeries();
	afx_msg void OnBnClickedDispatch();
	afx_msg void OnBnClickedLoadBefore();
//	double xTime[24];
	afx_msg void OnBnClickedLoadAfter();
	afx_msg void OnBnClickedBranchArrow();
};


