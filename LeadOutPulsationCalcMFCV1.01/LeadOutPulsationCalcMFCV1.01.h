
// LeadOutPulsationCalcMFCV1.01.h : main header file for the PROJECT_NAME application
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CLeadOutPulsationCalcMFCV101App:
// See LeadOutPulsationCalcMFCV1.01.cpp for the implementation of this class
//

class CLeadOutPulsationCalcMFCV101App : public CWinApp
{
public:
	CLeadOutPulsationCalcMFCV101App();

// Overrides
public:
	virtual BOOL InitInstance();

// Implementation

	DECLARE_MESSAGE_MAP()
};

extern CLeadOutPulsationCalcMFCV101App theApp;
