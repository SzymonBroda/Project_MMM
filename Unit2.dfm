object Form2: TForm2
  Left = 4
  Top = 212
  Cursor = crCross
  BorderStyle = bsToolWindow
  Caption = 'Graph'
  ClientHeight = 281
  ClientWidth = 1345
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  Position = poScreenCenter
  OnActivate = FormActivate
  PixelsPerInch = 96
  TextHeight = 13
  object Image1: TImage
    Left = 0
    Top = 0
    Width = 1345
    Height = 281
    AutoSize = True
    Center = True
    Transparent = True
    OnMouseMove = Image1MouseMove
  end
  object y_pos: TEdit
    Left = 48
    Top = 8
    Width = 49
    Height = 21
    TabOrder = 0
  end
  object x_pos: TEdit
    Left = 0
    Top = 8
    Width = 49
    Height = 21
    TabOrder = 1
  end
  object add: TButton
    Left = 96
    Top = 8
    Width = 75
    Height = 25
    Caption = 'Add new'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 2
    OnClick = addClick
  end
  object close: TButton
    Left = 168
    Top = 8
    Width = 75
    Height = 25
    Caption = 'Close'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 3
    OnClick = closeClick
  end
end
