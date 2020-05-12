// jsqDlg.cpp : implementation file
//

#include "stdafx.h"
#include "jsq.h"
#include "jsqDlg.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CAboutDlg dialog used for App About

int count=0;
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
// CJsqDlg dialog

CJsqDlg::CJsqDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CJsqDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CJsqDlg)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
	// Note that LoadIcon does not require a subsequent DestroyIcon in Win32
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CJsqDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CJsqDlg)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CJsqDlg, CDialog)
	//{{AFX_MSG_MAP(CJsqDlg)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTTON1, OnButton1)
	ON_BN_CLICKED(IDC_BUTTON4, OnButton4)
	ON_BN_CLICKED(IDC_BUTTON3, OnButton3)
	ON_BN_CLICKED(IDC_BUTTON5, OnButton5)
	ON_BN_CLICKED(IDC_BUTTON6, OnButton6)
	ON_BN_CLICKED(IDC_BUTTON7, OnButton7)
	ON_BN_CLICKED(IDC_BUTTON8, OnButton8)
	ON_BN_CLICKED(IDC_BUTTON9, OnButton9)
	ON_BN_CLICKED(IDC_BUTTON10, OnButton10)
	ON_BN_CLICKED(IDC_BUTTON11, OnButton11)
	ON_BN_CLICKED(IDC_BUTTON12, OnButton12)
	ON_BN_CLICKED(IDC_BUTTON13, OnButton13)
	ON_BN_CLICKED(IDC_BUTTON14, OnButton14)
	ON_BN_CLICKED(IDC_BUTTON15, OnButton15)
	ON_BN_CLICKED(IDC_BUTTON16, OnButton16)
	ON_BN_CLICKED(IDC_BUTTON19, OnButton19)
	ON_BN_CLICKED(IDC_BUTTON18, OnButton18)
	ON_BN_CLICKED(IDC_BUTTON2, OnButton2)
	ON_BN_CLICKED(IDC_BUTTON17, OnButton17)
	ON_BN_CLICKED(IDC_BUTTON20, OnButton20)
	ON_BN_CLICKED(IDC_BUTTON21, OnButton21)
	ON_BN_CLICKED(IDC_BUTTON22, OnButton22)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CJsqDlg message handlers

BOOL CJsqDlg::OnInitDialog()
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

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon
	
	// TODO: Add extra initialization here
	
	return TRUE;  // return TRUE  unless you set the focus to a control
}

void CJsqDlg::OnSysCommand(UINT nID, LPARAM lParam)
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

void CJsqDlg::OnPaint() 
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

// The system calls this to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CJsqDlg::OnQueryDragIcon()
{
	return (HCURSOR) m_hIcon;
}
//设置运算符的优先级
int Lv(char m)
{
	switch(m)
	{
	case '+':
		return 1; break;
	case '-':
		return 1; break;
	case '*':
		return 2; break;
	case '/':
		return 2; break;
	case '%':
		return 2; break;
	case '(':
		return 0; break;
	case ')':
		return 0; break;
	case '!':
		return -1; break;
	default:break;
	}
}
//声明堆栈类
template<class T>
class stack;
//节点类
template <class T>
class Node {
	friend stack<T>; //堆栈类为友元
private:
	T data;
	Node<T> *link;
};

template<class T>
class stack
{
public:
	stack() { top = 0; }
	bool IsEmpty() const
	{
		return top == 0;
	}
	//bool IsFull() const;
	T Top() const;
	stack<T>& Add(const T& x); //添加方法
	stack<T>& Delete(T& x);    //删除方法
private:
	Node<T> *top;
};

//返回栈顶元素
template<class T>
T stack<T>::Top()const
{
	return top->data;
}

//在栈顶添加元素
template<class T>
stack<T>& stack<T>::Add(const T& x)
{
	Node<T> *p = new Node<T>;
	p->data = x;
	p->link = top;
	top = p;
	return *this;
}

