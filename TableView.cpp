// TableView.cpp : 实现文件
//

#include "stdafx.h"
#include "OSMCtrlApp.h"
#include "TableView.h"


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


// CTableView 诊断

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


// CTableView 消息处理程序
