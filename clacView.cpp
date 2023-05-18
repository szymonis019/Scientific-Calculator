
// clacView.cpp: implementacja klasy CclacView
//

#include "pch.h"
#include "framework.h"
// Element SHARED_HANDLERS można zdefiniować w projekcie ATL z implementacją podglądu, miniaturze
// procedury obsługi serializacji i filtrów wyszukiwania oraz umożliwia udostępnianie kodu dokumentu w tym projekcie.
#ifndef SHARED_HANDLERS
#include "clac.h"
#endif

#include "clacDoc.h"
#include "clacView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CclacView

IMPLEMENT_DYNCREATE(CclacView, CView)

BEGIN_MESSAGE_MAP(CclacView, CView)
END_MESSAGE_MAP()

// Tworzenie/niszczenie obiektu CclacView

CclacView::CclacView() noexcept
{
	// TODO: tutaj dodaj kod konstruowania

}

CclacView::~CclacView()
{
}

BOOL CclacView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: zmodyfikuj klasę Window lub style w tym miejscu, modyfikując
	//  styl kaskadowy CREATESTRUCT

	return CView::PreCreateWindow(cs);
}

// Rysowanie obiektu CclacView

void CclacView::OnDraw(CDC* /*pDC*/)
{
	CclacDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: tutaj dodaj kod rysowania danych natywnych
}


// Diagnostyka klasy CclacView

#ifdef _DEBUG
void CclacView::AssertValid() const
{
	CView::AssertValid();
}

void CclacView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CclacDoc* CclacView::GetDocument() const // wbudowana jest wersja bez debugowania
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CclacDoc)));
	return (CclacDoc*)m_pDocument;
}
#endif //_DEBUG


// Procedury obsługi komunikatów CclacView
