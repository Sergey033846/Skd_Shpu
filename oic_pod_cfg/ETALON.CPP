//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "etalon.h"
#include "edit_etalon.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TEtalonForm *EtalonForm;
//---------------------------------------------------------------------------
__fastcall TEtalonForm::TEtalonForm(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
// �������� ��������� ���������
void __fastcall TEtalonForm::Button9Click(TObject *Sender)
{
        // ��
        if (RadioGroup2->ItemIndex == 0)
        {
                EditEtalonForm->Caption = "�������������� ��������� �� ";
                EditEtalonForm->mode_id = 0;
                EditEtalonForm->f_name = "d_rg_";
        }
        // ��
        if (RadioGroup2->ItemIndex == 1)
        {
                EditEtalonForm->Caption = "�������������� ��������� �� ";
                EditEtalonForm->mode_id = 1;
                EditEtalonForm->f_name = "d_rl_";
        }
        // ��
        if (RadioGroup2->ItemIndex == 2)
        {
                EditEtalonForm->Caption = "�������������� ��������� �� ";
                EditEtalonForm->mode_id = 2;
                EditEtalonForm->f_name = "d_rr_";
        }
        // ��
        if (RadioGroup2->ItemIndex == 3)
        {
                EditEtalonForm->Caption = "�������������� ��������� �� ";
                EditEtalonForm->mode_id = 3;
                EditEtalonForm->f_name = "d_ro_";                
        }

        // ������
        if (RadioGroup1->ItemIndex == 0)
        {
                EditEtalonForm->Caption = EditEtalonForm->Caption+"(������)";
                EditEtalonForm->speed_id = 0;
                EditEtalonForm->f_name = EditEtalonForm->f_name+"r.dia";
        }
        // ����������
        if (RadioGroup1->ItemIndex == 1)
        {
                EditEtalonForm->speed_id = 1;
                EditEtalonForm->Caption = EditEtalonForm->Caption+"(����������)";
                EditEtalonForm->f_name = EditEtalonForm->f_name+"t.dia";                
        }

        EditEtalonForm->ShowModal();
}
//---------------------------------------------------------------------------
// �������
void __fastcall TEtalonForm::Button10Click(TObject *Sender)
{
        Close();        
}
//---------------------------------------------------------------------------

