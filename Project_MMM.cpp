
#include <vector>
#include <vcl.h>
#include <math.h>
#pragma hdrstop

#include "Project_MMM.h"
#include "Unit2.h"

#pragma package(smart_init)
#pragma link "PERFGRAP"
#pragma resource "*.dfm"
TForm1 *Form1;
        double T = 1,     		 		//stala czasowa	    	
			   alpha=1, A=1,          	//parametry elementu nieliniowego		
			   f=1, P;                  //czestotliwosc przebiegu wejciowego
        double alpha_max=100, alpha_min=0, 
			   T_max=100,T_min=0,
			   A_max=100,A_min=0,
			   f_max=100,f_min=1;
        AnsiString a;
        const double h=0.001, n=10;
        AnsiString signal;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}

void __fastcall TForm1::alpha_SScroll(TObject *Sender,
      TScrollCode ScrollCode, int &ScrollPos)
{
        alpha_->Text=alpha_S->Position;
}


void __fastcall TForm1::A_SScroll(TObject *Sender, TScrollCode ScrollCode,
      int &ScrollPos)
{
        A_->Text=A_S->Position;
}


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
                alpha = alpha_->Text.ToDouble() + (alpha_p->Text.ToDouble()/1000);
                if (alpha>alpha_max || alpha<alpha_min)
                {
                         ShowMessage ("Podana liczba jest spoza zakresu.") ;
                         alpha=1;
                         alpha_->Text="1";
                         alpha_p->Text="000";
                }
                alpha_S->Position=alpha;
         }
         catch(...)
        {
                alpha_->Text="1";
                ShowMessage ("Niepoprawne warto�ci. Spr�buj ponownie.");
        }
  }
  else
  alpha_->Text="0";
}


void __fastcall TForm1::T_Change(TObject *Sender)
{
        if(T_->Text !="")
       {
                try
               {
                        T = T_->Text.ToDouble() + (T_p->Text.ToDouble()/1000);
                        if (T>T_max || T<T_min)
                        {
                                ShowMessage ("Podana liczba jest spoza zakresu.") ;
                                T=1;
                                T_->Text="1";
                                T_p->Text="000";
                         }
                         T_S->Position=T;
               }
               catch(...)
               {
                      T_->Text="1";
                      ShowMessage ("Niepoprawne warto�ci. Spr�buj ponownie.");
               }
       }
       else T_->Text="1";
}


void __fastcall TForm1::A_Change(TObject *Sender)
{
        if(A_->Text !="")
        {
                try
                {
                         A = A_->Text.ToDouble() + (A_p->Text.ToDouble()/1000);
                         if (A>A_max || A<A_min)
                        {
                                 ShowMessage ("Podana liczba jest spoza zakresu.") ;
                                 A=1;
                                 A_->Text="1";
                                 A_p->Text="000";
                         }
                         A_S->Position=A;
                  }
                  catch(...)
                 {
                         A_->Text="1";
                         ShowMessage ("Niepoprawne warto�ci. Spr�buj ponownie.");
                 }
        }
        else A_->Text="0";

}
//---------------------------------------------------------------------------


void __fastcall TForm1::S1Click(TObject *Sender)
{
         signal="unit_jump";
         double x_1[2];//zmienne stanu
         double x_2[2];
         for(int i = 0; i < 2; i++)//warunki poczatkowe - zerowe
         {
                 x_1[i] = 0;
                x_2[i] = 0;
         }
         double t=0;
         std::vector <double> vec_y;//wektor wyjsc w kolejnych chwilach czasu
         for (int i = 0; i < n/h ; i++)
         {
                t = t + h;
                vec_y.push_back(func(t, x_1, x_2));//obliczanie wartosci wyjscia
         }
         TForm2 *form= new TForm2(this) ;
         form->vec_y = vec_y;
         form->n = 10;
         form->x1 = 0;
         form->x2 = 5;
         form->y1 = -2;
         form->y2 = 2;
         form->Visible=true;
         form->created_form = form;
}


void __fastcall TForm1::S3Click(TObject *Sender)
{
     if(f_->Text =="")
         ShowMessage ("Nie podano cz�stotliwosci") ;
     else
     {
         signal="sine_wave";
         double x_1[2];//zmienne stanu
         double x_2[2];
         for(int i = 0; i < 2; i++)//warunki poczatkowe
         {
                 x_1[i] = 0;
                 x_2[i] = 0;
         }
         double t=0;
         std::vector <double> vec_y; //wektor wyjsc w kolejnych chwilach czasu
         for (int i = 0; i < n/h ; i++)
         {
                  t = t + h;
                  vec_y.push_back(func(t, x_1, x_2));
         }
         TForm2 *form= new TForm2(this);
         form->vec_y = vec_y;
         form->n = 10;
         form->x1 = 0;
         form->x2 = 5;
         form->y1 = -2;
         form->y2 = 2;
         form->Visible=true;
         form->created_form = form;
     }
}


