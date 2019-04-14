//---------------------------------------------------------------------------

#ifndef Unit2H
#define Unit2H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <vector>
#include <ExtCtrls.hpp>
#include "PERFGRAP.h"
//---------------------------------------------------------------------------
class TForm2 : public TForm
{
__published:	// IDE-managed Components
        TImage *Image1;
        TEdit *y_pos;
        TEdit *x_pos;
        TButton *add;
        TButton *close;
        void __fastcall FormActivate(TObject *Sender);
        void __fastcall Image1MouseMove(TObject *Sender, TShiftState Shift,
          int X, int Y);
        void __fastcall addClick(TObject *Sender);
        void __fastcall closeClick(TObject *Sender);
private: // User declarations
     int xx1, xx2, yy1, yy2;

public:       // User declarations
     __fastcall TForm2(TComponent* Owner);
     double x1, x2, y1, y2;
     std::vector <double> vec_y  ;
     int n;
     int ZoomX(double x);
     int ZoomY(double y);
     TForm2 *created_form;

<<<<<<< HEAD
     double func(double t, double x_1[], double x_2[]);//wartosc y w danym momencie

     double cf(double x1, double x2, double t, double K[], double L[]);//wartosci wpolczynnikow do metody rungego-kuty
																		//K i L
     double f(double x2);// funkcje po prawej stronie ukladu row. roz. (row 1)
     double g(double x1, double x2, double t);// (rownanie 2)

     double n_lin(double x1, double u);//nieliniowosc
     //
     //
     // x1' = x2
     // x2' = nie_lin(u-x1)/T - x2/T
     //		  1/T*(nie_lin(u-x1))
     // x1' = f(x1, x2, t)
     // x2' = g(x1, x2, t)
     //		  
     //
     // f = x2
     // g = nie_lin(u-x1)/T - x2/T
     //
=======

>>>>>>> copy
};
//---------------------------------------------------------------------------
extern PACKAGE TForm2 *Form2;
//---------------------------------------------------------------------------
#endif
