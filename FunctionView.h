#pragma once



// CFunctionView ������ͼ

class CFunctionView : public CFormView
{
	DECLARE_DYNCREATE(CFunctionView)

protected:
	CFunctionView();           // ��̬������ʹ�õ��ܱ����Ĺ��캯��
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
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
};