void __fastcall TForm1::S2Click(TObject *Sender)
{
     if(f_->Text =="")
         ShowMessage ("Nie podano cz�stotliwosci") ;
     else
     {
         signal="rectangular_wave";
         double x_1[2];//zmienne stanu
         double x_2[2];
         for(int i = 0; i < 2; i++)//warunki poczatkowe
         {
                 x_1[i] = 0;
                 x_2[i] = 0;
         }
         double t=0;
         std::vector <double> vec_y;
         for (int i = 0; i < n/h ; i++)
         {
                 t = t + h;
                 vec_y.push_back(func(t, x_1, x_2));
         }
         TForm2 *form= new TForm2(this) ;
         form->vec_y = vec_y;
         form->n = 10;
         form->x1 = 0;
         form->x2 = 5;
         form->y1 = -2;
         form->y2 = 2;
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
                          f=1;
                          f_->Text="1";
                 }
                 f_S->Position=f;
         }
         catch(...)
        {
                 f_->Text="1";
                 ShowMessage ("Niepoprawne warto�ci. Spr�buj ponownie.");
        }
     }
     else f_->Text="1";
}

//---------------------------------------------------------------------------

double TForm1::func(double t,double x_1[], double x_2[])//zwraca wartosc y (czyli x1)
{
     double K[4], L[4];//zamiana 4 na sta�e ##
	 

     cf(x_1[0], x_2[0], t, K, L);
     x_1[0] += 1.0/6.0 * (K[0] + 2*K[1] + 2*K[2] + K[3]) ;
     x_2[0] += 1.0/6.0 * (L[0] + 2*L[1] + 2*L[2] + L[3])  ;
     return x_1[0];
}

//wspolczynniki do metody Rungego-Kuty
double TForm1::cf(double x1, double x2, double t, double K[], double L[])
{
    K[0] = h*f1(x2);
    L[0] = h*g(x1, x2, t);

    K[1] = h*f1(x2+L[0]/2.0);
    L[1] = h*g(x1+K[0]/2.0, x2+L[0]/2.0, t+h/2.0);

    K[2] = h*f1(x2+L[1]/2.0);
    L[2] = h*g(x1+K[1]/2.0, x2+L[1]/2.0, t+h/2.0);

    K[3] = h*f1(x2+L[2]);
    L[3] = h*g(x1+K[2], x2+L[2], t+h);

    return 0;
}

double TForm1::f1(double x_2)
{
    return x_2;
}

double TForm1::g(double x_1, double x_2, double t)
{
    double u = signal_type(t);//syganl wejsciowy
    
    if(T == 0)//stala czasowa rowna 0 - uklad pierwszego rzedu
    	return n_lin(x_1, u);
	else
    	return 1.0/T*(n_lin(x_1, u) - x_2);
}

double TForm1::signal_type(double t)
{
     if(signal=="sine_wave") return sin(t*f);
     else if(signal=="unit_jump") return t>0 ? 1:0;
     else if(signal=="rectangular_wave")
     {
           P = 1/f;
           int l = t/P;
           return t - l*P <= P/2 ? 1: -1 ;
     }
 return 0;
}

double TForm1::n_lin(double x_1, double u)//nieliniowosc
{
    if(u-x_1 >= alpha)//gdyby alpha==0 (przekaznik) to gdy u-x1==0 zwrocimy A
    {
        return A;
    }
    else if(u-x_1 <= -alpha)
    {
        return -A;
    }
    else
    {
        return A/alpha*(u-x_1);

    }

}
//---------------------------------------------------------------------------

void __fastcall TForm1::A_pChange(TObject *Sender)
{
       if(A_p->Text !="")
        {
                try
                {
                         A = A_->Text.ToDouble() + (A_p->Text.ToDouble()/1000);
                         if (A>A_max || A<A_min)
                        {
                                 ShowMessage ("Podana liczba jest spoza zakresu.") ;
                                 A=1;
                                 A_->Text="1";
                                 A_p->Text="0";
                         }
                  }
                  catch(...)
                 {
                         A_p->Text="100";
                         ShowMessage ("Niepoprawne warto�ci. Spr�buj ponownie.");
                 }
        }
        else A_p->Text="000";
}

void __fastcall TForm1::alpha_pChange(TObject *Sender)
{
if(alpha_p->Text !="")
  {
         try
         {
                alpha = alpha_->Text.ToDouble() + (alpha_p->Text.ToDouble()/1000);
                if (alpha>alpha_max || alpha<alpha_min)
                {
                         ShowMessage ("Podana liczba jest spoza zakresu.") ;
                         alpha=1;
                         alpha_->Text="1";
                         alpha_p->Text="000";
                }
         }
         catch(...)
        {
                alpha_p->Text="000";
                ShowMessage ("Niepoprawne warto�ci. Spr�buj ponownie.");
        }
  }
  else  alpha_p->Text="000";
}

void __fastcall TForm1::T_pChange(TObject *Sender)
{
if(T_->Text !="")
       {
                try
               {
                        T = T_->Text.ToDouble() + (T_p->Text.ToDouble()/1000);
                        if (T>T_max || T<T_min)
                        {
                                ShowMessage ("Podana liczba jest spoza zakresu.") ;
                                T=1;
                                T_->Text="1";
                                T_p->Text="000";
                         }
                         T_S->Position=T;
               }
               catch(...)
               {
                      T_p->Text="000";
                      ShowMessage ("Niepoprawne warto�ci. Spr�buj ponownie.");
               }
       }
       else T_p->Text="000";
}
//---------------------------------------------------------------------------



