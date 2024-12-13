#pragma once

#include <afxwin.h>
#include <afxdialogex.h>
#include "resource.h"

class Dialog1 : public CDialog
{
public:
	Dialog1(CWnd* parent);
	virtual BOOL OnInitDialog();
protected:
	enum { IDD = IDD_DIALOG1 };
	CEdit edit1;
	CEdit edit2;

	virtual void DoDataExchange(CDataExchange* pDX);
};

