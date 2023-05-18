
// clac.h: główny plik nagłówkowy aplikacji clac
//
#pragma once


#ifndef __AFXWIN_H__
	#error "dołącz nagłówek „pch.h” przed dołączeniem tego pliku na potrzeby optymalizacji PCH"
#endif

#include "resource.h"       // główne symbole
#include "RPN.h"
#include "Dzialania.h"

// CclacApp:
// Aby uzyskać implementację klasy, zobacz clac.cpp
//

class CclacApp : public CWinApp
{
public:
	CclacApp() noexcept;


// Przesłania
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// Implementacja
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
		afx_msg void On17();
};

extern CclacApp theApp;
