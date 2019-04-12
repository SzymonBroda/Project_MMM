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
    Left = 48
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
    Left = 456
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
    Left = 264
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
    Left = 32
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
    Left = 416
    Top = 32
    Width = 39
    Height = 13
    Caption = '<0,100>'
  end
  object f_T: TLabel
    Left = 648
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
    Left = 608
    Top = 32
    Width = 39
    Height = 13
    Caption = '<1,100>'
  end
  object Label1: TLabel
    Left = 344
    Top = 0
    Width = 6
    Height = 29
    Caption = '.'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -23
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
  end
  object Label2: TLabel
    Left = 136
    Top = 16
    Width = 6
    Height = 29
    Caption = '.'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -23
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
  end
  object Label3: TLabel
    Left = 528
    Top = 0
    Width = 6
    Height = 29
    Caption = '.'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -23
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
  end
  object Label4: TLabel
    Left = 152
    Top = 0
    Width = 6
    Height = 29
    Caption = '.'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -23
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
  end
  object A_: TEdit
    Left = 496
    Top = 8
    Width = 33
    Height = 21
    TabOrder = 0
    Text = '1'
    OnChange = A_Change
  end
  object T_: TEdit
    Left = 312
    Top = 8
    Width = 33
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
    Position = 1
    TabOrder = 4
    OnScroll = alpha_SScroll
  end
  object alpha_: TEdit
    Left = 120
    Top = 8
    Width = 33
    Height = 21
    TabOrder = 5
    Text = '1'
    OnChange = alpha_Change
  end
  object T_S: TScrollBar
    Left = 264
    Top = 32
    Width = 121
    Height = 17
    Cursor = crHandPoint
    PageSize = 0
    Position = 1
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
    Position = 1
    TabOrder = 7
    OnScroll = A_SScroll
  end
  object f_: TEdit
    Left = 680
    Top = 8
    Width = 33
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
  object alpha_p: TEdit
    Left = 160
    Top = 8
    Width = 33
    Height = 21
    TabOrder = 11
    Text = '000'
    OnChange = alpha_pChange
  end
  object T_p: TEdit
    Left = 352
    Top = 8
    Width = 33
    Height = 21
    TabOrder = 12
    Text = '000'
    OnChange = T_pChange
  end
  object A_p: TEdit
    Left = 536
    Top = 8
    Width = 41
    Height = 21
    TabOrder = 13
    Text = '000'
    OnChange = A_pChange
  end
end
