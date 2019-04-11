object Form1: TForm1
  Left = 215
  Top = 185
  Width = 811
  Height = 148
  Caption = 'Project Piotr Pietruszka Szymon Broda'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = True
  PixelsPerInch = 96
  TextHeight = 13
  object alpha_T: TLabel
    Left = 8
    Top = 8
    Width = 57
    Height = 24
    Caption = 'alpha'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsItalic]
    ParentFont = False
  end
  object A_T: TLabel
    Left = 424
    Top = 8
    Width = 24
    Height = 24
    Caption = 'A'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsItalic]
    ParentFont = False
  end
  object T_T: TLabel
    Left = 232
    Top = 8
    Width = 23
    Height = 24
    Caption = 'T'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsItalic]
    ParentFont = False
  end
  object alpha_range: TLabel
    Left = 24
    Top = 32
    Width = 39
    Height = 13
    Caption = '<0,100>'
  end
  object T_range: TLabel
    Left = 216
    Top = 32
    Width = 39
    Height = 13
    Caption = '<0,100>'
  end
  object A_range: TLabel
    Left = 408
    Top = 32
    Width = 39
    Height = 13
    Caption = '<0,100>'
  end
  object f_T: TLabel
    Left = 624
    Top = 8
    Width = 15
    Height = 24
    Caption = 'f'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsItalic]
    ParentFont = False
  end
  object f_range: TLabel
    Left = 600
    Top = 32
    Width = 39
    Height = 13
    Caption = '<1,100>'
  end
  object A_: TEdit
    Left = 456
    Top = 8
    Width = 121
    Height = 21
    TabOrder = 0
    OnChange = A_Change
  end
  object T_: TEdit
    Left = 264
    Top = 8
    Width = 121
    Height = 21
    TabOrder = 1
    Text = '1'
    OnChange = T_Change
  end
  object S1: TButton
    Left = 160
    Top = 56
    Width = 177
    Height = 41
    Caption = 'unit jump'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    TabOrder = 8
    OnClick = S1Click
  end
  object S2: TButton
    Left = 512
    Top = 56
    Width = 177
    Height = 41
    Caption = 'rectangular wave'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    TabOrder = 2
    OnClick = S2Click
  end
  object S3: TButton
    Left = 336
    Top = 56
    Width = 177
    Height = 41
    Caption = 'sine wave'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    TabOrder = 3
    OnClick = S3Click
  end
  object alpha_S: TScrollBar
    Left = 72
    Top = 32
    Width = 121
    Height = 17
    Cursor = crHandPoint
    BiDiMode = bdLeftToRight
    Ctl3D = False
    PageSize = 0
    ParentBiDiMode = False
    ParentCtl3D = False
    TabOrder = 4
    OnScroll = alpha_SScroll
  end
  object alpha_: TEdit
    Left = 72
    Top = 8
    Width = 121
    Height = 21
    TabOrder = 5
    OnChange = alpha_Change
  end
  object T_S: TScrollBar
    Left = 264
    Top = 32
    Width = 121
    Height = 17
    Cursor = crHandPoint
    PageSize = 0
    TabOrder = 6
    OnScroll = T_SScroll
  end
  object A_S: TScrollBar
    Left = 456
    Top = 32
    Width = 121
    Height = 17
    Cursor = crHandPoint
    PageSize = 0
    TabOrder = 7
    OnScroll = A_SScroll
  end
  object f_: TEdit
    Left = 648
    Top = 8
    Width = 121
    Height = 21
    TabOrder = 9
    Text = '1'
    OnChange = f_Change
  end
  object f_S: TScrollBar
    Left = 648
    Top = 32
    Width = 121
    Height = 17
    Cursor = crHandPoint
    Min = 1
    PageSize = 0
    Position = 1
    TabOrder = 10
    OnScroll = f_SScroll
  end
end
