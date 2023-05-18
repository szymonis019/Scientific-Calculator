
// clacDoc.h: interfejs klasy CclacDoc
//


#pragma once


class CclacDoc : public CDocument
{
protected: // utwórz tylko na podstawie serializacji
	CclacDoc() noexcept;
	DECLARE_DYNCREATE(CclacDoc)

// Atrybuty
public:

// Operacje
public:

// Przesłania
public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
#ifdef SHARED_HANDLERS
	virtual void InitializeSearchContent();
	virtual void OnDrawThumbnail(CDC& dc, LPRECT lprcBounds);
#endif // SHARED_HANDLERS

// Implementacja
public:
	virtual ~CclacDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Wygenerowano funkcje mapy komunikatów
protected:
	DECLARE_MESSAGE_MAP()

#ifdef SHARED_HANDLERS
	// Funkcja pomocnicza, która ustawia zawartość wyszukiwania dla procedury obsługi wyszukiwania
	void SetSearchContent(const CString& value);
#endif // SHARED_HANDLERS
};
