// jsq.h : main header file for the JSQ application
//

#if !defined(AFX_JSQ_H__CEB8DC24_59A3_45C1_8FA6_2842BF3EE902__INCLUDED_)
#define AFX_JSQ_H__CEB8DC24_59A3_45C1_8FA6_2842BF3EE902__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CJsqApp:
// See jsq.cpp for the implementation of this class
//

class CJsqApp : public CWinApp
{
public:
	CJsqApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CJsqApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CJsqApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_JSQ_H__CEB8DC24_59A3_45C1_8FA6_2842BF3EE902__INCLUDED_)