//在栈顶删除元素
template<class T>
stack<T>& stack<T>::Delete(T& x)
{
	x = top->data;
	Node<T> *p = top;
	top = top->link;
	delete p;
	return *this;
}

//加号
void CJsqDlg::OnButton1() 
{
	// TODO: Add your control notification handler code here
	CString a;
	GetDlgItemText(IDC_STATIC,a);
	SetDlgItemText(IDC_STATIC,_T(a+"+"));
}
//乘号
void CJsqDlg::OnButton4() 
{
	// TODO: Add your control notification handler code here
	CString a;
	GetDlgItemText(IDC_STATIC,a);
	SetDlgItemText(IDC_STATIC,_T(a+"*"));
}
//减号
void CJsqDlg::OnButton3() 
{
	// TODO: Add your control notification handler code here
	CString a;
	GetDlgItemText(IDC_STATIC,a);
	SetDlgItemText(IDC_STATIC,_T(a+"-"));
}
//除号
void CJsqDlg::OnButton5() 
{
	// TODO: Add your control notification handler code here
	CString a;
	GetDlgItemText(IDC_STATIC,a);
	SetDlgItemText(IDC_STATIC,_T(a+"/"));
}
//取余号
void CJsqDlg::OnButton6() 
{
	// TODO: Add your control notification handler code here
	CString a;
	GetDlgItemText(IDC_STATIC,a);
	SetDlgItemText(IDC_STATIC,_T(a+"%"));
}
//数字1
void CJsqDlg::OnButton7() 
{
	// TODO: Add your control notification handler code here
		CString a;
	GetDlgItemText(IDC_STATIC,a);
	SetDlgItemText(IDC_STATIC,_T(a+"1"));
}
//数字2
void CJsqDlg::OnButton8() 
{
	// TODO: Add your control notification handler code here
		CString a;
	GetDlgItemText(IDC_STATIC,a);
	SetDlgItemText(IDC_STATIC,_T(a+"2"));
}
//数字3
void CJsqDlg::OnButton9() 
{
	// TODO: Add your control notification handler code here
		CString a;
	GetDlgItemText(IDC_STATIC,a);
	SetDlgItemText(IDC_STATIC,_T(a+"3"));
}
//数字4
void CJsqDlg::OnButton10() 
{
	// TODO: Add your control notification handler code here
		CString a;
	GetDlgItemText(IDC_STATIC,a);
	SetDlgItemText(IDC_STATIC,_T(a+"4"));
}
//数字5
void CJsqDlg::OnButton11() 
{
	// TODO: Add your control notification handler code here
		CString a;
	GetDlgItemText(IDC_STATIC,a);
	SetDlgItemText(IDC_STATIC,_T(a+"5"));
}
//数字6
void CJsqDlg::OnButton12() 
{
	// TODO: Add your control notification handler code here
		CString a;
	GetDlgItemText(IDC_STATIC,a);
	SetDlgItemText(IDC_STATIC,_T(a+"6"));
}
//数字7
void CJsqDlg::OnButton13() 
{
	// TODO: Add your control notification handler code here
		CString a;
	GetDlgItemText(IDC_STATIC,a);
	SetDlgItemText(IDC_STATIC,_T(a+"7"));
}
//数字8
void CJsqDlg::OnButton14() 
{
	// TODO: Add your control notification handler code here
		CString a;
	GetDlgItemText(IDC_STATIC,a);
	SetDlgItemText(IDC_STATIC,_T(a+"8"));
}
//数字9
void CJsqDlg::OnButton15() 
{
	// TODO: Add your control notification handler code here
		CString a;
	GetDlgItemText(IDC_STATIC,a);
	SetDlgItemText(IDC_STATIC,_T(a+"9"));
}
//数字0
void CJsqDlg::OnButton16() 
{
	// TODO: Add your control notification handler code here
		CString a;
	GetDlgItemText(IDC_STATIC,a);
	SetDlgItemText(IDC_STATIC,_T(a+"0"));
}
//左括号
void CJsqDlg::OnButton19() 
{
	// TODO: Add your control notification handler code here
		CString a;
	GetDlgItemText(IDC_STATIC,a);
	SetDlgItemText(IDC_STATIC,_T(a+"("));
}
//右括号
void CJsqDlg::OnButton18() 
{
	// TODO: Add your control notification handler code here
		CString a;
	GetDlgItemText(IDC_STATIC,a);
	SetDlgItemText(IDC_STATIC,_T(a+")"));
}

