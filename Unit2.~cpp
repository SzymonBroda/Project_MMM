//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit2.h"
#include "Project_MMM.h"
#include <math.h>
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "PERFGRAP"
#pragma resource "*.dfm"
TForm2 *Form2;
const double h=0.001;
double A,alpha,T;

double n_lin(double x1, double u);
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

 int TForm2::ZoomX(double x)
{
     int ret;
     ret = xx1 + (int)((x-x1)*(xx2-xx1)/(x2-x1));
     return ret;
}

int TForm2::ZoomY(double y)
{
     int ret;
     ret = yy2 + (int)((y-y1)*(yy1-yy2)/(y2-y1));
     return ret;
}

//------------------------------------------------------------
double TForm2::func(double x)//zwraca wartosc y (czyli x1)
{
     double ret;
     ret = x;      ///// tutaj funkcja
     return ret;
}

double TForm2::cf(double x1, double x2, double t, double K[], double L[])//zwraca wartosc y (czyli x1)
{
    K[0] = h*f(x2);
    L[0] = h*g(x1, x2, t);

    K[1] = h*f(x2+L[0]/2.0);
    L[1] = h*g(x1+K[0]/2.0, x2+L[0]/2.0, t+h/2.0);

    K[2] = h*f(x2+L[1]/2.0);
    L[2] = h*g(x1+K[1]/2.0, x2+L[1]/2.0, t+h/2.0);

    K[3] = h*f(x2+L[2]);
    L[3] = h*g(x1+K[2], x2+L[2], t+h);

    return 0;
}

double f(double x2)
{
    return x2;
}

double g(double x1, double x2, double t)
{
    double u = 1;//!!!!!!!! wejcie dla danego t - wywolanie funkcji
    return 1.0/T*(n_lin(x1, u) - x2);

}
double TForm2::signal_type(double x)
{
    if(signal=="sine_wave") return sin(x);
     else if(signal=="unit_jump") return x>0 ? 1:0;
     else if(signal=="rectangular_wave")
     {
           int l=x/P;
           return x-l*P<=P/2 ? 1: -1 ;
     }
 return 0;
}

double n_lin(double x1, double u)//nieliniowosc
{
    if(u-x1 >= alpha)//gdyby alpha==0 (przekaznik) to gdy u-x1==0 zwrocimy A
    {
        return A;
    }
    else if(u-x1 <= -alpha)
    {
        return -A;
    }
    else
    {
        return A/alpha*(u-x1);

    }

}

//------------------------------------------------------------

void __fastcall TForm2::FormActivate(TObject *Sender)
{
          TCanvas * canv; // additional variable
     int tx, ty;
     int i;
     double x, y, u ;

     canv = Image1->Canvas;

     // 1. Setting the boundaries of screen coordinates
     xx1 = 0;
     yy1 = 0;
     xx2 = Image1->Width;
     yy2 = Image1->Height;

     // 2. Drawing of graph
     canv->Pen->Color = clBlack;
     canv->Brush->Color = clWhite;
     canv->Rectangle(0, 0, Image1->Width, Image1->Height);

     // 2.1. Drawing of coordinate axes
     canv->Pen->Color =clBlack;
     canv->Pen->Width = 2;

     // 2.2. Take the point of origin X of the screen.
     tx = ZoomX(0);
     ty = ZoomY(y1);
     canv->MoveTo(tx,ty);

     // draw a line of coordinates of the X axis
     tx = ZoomX(0);
     ty = ZoomY(y2);
     canv->LineTo(tx,ty);

     // 2.3. Take the point of origin X of the screen.
     tx = ZoomX(x1);
     ty = ZoomY(0);
     canv->MoveTo(tx,ty);

     // Draw the Y axis.
     tx = ZoomX(x2);
     ty = ZoomY(0);
     canv->LineTo(tx,ty);

     // 3. Drawing of the graph.
     canv->Pen->Color = clRed; // color

     // coordinates of the first point
     x = x1;
     u=signal_type(x);
     y = func(u);
     tx = ZoomX(x);
     ty = ZoomY(y);
     canv->MoveTo(tx,ty);

     // The cycle of enumerating of points and drawing the connecting lines
     for (int i = 0; i < n/h ; i++)
     {
         x = x + h;
         u=signal_type(x);
         y = func(u);
         tx = ZoomX(x);
         ty = ZoomY(y);
         canv->LineTo(tx,ty);
     }
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Image1MouseMove(TObject *Sender, TShiftState Shift,
      int X, int Y)
{
        TPoint p_rel_scr = Mouse->CursorPos;
        TPoint p_rel_frm = Image1->ScreenToClient(p_rel_scr );
        x_pos->Text = (float) (int)(((p_rel_frm.x-xx1)*(x2-x1)/(xx2-xx1)+x1)*1000)/1000;
        y_pos->Text = (float) (int)(((p_rel_frm.y-yy2)*(y2-y1)/(yy1-yy2)+y1)*1000)/1000 ;
}
//---------------------------------------------------------------------------


void __fastcall TForm2::addClick(TObject *Sender)
{
        Form1->Show();
}
//---------------------------------------------------------------------------







void __fastcall TForm2::closeClick(TObject *Sender)
{
        created_form->Close();
}
//---------------------------------------------------------------------------




