// FunctionView.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "OSMCtrlApp.h"
#include "FunctionView.h"
#include "MainFrm.h"


// CFunctionView

IMPLEMENT_DYNCREATE(CFunctionView, CFormView)

CFunctionView::CFunctionView()
	: CFormView(CFunctionView::IDD)
{

}

CFunctionView::~CFunctionView()
{
}

void CFunctionView::DoDataExchange(CDataExchange* pDX)
{
	CFormView::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CFunctionView, CFormView)
	ON_BN_CLICKED(IDC_BUTTON1, &CFunctionView::OnBnClickedButtonRemoveSeries)
END_MESSAGE_MAP()


// CFunctionView ���

#ifdef _DEBUG
void CFunctionView::AssertValid() const
{
	CFormView::AssertValid();
}

#ifndef _WIN32_WCE
void CFunctionView::Dump(CDumpContext& dc) const
{
	CFormView::Dump(dc);
}
#endif
#endif //_DEBUG


// CFunctionView ��Ϣ�������

//Remove all series from line graph
void CFunctionView::OnBnClickedButtonRemoveSeries()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	CMainFrame *pFrame = (CMainFrame *)AfxGetMainWnd();
	CTableView* pTableView = (CTableView *)pFrame->pTableView;
	pTableView->m_ChartCtrl1.RemoveAllSeries();
}
