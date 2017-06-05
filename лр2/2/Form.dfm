object Form1: TForm1
  Left = 0
  Top = 0
  Caption = #1056#1072#1089#1087#1080#1089#1072#1085#1080#1077' '#1087#1086#1083#1077#1090#1086#1074
  ClientHeight = 640
  ClientWidth = 1277
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -19
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  Visible = True
  OnActivate = FormActivate
  PixelsPerInch = 96
  TextHeight = 23
  object Label1: TLabel
    Left = 8
    Top = 356
    Width = 196
    Height = 23
    Caption = #1042#1074#1077#1076#1080#1090#1077' '#1085#1086#1084#1077#1088' '#1088#1077#1081#1089#1072':'
  end
  object Label2: TLabel
    Left = 259
    Top = 426
    Width = 7
    Height = 23
    Caption = ':'
    Visible = False
  end
  object Button1: TButton
    Left = 389
    Top = 234
    Width = 121
    Height = 81
    Caption = #1054#1090#1082#1088#1099#1090#1100' '#1089#1087#1088#1072#1074#1086#1095#1085#1080#1082' '#1089#1072#1084#1086#1083#1077#1090#1086#1074
    TabOrder = 2
    WordWrap = True
    OnClick = Button1Click
  end
  object StringGrid1: TStringGrid
    Left = 8
    Top = 8
    Width = 1261
    Height = 209
    ColCount = 6
    DefaultColWidth = 210
    DefaultRowHeight = 30
    FixedCols = 5
    ScrollBars = ssVertical
    TabOrder = 4
  end
  object Edit1: TEdit
    Tag = 1
    Left = 272
    Top = 353
    Width = 150
    Height = 31
    TabOrder = 0
    OnKeyPress = Edit1KeyPress
  end
  object Button2: TButton
    Left = 428
    Top = 353
    Width = 75
    Height = 31
    Caption = #1042#1074#1086#1076
    TabOrder = 3
    OnClick = Button2Click
  end
  object ComboBox1: TComboBox
    Left = 206
    Top = 389
    Width = 120
    Height = 31
    TabOrder = 5
    Visible = False
    OnChange = ComboBox1Change
  end
  object Button3: TButton
    Left = 558
    Top = 504
    Width = 75
    Height = 25
    Caption = 'Button3'
    TabOrder = 6
    Visible = False
    OnClick = Button3Click
  end
  object Edit2: TEdit
    Left = 272
    Top = 426
    Width = 55
    Height = 31
    TabOrder = 1
    Visible = False
    OnKeyPress = Edit2KeyPress
  end
  object Button4: TButton
    Left = 262
    Top = 234
    Width = 121
    Height = 81
    Caption = #1054#1095#1080#1089#1090#1080#1090#1100' '#1088#1072#1089#1087#1080#1089#1072#1085#1080#1077
    TabOrder = 7
    WordWrap = True
    OnClick = Button4Click
  end
  object Button5: TButton
    Left = 135
    Top = 234
    Width = 121
    Height = 81
    Caption = #1059#1076#1072#1083#1080#1090#1100' '#1087#1086#1089#1083#1077#1076#1085#1080#1081' '#1088#1077#1081#1089
    TabOrder = 8
    WordWrap = True
    OnClick = Button5Click
  end
  object Button6: TButton
    Left = 8
    Top = 234
    Width = 121
    Height = 81
    Caption = #1056#1072#1089#1089#1095#1080#1090#1072#1090#1100' '#1086#1073#1098#1105#1084' '#1090#1086#1087#1083#1080#1074#1072
    TabOrder = 9
    WordWrap = True
    OnClick = Button6Click
  end
  object Button7: TButton
    Left = 643
    Top = 234
    Width = 121
    Height = 81
    Caption = #1054#1090#1089#1086#1088#1090#1080#1088#1086'- '#1074#1072#1090#1100' '#1087#1086' '#1074#1088#1077#1084#1077#1085#1080
    TabOrder = 10
    WordWrap = True
    OnClick = Button7Click
  end
  object Button8: TButton
    Left = 770
    Top = 234
    Width = 121
    Height = 81
    Caption = #1054#1090#1089#1086#1088#1090#1080#1088#1086'- '#1074#1072#1090#1100' '#1087#1086' '#1085#1086#1084#1077#1088#1091
    TabOrder = 11
    WordWrap = True
    OnClick = Button8Click
  end
  object Button9: TButton
    Left = 516
    Top = 234
    Width = 121
    Height = 81
    Caption = #1055#1086#1080#1089#1082' '#1088#1077#1081'- '#1089#1086#1074' '#1087#1086' '#1084#1077#1089#1090#1091' '#1085#1072#1079#1085#1072#1095#1077#1085#1080#1103
    TabOrder = 12
    WordWrap = True
    OnClick = Button9Click
  end
  object Button10: TButton
    Left = 477
    Top = 424
    Width = 75
    Height = 30
    Caption = #1055#1086#1080#1089#1082
    TabOrder = 13
    Visible = False
    WordWrap = True
    OnClick = Button10Click
  end
  object Button11: TButton
    Left = 558
    Top = 424
    Width = 75
    Height = 30
    Caption = #1053#1072#1079#1072#1076
    TabOrder = 14
    Visible = False
    OnClick = Button11Click
  end
  object Button12: TButton
    Left = 897
    Top = 234
    Width = 121
    Height = 81
    Caption = #1054#1090#1082#1088#1099#1090#1100' '#1088#1072#1089#1087#1080#1089#1072#1085#1080#1077
    TabOrder = 15
    WordWrap = True
    OnClick = Button12Click
  end
  object Button13: TButton
    Left = 1024
    Top = 234
    Width = 121
    Height = 81
    Caption = #1057#1086#1093#1088#1072#1085#1080#1090#1100' '#1082#1072#1082'...'
    TabOrder = 16
    WordWrap = True
    OnClick = Button13Click
  end
  object Button14: TButton
    Left = 1151
    Top = 234
    Width = 121
    Height = 81
    Caption = #1042#1099#1093#1086#1076
    TabOrder = 17
    OnClick = Button14Click
  end
  object Button15: TButton
    Left = 643
    Top = 331
    Width = 248
    Height = 48
    Caption = #1054#1092#1086#1088#1084#1080#1090#1100' '#1088#1072#1089#1087#1080#1089#1072#1085#1080#1077
    TabOrder = 18
    WordWrap = True
    OnClick = Button15Click
  end
  object RadioButton1: TRadioButton
    Left = 64
    Top = 430
    Width = 113
    Height = 17
    Caption = 'RadioButton1'
    TabOrder = 19
    Visible = False
  end
  object OpenDialog1: TOpenDialog
    DefaultExt = 'txt'
    Filter = '.txt|*.txt'
    InitialDir = 'd:\\'#1091#1095#1077#1073#1072'\\'#1054#1040#1080#1055'\\'#1083#1088' '#1074#1099#1087' 2\\'#1083#1088'2\\2'
    Title = #1054#1090#1082#1088#1099#1090#1100' '#1092#1072#1081#1083' '#1080#1083#1080' '#1089#1086#1079#1076#1072#1090#1100' '#1085#1086#1074#1099#1081'.'
    Left = 736
    Top = 552
  end
  object SaveDialog1: TSaveDialog
    DefaultExt = 'txt'
    FileName = #1056#1072#1089#1087#1080#1089#1072#1085#1080#1077
    Filter = '.txt|*.txt'
    Title = #1057#1086#1093#1088#1072#1085#1080#1090#1100' '#1082#1072#1082'...'
    Left = 808
    Top = 584
  end
  object Timer1: TTimer
    OnTimer = Timer1Timer
    Left = 880
    Top = 448
  end
  object SaveDialog2: TSaveDialog
    Left = 1056
    Top = 472
  end
end
