// 名字已消失了认识的人的评价Dlg.cpp : implementation file
//

#include "stdafx.h"
#include "名字已消失了认识的人的评价.h"
#include "名字已消失了认识的人的评价Dlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CAboutDlg dialog used for App About

class CAboutDlg : public CDialog
{
public:
	CAboutDlg();

// Dialog Data
	//{{AFX_DATA(CAboutDlg)
	enum { IDD = IDD_ABOUTBOX };
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CAboutDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	//{{AFX_MSG(CAboutDlg)
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialog(CAboutDlg::IDD)
{
	//{{AFX_DATA_INIT(CAboutDlg)
	//}}AFX_DATA_INIT
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CAboutDlg)
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialog)
	//{{AFX_MSG_MAP(CAboutDlg)
		// No message handlers
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMyDlg dialog

CMyDlg::CMyDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CMyDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CMyDlg)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CMyDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CMyDlg)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CMyDlg, CDialog)
	//{{AFX_MSG_MAP(CMyDlg)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTTON1, OnButton1)
	ON_BN_CLICKED(IDC_BUTTON2, OnButton2)
	ON_BN_CLICKED(IDC_BUTTON3, OnButton3)
	ON_BN_CLICKED(IDC_BUTTON4, OnButton4)
	ON_BN_CLICKED(IDC_BUTTON5, OnButton5)
	ON_BN_CLICKED(IDC_BUTTON6, OnButton6)
	ON_BN_CLICKED(IDC_BUTTON7, OnButton7)
	ON_BN_CLICKED(IDC_BUTTON8, OnButton8)
	ON_BN_CLICKED(IDC_BUTTON9, OnButton9)
	ON_BN_CLICKED(IDC_BUTTON10, OnButton10)
	//}}AFX_MSG_MAP
	ON_BN_CLICKED(IDC_BUTTON11, &CMyDlg::OnBnClickedButton11)
	ON_BN_CLICKED(IDC_BUTTON12, &CMyDlg::OnBnClickedButton12)
	ON_BN_CLICKED(IDC_BUTTON13, &CMyDlg::OnBnClickedButton13)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMyDlg message handlers

BOOL CMyDlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	// Add "About..." menu item to system menu.

	// IDM_ABOUTBOX must be in the system command range.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		CString strAboutMenu;
		strAboutMenu.LoadString(IDS_ABOUTBOX);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon
	
	// TODO: Add extra initialization here
	
	return TRUE;  // return TRUE  unless you set the focus to a control
}

void CMyDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialog::OnSysCommand(nID, lParam);
	}
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CMyDlg::OnPaint() 
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, (WPARAM) dc.GetSafeHdc(), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialog::OnPaint();
	}
}

HCURSOR CMyDlg::OnQueryDragIcon()
{
	return (HCURSOR) m_hIcon;
}

void CMyDlg::OnButton1() 
{
	// TODO: Add your control notification handler code here
	MessageBox("一个背叛者，还会爆破端口","软盘君",MB_ICONHAND);
}

void CMyDlg::OnButton2() 
{
	// TODO: Add your control notification handler code here
	for(int i=0;i<3;i++)
		MessageBox("是个戏精","依寒",MB_ICONWARNING);
	MessageBox("重要的事情需要说三遍","警告",MB_ICONWARNING);
	
}

void CMyDlg::OnButton3() 
{
	// TODO: Add your control notification handler code here
	MessageBox("一个沙雕杠精","FinderMister",MB_ICONHAND);
}

void CMyDlg::OnButton4() 
{
	// TODO: Add your control notification handler code here
	for(int i=0;i<3;i++)
		MessageBox("萌橙就是依寒","萌橙",MB_ICONWARNING);
MessageBox("重要的事情需要说三遍","警告",MB_ICONWARNING);
}

void CMyDlg::OnButton5() 
{
	// TODO: Add your control notification handler code here
	MessageBox("是个很皮的人","狗吠九天");
	
}

void CMyDlg::OnButton6() 
{
	// TODO: Add your control notification handler code here
	MessageBox("一个不懂版权的（营销号行为），就比如“装载的视频剪辑过就可以投自制”","TheColdWinte寒冬",MB_ICONHAND);
}

void CMyDlg::OnButton7() 
{
	// TODO: Add your control notification handler code here
	MessageBox("会威胁别人","VmLu_Rui",MB_ICONWARNING);
}

void CMyDlg::OnButton8() 
{
	// TODO: Add your control notification handler code here
	MessageBox("诸葛亮杀毒作者","新地平线");
}

void CMyDlg::OnButton9() 
{
	// TODO: Add your control notification handler code here
	MessageBox("会c++的","酸菜鱼");
}

void CMyDlg::OnButton10() 
{
	// TODO: Add your control notification handler code here
	for(int i=0;i<3;i++)
	MessageBox("依寒分身体","Mr Chen",MB_ICONWARNING);
	MessageBox("重要的事情需要说三遍","警告",MB_ICONWARNING);
}


void CMyDlg::OnBnClickedButton11()
{
	// TODO: 在此添加控件通知处理程序代码
	MessageBox("老有意思——刘永康\n你觉得有人愿意和rz和平？——刘永康", "软盘君", MB_ICONINFORMATION);
}


void CMyDlg::OnBnClickedButton12()
{
	// TODO: 在此添加控件通知处理程序代码
	MessageBox("砸蔡**——FinderMister\n转载的视频剪辑后投自制——FinderMister\n名字已消失了他妈的名字叫赖艳红——FinderMister\n爷笑了——FinderMister\n爷——FinderMister\n三天之内撒了你——FinderMister\n给爷爬——FinderMister", "FinderMister", MB_ICONINFORMATION);
}


void CMyDlg::OnBnClickedButton13()
{
	// TODO: 在此添加控件通知处理程序代码
	MessageBox("转载的视频剪辑过就可以投自制——TheColdWinte寒冬\n砸蔡**——TheColdWinte寒冬", "TheColdWinte寒冬" "软盘君", MB_ICONINFORMATION);
}
