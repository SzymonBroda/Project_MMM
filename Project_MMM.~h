//---------------------------------------------------------------------------

#ifndef Project_MMMH
#define Project_MMMH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ComCtrls.hpp>
#include "PERFGRAP.h"
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	
        TLabel *alpha_T;
        TLabel *A_T;
        TLabel *T_T;
        TEdit *A_;
        TEdit *T_;
        TButton *S1;
        TButton *S2;
        TButton *S3;
        TScrollBar *alpha_S;
        TEdit *alpha_;
        TScrollBar *T_S;
        TScrollBar *A_S;
        TLabel *alpha_range;
        TLabel *T_range;
        TLabel *A_range;
        TLabel *f_T;
        TEdit *f_;
        TScrollBar *f_S;
        TEdit *alpha_p;
        TEdit *T_p;
        TEdit *A_p;
        TLabel *dot;
        TLabel *dot1;
        TLabel *dot2;
        TEdit *f_p;
        TLabel *dot3;
        TLabel *f_range;
        void __fastcall alpha_SScroll(TObject *Sender,
          TScrollCode ScrollCode, int &ScrollPos);
        void __fastcall A_SScroll(TObject *Sender, TScrollCode ScrollCode,
          int &ScrollPos);
        void __fastcall T_SScroll(TObject *Sender, TScrollCode ScrollCode,
          int &ScrollPos);
        void __fastcall alpha_Change(TObject *Sender);
        void __fastcall T_Change(TObject *Sender);
        void __fastcall A_Change(TObject *Sender);
        void __fastcall f_Change(TObject *Sender);
        void __fastcall S1Click(TObject *Sender);
        void __fastcall S3Click(TObject *Sender);
        void __fastcall S2Click(TObject *Sender);
        void __fastcall f_SScroll(TObject *Sender, TScrollCode ScrollCode,
          int &ScrollPos);
        void __fastcall A_pChange(TObject *Sender);
        void __fastcall alpha_pChange(TObject *Sender);
        void __fastcall T_pChange(TObject *Sender);
        void __fastcall f_pChange(TObject *Sender);
        
public:		
     __fastcall TForm1(TComponent* Owner);
     
     double func(double x,double x_1[],double x_2[]);//wartosc y w danej cwili czasu

     double cf(double x_1, double x_2, double t, double K[], double L[]);//wartosci wpolczynnikow do metody Rungego-Kuty

     double f1(double x_2);// funkcje po prawej stronie ukladu row. roz.
     double g(double x_1, double x_2, double t);
     
     double signal_type(double t);//syganl wejsciowy
     double n_lin(double x_1, double u);//nieliniowosc

     // x1' = f(x1, x2, t)
     // x2' = g(x1, x2, t)
     //		  
     // f = x2
     // g = nie_lin(u-x1)/T - x2/T

};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
