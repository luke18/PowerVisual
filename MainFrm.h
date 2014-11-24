#pragma once
#include "TableView.h"
#include "InfoView.h"
#include "FunctionView.h"
#include "OSMCtrlAppView.h"

class CMainFrame : public CFrameWnd
{
protected: // create from serialization only
	CMainFrame();
	DECLARE_DYNCREATE(CMainFrame)

public:
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);

	// Implementation
public:
	friend class CTableView;
	CTableView *pTableView;
	CInfoView *pInfoView;
	CFunctionView *pFunctionView;
	COSMCtrlAppView *pMapView;

	CSplitterWnd m_splitter;
	CSplitterWnd m_splitter2;
	CSplitterWnd m_splitter3;
	virtual ~CMainFrame();

#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:  // control bar embedded members
	CStatusBar  m_wndStatusBar;
	CToolBar    m_wndToolBar;

	// Generated message map functions
protected:
	virtual BOOL OnCreateClient(LPCREATESTRUCT lpcs, CCreateContext* pContext);
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnUpdatePosition(CCmdUI* pCmdUI);
	afx_msg void OnUpdateLength(CCmdUI* pCmdUI);
	DECLARE_MESSAGE_MAP()
};