//等于号
void CJsqDlg::OnButton2() 
{
	// TODO: Add your control notification handler code here
	stack<double> X;                  //堆栈1用作存数
	stack<char> Y;                    //堆栈2用作存运算符
	CString str = "";                 //str用作存放表达式
	CString str2 = "";                //str2用作拼接多位数字
	char c;                           //c用来存放Y中出栈的元素
	double C;                         //C用来存放X中出栈的元素
	GetDlgItemText(IDC_STATIC,str);   //获取面板上的表达式
	str += "!?";                      //在表达式的末尾加上！？方便后面的操作
	int i = 0;                        //i从0开始，用来检索表达式
	int e=0;                          //e用来记录表达式中左括号的数量
	int f=0;                          //f用来记录表达式中右括号的数量
	double t;                         //t用来保存两个double运算后的结果         
	double q;                         //q用来保存string转换成double后的数
	bool adc=true;                    
	//判断表达式是否规范
	for(int x=0;str[x] != '!';x++)
	{
		if(str[x]=='.')
		{
			if(str[x+1]=='('||str[x+1]==')'|| str[x+1]=='%' || str[x+1] =='!'||str[x+1]>=42 && str[x+1]<=47)
			{
				//MessageBox("小数点后面没跟数字！");
				SetDlgItemText(IDC_STATIC,_T("小数点后面没跟数字！"));
				return;
			}
		}
		if(str[x]=='(')
		{
			e++;
			if(str[x+1]=='.')
			{
				//MessageBox("小数点前面没跟数字！");
				SetDlgItemText(IDC_STATIC,_T("小数点前面没跟数字！"));
				return;	
			}
			if(str[x+1]==')')
			{
			//	MessageBox("括号里面不能为空！");
				SetDlgItemText(IDC_STATIC,_T("括号里面不能为空！"));
				return;
			}
			if(x>0 && str[x-1] > 47 && str[x-1] < 58)
			{
			//	MessageBox("括号前面没有运算符！");
				SetDlgItemText(IDC_STATIC,_T("括号前面没有运算符！"));
				return;
			}
		}

		if(str[x]==')')
		{
			f++;
			if(str[x+1]=='.')
			{
				//MessageBox("小数点前面没跟数字！");
				SetDlgItemText(IDC_STATIC,_T("小数点前面没跟数字！"));
				return;	
			}
			if(str[x+1] > 47 && str[x+1] < 58)
			{
				//MessageBox("括号后面没有运算符！");
				SetDlgItemText(IDC_STATIC,_T("括号后面没有运算符！"));
				return;
			}
			int T=0;
			while(T<x)
			{
				if(str[T]=='(')
					break;
				T++;
			}
			if(T==x)
			{
				//MessageBox("左右括号不匹配！");
				SetDlgItemText(IDC_STATIC,_T("左右括号不匹配！"));
				return;
			}
			if(str[x+1]== '(')
			{
				//MessageBox("括号后面没有运算符！");
				SetDlgItemText(IDC_STATIC,_T("括号后面没有运算符！"));
				return;
			}
		}
		if(str[x]>=42 && str[x]<=47 || str[x]=='%')
		{
			if(str[x+1]=='.')
			{
				//MessageBox("小数点前面没跟数字！");
				SetDlgItemText(IDC_STATIC,_T("小数点前面没跟数字！"));
				return;	
			}
			if(x==0 && str[x]!='-')
			{
				//MessageBox("运算符前面没有数字！");
				SetDlgItemText(IDC_STATIC,_T("运算符前面没有数字！"));
				return;
			}
			if(str[x+1]=='!'|| str[x+1]==')')
			{
				//MessageBox("运算符后面没有数字！");
				SetDlgItemText(IDC_STATIC,_T("运算符后面没有数字！"));
				return;
			}
			if(str[x+1]>=42 && str[x+1]<=47 || str[x+1]=='%')
			{
				//MessageBox("连续的多个运算符！");
				SetDlgItemText(IDC_STATIC,_T("连续的多个运算符！"));
				return;
			}
		}
	}
	if(e!=f)
	{
		//MessageBox("左右括号不匹配！");
		SetDlgItemText(IDC_STATIC,_T("左右括号不匹配！"));
		return;
	}

	//开始对表达式进行入栈运算：
	while (str[i] != '?')
	{
		if (str[i] > 47 && str[i] < 58 || str[i]=='.' )
		{
			int F=0;             //F用来记录小数点的个数
			for (i; str[i] > 47 && str[i] < 58 || str[i]=='.' ; i++)
			{
				str2 += str[i];
				if(str[i]=='.')
				{
					F++;
				}
				if(F>1)
				{
					//MessageBox("一个数的小数点多于一个！");
					SetDlgItemText(IDC_STATIC,_T("一个数的小数点多于一个！"));
					return;
				}
			}
			q = atof(str2);
			str2 = "";
			X.Add(q);
		}
		if (str[i] >= 33 && str[i] <= 47)//33是感叹号，47是除号，所以范围比较大
		{
			if (i == 0 && str[i] == '-' && adc)
			{
				i++;
				if (str[i] > 47 && str[i] < 58 || str[i]=='.')
				{
					int F=0;
					for (i; str[i] > 47 && str[i] < 58 || str[i]=='.'; i++)
					{
						str2 += str[i];
						if(str[i]=='.')
						{
							F++;
						}
						if(F>1)
						{
						//	MessageBox("一个数的小数点多于一个！");
							SetDlgItemText(IDC_STATIC,_T("一个数的小数点多于一个！"));
							return;
						}
					}
					q = 0 - atof(str2);
					str2 = "";
					X.Add(q);
					i--;
				}
				else if(str[i]=='(' )
				{
				adc=false;
				double Q=0;
				X.Add(Q);
				i=-1;
				}
			}
			else if (Y.IsEmpty() || str[i] == '(' || Lv(str[i]) > Lv(Y.Top()))
			{
				Y.Add(str[i]);
				if (str[i + 1] == '-')
				{
					//cout << "..."<<i<<endl;
					i = i + 2;
					if (str[i] > 47 && str[i] < 58 || str[i]=='.')//************************
					{
						int F=0;
						for (i; str[i] > 47 && str[i] < 58 || str[i]=='.'; i++)
						{
							str2 += str[i];
							if(str[i]=='.')
							{
								F++;
							}
							if(F>1)
							{
							//	MessageBox("一个数的小数点多于一个！");
								SetDlgItemText(IDC_STATIC,_T("一个数的小数点多于一个！"));
								return;
							}
						}
						q = 0 - atof(str2);
						str2 = "";
						X.Add(q);
					}
					i--;
				}
			
			}
			else
			{
				if (str[i] == ')')
				{
					for (; Y.Top() != '('; Y.Delete(c))
					{
						char f = Y.Top();
						double a = X.Top();
						if(a==0 && (f=='/' || f=='%'))
						{
							//MessageBox("除数不能为0！");
							SetDlgItemText(IDC_STATIC,_T("除数不能为0！"));
							return;
						}
						X.Delete(C);
						double b = X.Top();
						X.Delete(C);
						switch (f)
						{
						case '+':t = b + a; break;
						case '-':t = b - a; break;
						case '*':t = b * a; break;
						case '/':t = b / a; break;
						case '%':
							if(a<1 && a>-1)
							{
								//MessageBox("取整后除数为0！");
								SetDlgItemText(IDC_STATIC,_T("取整后除数为0！"));
								return;	
							}
							t = (int)b % (int)a; 
							break;
						default:break;
						}
						X.Add(t);

					}
					Y.Delete(c);
				}
				else
				{
					for (; !(Y.IsEmpty()) && Lv(str[i]) <= Lv(Y.Top()); Y.Delete(c))
					{
						char f = Y.Top();
						double a = X.Top();
						if(a==0 && (f=='/' || f=='%'))
						{
							//MessageBox("除数不能为0！");
							SetDlgItemText(IDC_STATIC,_T("除数不能为0！"));
							return;
						}
						X.Delete(C);
						double b = X.Top();
						X.Delete(C);
						switch (f)
						{
						case '+':t = b + a; break;
						case '-':t = b - a; break;
						case '*':t = b * a; break;
						case '/':t = b / a; break;
						case '%':
							if(a<1 && a>-1)
							{
								MessageBox("取整后除数为0！");
								SetDlgItemText(IDC_STATIC,_T("错误表达式"));
								return;	
							}
							t = (int)b % (int)a;
							break;
						default:break;
						}
						X.Add(t);
						//cout << "..." << endl;
					}
					Y.Add(str[i]);
				}
			}
		}
		i++;
	}
	CString a;
	double I=X.Top();
	X.Delete(C);
	a.Format("%lf",I); 
	SetDlgItemText(IDC_STATIC,_T(a));
	
}

