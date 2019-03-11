//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Project_MMM.h"
#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "PERFGRAP"
#pragma resource "*.dfm"
TForm1 *Form1;
        double T,signal,alpha,A;
        double alpha_max=100,alpha_min=0,T_max=100,T_min=0,A_max=100,A_min=0;
        AnsiString a;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::alpha_SScroll(TObject *Sender,
      TScrollCode ScrollCode, int &ScrollPos)
{
        alpha_->Text=alpha_S->Position;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::A_SScroll(TObject *Sender, TScrollCode ScrollCode,
      int &ScrollPos)
{
        A_->Text=A_S->Position;
}
//---------------------------------------------------------------------------




void __fastcall TForm1::T_SScroll(TObject *Sender, TScrollCode ScrollCode,
      int &ScrollPos)
{
                T_->Text=T_S->Position;
}
//---------------------------------------------------------------------------


void __fastcall TForm1::alpha_Change(TObject *Sender)
{
  if(alpha_->Text !="")
  {
         try
         {
          alpha = alpha_->Text.ToDouble();
          if (alpha>alpha_max || alpha<alpha_min)
         {
            ShowMessage ("Podana liczba jest spoza zakresu.") ;
            alpha=0;
            alpha_->Text="";
         }
         alpha_S->Position=alpha;
         }
         catch(...)
        {
         ShowMessage ("Niepoprawne warto�ci. Spr�buj ponownie.");
        }
  }

}
//---------------------------------------------------------------------------








void __fastcall TForm1::T_Change(TObject *Sender)
{

         if(T_->Text !="")
  {
         try
         {
          T = T_->Text.ToDouble();
          if (T>T_max || T<T_min)
         {
            ShowMessage ("Podana liczba jest spoza zakresu.") ;
            T=0;
            T_->Text="";
         }
         T_S->Position=T;
         }
         catch(...)
        {
         ShowMessage ("Niepoprawne warto�ci. Spr�buj ponownie.");
        }
  }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::A_Change(TObject *Sender)
{
if(A_->Text !="")
  {
         try
         {
          A = A_->Text.ToDouble();
          if (A>A_max || A<A_min)
         {
            ShowMessage ("Podana liczba jest spoza zakresu.") ;
            A=0;
            A_->Text="";
         }
         A_S->Position=alpha;
         }
         catch(...)
        {
         ShowMessage ("Niepoprawne warto�ci. Spr�buj ponownie.");
        }
  }
}
//---------------------------------------------------------------------------

//---------------------------------------------------------------------------
















void __fastcall TForm1::S1Click(TObject *Sender)
{
     Form2->n = 50;
     Form2->x1 = -5;
     Form2->x2 = 5;
     Form2->y1 = -2;
     Form2->y2 = 2;
     Form2->ShowModal();
}
//---------------------------------------------------------------------------

