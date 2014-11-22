#pragma once



// CTableView 窗体视图

class CTableView : public CFormView
{
	DECLARE_DYNCREATE(CTableView)

protected:
	CTableView();           // 动态创建所使用的受保护的构造函数
	virtual ~CTableView();

public:
	enum { IDD = IDD_FORMVIEW };
#ifdef _DEBUG
	virtual void AssertValid() const;
#ifndef _WIN32_WCE
	virtual void Dump(CDumpContext& dc) const;
#endif
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};