void CJsqDlg::OnButton17() 
{
	// TODO: Add your control notification handler code here
	SetDlgItemText(IDC_STATIC,_T(""));
}

void CJsqDlg::OnButton20() 
{
	// TODO: Add your control notification handler code here
	CString temp,num;
	GetDlgItemText(IDC_STATIC,num);
	temp=num.Left(num.GetLength()-1);
	SetDlgItemText(IDC_STATIC,temp);
}

//读入文件
void CJsqDlg::OnButton21() 
{
	// TODO: Add your control notification handler code here
	//count记录答案文件已经生成了多少个，用作后缀
	CString Count="";
	Count.Format(_T("%d"), count);
	CString strFile = _T("");
	//答案文件输出到D盘根目录里：
	CString strFile2 = "D:\\anwser"+Count+".txt";
	CString cstrLine=_T("");
	CString strText=_T("");
	//dlgFile选择框
	CFileDialog dlgFile(TRUE, NULL, NULL, OFN_HIDEREADONLY, _T("Describe Files (*.txt)|*.txt|All Files (*.*)|*.*||"), NULL);
//点击确认之后开始执行
if (dlgFile.DoModal()==IDOK)
{
	int coun =0;     //coun用来记录表达式的数量
	CString Coun="";
    strFile = dlgFile.GetPathName();   //获取点开的文件的路径
	CString strText = "";              
	CStdioFile file;                   //file是要导入的文件
	CStdioFile file2;                  //file2是要导出的文件
	file.Open(strFile,CFile::modeRead);
	file2.Open(strFile2, CFile::modeCreate | CFile::modeNoTruncate | CFile::modeWrite | CFile::shareDenyWrite);
while (file.ReadString(cstrLine))
{
	coun++;
	Coun.Format(_T("%d"), coun);
	SetDlgItemText(IDC_STATIC,_T(cstrLine));
	OnButton2();                      //OnButton2是等于号
	GetDlgItemText(IDC_STATIC,strText);
	file2.WriteString(Coun+"、"+strText+"\n");
//	MessageBox(cstrLine);
}
SetDlgItemText(IDC_STATIC,_T("请到answer"+Count+".txt查看答案"));
count++;
	//file.ReadString(strText);
	//SetDlgItemText(IDC_STATIC,_T(strText));
}

}

void CJsqDlg::OnButton22() 
{
	// TODO: Add your control notification handler code here
	CString a;
	GetDlgItemText(IDC_STATIC,a);
	SetDlgItemText(IDC_STATIC,_T(a+"."));
}

