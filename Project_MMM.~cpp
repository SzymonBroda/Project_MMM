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
        double T,alpha,A,f=1;
        double alpha_max=100,alpha_min=0,T_max=100,T_min=0,A_max=100,A_min=0,f_max=100,f_min=1;
        AnsiString a;
        AnsiString signal;
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
         ShowMessage ("Niepoprawne wartoœci. Spróbuj ponownie.");
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
         ShowMessage ("Niepoprawne wartoœci. Spróbuj ponownie.");
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
         A_S->Position=A;
         }
         catch(...)
        {
         ShowMessage ("Niepoprawne wartoœci. Spróbuj ponownie.");
        }
  }
}
//---------------------------------------------------------------------------

//---------------------------------------------------------------------------

void __fastcall TForm1::S1Click(TObject *Sender)
{
        TForm2 *form= new TForm2(this);
     form->signal="unit_jump";
     form->n = 10;
     form->x1 = 0;
     form->x2 = 5;
     form->y1 = -2;
     form->y2 = 2;
     form->alpha = alpha;
     form->A = A;
     form->T = T;
     form->Visible=true;
     form->created_form = form;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::S3Click(TObject *Sender)
{

     if(f_->Text =="")
         ShowMessage ("Nie podano czêstotliwosci") ;
     else
     {
     TForm2 *form= new TForm2(this) ;
     form->P=1/f;
     form->signal="sine_wave";
     form->n = 10;
     form->x1 = 0;
     form->x2 = 5;
     form->y1 = -2;
     form->y2 = 2;
     form->alpha = alpha;
     form->A = A;
     form->T = T;
     form->Visible=true;
     form->created_form = form;
     }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::S2Click(TObject *Sender)
{
     if(f_->Text =="")
         ShowMessage ("Nie podano czêstotliwosci") ;
     else
     {
         TForm2 *form= new TForm2(this) ;
         form->P=1/f;
         form->signal="rectangular_wave";
         form->n = 10;
         form->x1 = 0;
         form->x2 = 5;
         form->y1 = -2;
         form->y2 = 2;
         form->alpha = alpha;
         form->A = A;
         form->T = T;
         form->Visible=true;
         form->created_form = form;
     }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::f_SScroll(TObject *Sender, TScrollCode ScrollCode,
      int &ScrollPos)
{
           f_->Text=f_S->Position;
}
//---------------------------------------------------------------------------



void __fastcall TForm1::f_Change(TObject *Sender)
{
     if(f_->Text !="")
  {
         try
         {
          f = f_->Text.ToDouble();
          if (f>f_max || f<f_min)
         {
            ShowMessage ("Podana liczba jest spoza zakresu.") ;
            f=0;
            f_->Text="";
         }
         f_S->Position=f;
         }
         catch(...)
        {
         ShowMessage ("Niepoprawne wartoœci. Spróbuj ponownie.");
        }
  }
}
//---------------------------------------------------------------------------






