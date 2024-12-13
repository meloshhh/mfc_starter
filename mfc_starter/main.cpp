#include <afxwin.h>
#include "Dialog1.h"

class App : public CWinApp
{
public:
	BOOL InitInstance();
};

BOOL App::InitInstance()
{
	CWinApp::InitInstance();

	m_pMainWnd = new CFrameWnd();
	((CFrameWnd*)m_pMainWnd)->Create(NULL, L"mfc_starter");
	m_pMainWnd->ShowWindow(SW_SHOW);

	Dialog1* dialog = new Dialog1(m_pMainWnd);
	dialog->ShowWindow(TRUE);

	return TRUE;
}

App app;