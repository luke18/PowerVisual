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
	ON_BN_CLICKED(IDC_BUTTON2, &CFunctionView::OnBnClickedDispatch)
	ON_BN_CLICKED(IDC_BUTTON3, &CFunctionView::OnBnClickedLoadBefore)
	ON_BN_CLICKED(IDC_BUTTON4, &CFunctionView::OnBnClickedLoadAfter)
	ON_BN_CLICKED(IDC_BUTTON5, &CFunctionView::OnBnClickedBranchArrow)
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


void CFunctionView::OnBnClickedDispatch()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	CMainFrame *pFrame = (CMainFrame *)AfxGetMainWnd();
	COSMCtrlAppView *pMapView = (COSMCtrlAppView *)pFrame->pMapView;
	pMapView->EVCalculate();
}


void CFunctionView::OnBnClickedLoadBefore()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	CMainFrame *pFrame = (CMainFrame *)AfxGetMainWnd();
	CTableView* pTableView = (CTableView *)pFrame->pTableView;
	COSMCtrlAppView* pMapView = (COSMCtrlAppView*)pFrame->pMapView;
	CInfoView* pInfoView = (CInfoView*)pFrame->pInfoView;

	double xTime[24];
	for (int i = 0; i < 24; i++)
		xTime[i] = i;

	pTableView->DrawLineGraph(24, xTime, pMapView->m_allload);
}


void CFunctionView::OnBnClickedLoadAfter()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	CMainFrame *pFrame = (CMainFrame *)AfxGetMainWnd();
	CTableView* pTableView = (CTableView *)pFrame->pTableView;
	COSMCtrlAppView* pMapView = (COSMCtrlAppView*)pFrame->pMapView;
	CInfoView* pInfoView = (CInfoView*)pFrame->pInfoView;

	double xTime[24];
	for (int i = 0; i < 24; i++)
		xTime[i] = i;

	pTableView->DrawLineGraph(24, xTime, pMapView->m_allloadAfter);
}


void CFunctionView::OnBnClickedBranchArrow()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	CMainFrame *pFrame = (CMainFrame *)AfxGetMainWnd();
	CTableView* pTableView = (CTableView *)pFrame->pTableView;
	COSMCtrlAppView* pMapView = (COSMCtrlAppView*)pFrame->pMapView;
	CInfoView* pInfoView = (CInfoView*)pFrame->pInfoView;

	pMapView->PowerFlowArrow();
}
