// TableView.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "OSMCtrlApp.h"
#include "TableView.h"
#include "ChartCtrl\ChartLineSerie.h"

#include<string>
#include <sstream>

#if defined _UNICODE ||defined UNICODE
typedef std::wstring TChartString;
typedef std::wstringstream TChartStringStream;
#else
typedef std::string TChartString;
typedef std::stringstream TChartStringStream;
#endif


// CTableView

IMPLEMENT_DYNCREATE(CTableView, CFormView)

CTableView::CTableView()
	: CFormView(CTableView::IDD)
{

}

CTableView::~CTableView()
{
}

void CTableView::DoDataExchange(CDataExchange* pDX)
{
	CFormView::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_CUSTOM1, m_ChartCtrl1);
}

BEGIN_MESSAGE_MAP(CTableView, CFormView)
END_MESSAGE_MAP()


// CTableView ���

#ifdef _DEBUG
void CTableView::AssertValid() const
{
	CFormView::AssertValid();
}

#ifndef _WIN32_WCE
void CTableView::Dump(CDumpContext& dc) const
{
	CFormView::Dump(dc);
}
#endif
#endif //_DEBUG


// CTableView ��Ϣ�������


void CTableView::OnInitialUpdate()
{
	CFormView::OnInitialUpdate();

	// TODO:  �ڴ����ר�ô����/����û���
	CChartAxis *pAxis = NULL;
	pAxis = m_ChartCtrl1.CreateStandardAxis(CChartCtrl::BottomAxis);
	pAxis->SetAutomatic(true);
	pAxis = m_ChartCtrl1.CreateStandardAxis(CChartCtrl::LeftAxis);
	pAxis->SetAutomatic(true);
	
}




// Draw line graph from given time and load array
void CTableView::DrawLineGraph(int dataNum, double *time, double *load)
{
	m_ChartCtrl1.EnableRefresh(false);
	CChartLineSerie *pLineSerie1;
	m_ChartCtrl1.RemoveAllSeries();//�����  
	pLineSerie1 = m_ChartCtrl1.CreateLineSerie();
	pLineSerie1->SetSeriesOrdering(poNoOrdering);//����Ϊ����  
	pLineSerie1->AddPoints(time, load, dataNum);
	pLineSerie1->SetName(_T("��������"));//SetName�����ý��ں��潲�� 
	m_ChartCtrl1.EnableRefresh(true);
}
