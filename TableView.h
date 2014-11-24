#pragma once
#include "ChartCtrl\ChartCtrl.h"
#include "ChartCtrl\ChartLineSerie.h"


// CTableView ������ͼ

class CTableView : public CFormView
{
	DECLARE_DYNCREATE(CTableView)

protected:
	CTableView();           // ��̬������ʹ�õ��ܱ����Ĺ��캯��
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
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��s

	DECLARE_MESSAGE_MAP()
public:
	CChartCtrl m_ChartCtrl1;
	CChartLineSerie *pLineSerie1;
	virtual void OnInitialUpdate();
	// Draw line graph from given time and load array
	void DrawLineGraph(int dataNum, double *time, double *load);
//	afx_msg void OnLButtonDblClk(UINT nFlags, CPoint point);
};


