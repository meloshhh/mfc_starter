#include "Dialog1.h"

Dialog1::Dialog1(CWnd* parent) : CDialog()
{
	Create(IDD, parent);
}

BOOL Dialog1::OnInitDialog()
{
	CDialog::OnInitDialog();
	return TRUE;
}

void Dialog1::DoDataExchange(CDataExchange* pDX)
{
	DDX_Control(pDX, IDC_EDIT1, edit1);
	DDX_Control(pDX, IDC_EDIT2, edit2);
}
