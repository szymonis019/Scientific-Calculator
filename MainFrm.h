
// MainFrm.h: interfejs klasy CMainFrame
//

#pragma once

class CMainFrame : public CFrameWnd
{
	
protected: // utwórz tylko na podstawie serializacji
	CMainFrame() noexcept;
	DECLARE_DYNCREATE(CMainFrame)

// Atrybuty
public:

// Operacje
public:

// Przesłania
public:
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);

// Implementacja
public:
	virtual ~CMainFrame();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif


// Wygenerowano funkcje mapy komunikatów
protected:
	DECLARE_MESSAGE_MAP()

};


