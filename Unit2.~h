//---------------------------------------------------------------------------

#ifndef Unit2H
#define Unit2H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TForm2 : public TForm
{
__published:	// IDE-managed Components
        TImage *Image1;
        void __fastcall FormActivate(TObject *Sender);
private: // User declarations
     int xx1, xx2, yy1, yy2;

public:       // User declarations
     __fastcall TForm2(TComponent* Owner);
     float x1, x2, y1, y2;
     int n;
     int ZoomX(float x);
     int ZoomY(float y);
     float func(float x);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm2 *Form2;
//---------------------------------------------------------------------------
#endif
