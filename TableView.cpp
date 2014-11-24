// TableView.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "OSMCtrlApp.h"
#include "TableView.h"

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
//	ON_WM_LBUTTONDBLCLK()
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
	//double x[1000], y[1000];
	//for (int i = 0; i<1000; i++)
	//{
	//	x[i] = i;
	//	y[i] = sin(float(i));
	//}

	//DrawLineGraph(1000, x, y);
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

	m_ChartCtrl1.RemoveAllSeries();//�����  
	pLineSerie1 = m_ChartCtrl1.CreateLineSerie();
	pLineSerie1->SetSeriesOrdering(poNoOrdering);//����Ϊ���� 
	double x[1000], y[1000];
	for (int i = 0; i<1000; i++)
	{
		x[i] = i;
		y[i] = sin(float(i));
	}


	pLineSerie1->AddPoints(time, load, dataNum);
	//pLineSerie1->SetName(_T("��������"));//SetName�����ý��ں��潲�� 
	m_ChartCtrl1.EnableRefresh(true);
}


//void CTableView::OnLButtonDblClk(UINT nFlags, CPoint point)
//{
//	// TODO:  �ڴ������Ϣ�����������/�����Ĭ��ֵ
//	m_ChartCtrl1.EnableRefresh(false);
//
//	m_ChartCtrl1.RemoveAllSeries();//�����  
//	pLineSerie1 = m_ChartCtrl1.CreateLineSerie();
//	pLineSerie1->SetSeriesOrdering(poNoOrdering);//����Ϊ���� 
//	double x[1000], y[1000];
//	for (int i = 0; i<1000; i++)
//	{
//		x[i] = i;
//		y[i] = sin(float(i));
//	}
//
//
//	pLineSerie1->AddPoints(x, y, 1000);
//	//pLineSerie1->SetName(_T("��������"));//SetName�����ý��ں��潲�� 
//	m_ChartCtrl1.EnableRefresh(true);
//
//	//CFormView::OnLButtonDblClk(nFlags, point);
//}
