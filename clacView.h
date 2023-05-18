
// clacView.h: interfejs klasy CclacView
//

#pragma once


class CclacView : public CView
{
protected: // utwórz tylko na podstawie serializacji
	CclacView() noexcept;
	DECLARE_DYNCREATE(CclacView)

// Atrybuty
public:
	CclacDoc* GetDocument() const;

// Operacje
public:

// Przesłania
public:
	virtual void OnDraw(CDC* pDC);  // przesłonięty, aby narysować ten widok
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// Implementacja
public:
	virtual ~CclacView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Wygenerowano funkcje mapy komunikatów
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debuguj wersję w elemencie clacView.cpp
inline CclacDoc* CclacView::GetDocument() const
   { return reinterpret_cast<CclacDoc*>(m_pDocument); }
#endif

