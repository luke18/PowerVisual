// FunctionView.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "OSMCtrlApp.h"
#include "FunctionView.h"


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
