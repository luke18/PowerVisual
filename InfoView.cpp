// InfoView.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "OSMCtrlApp.h"
#include "InfoView.h"


// CInfoView

IMPLEMENT_DYNCREATE(CInfoView, CFormView)

CInfoView::CInfoView()
	: CFormView(CInfoView::IDD)
{

}

CInfoView::~CInfoView()
{
}

void CInfoView::DoDataExchange(CDataExchange* pDX)
{
	CFormView::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CInfoView, CFormView)
END_MESSAGE_MAP()


// CInfoView ���

#ifdef _DEBUG
void CInfoView::AssertValid() const
{
	CFormView::AssertValid();
}

#ifndef _WIN32_WCE
void CInfoView::Dump(CDumpContext& dc) const
{
	CFormView::Dump(dc);
}
#endif
#endif //_DEBUG


// CInfoView ��Ϣ�������
