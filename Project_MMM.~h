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
__published:	// IDE-managed Components
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
        void __fastcall alpha_SScroll(TObject *Sender,
          TScrollCode ScrollCode, int &ScrollPos);
        void __fastcall A_SScroll(TObject *Sender, TScrollCode ScrollCode,
          int &ScrollPos);
        void __fastcall T_SScroll(TObject *Sender, TScrollCode ScrollCode,
          int &ScrollPos);
        void __fastcall alpha_Change(TObject *Sender);
        void __fastcall T_Change(TObject *Sender);
        void __fastcall A_Change(TObject *Sender);
        void __fastcall S1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
