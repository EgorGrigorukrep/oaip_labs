object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Form1'
  ClientHeight = 483
  ClientWidth = 781
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -19
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  OnActivate = FormActivate
  OnClose = FormClose
  PixelsPerInch = 96
  TextHeight = 23
  object Label1: TLabel
    Left = 40
    Top = 8
    Width = 129
    Height = 23
    Caption = #1053#1072#1080#1084#1077#1085#1086#1074#1072#1085#1080#1077
  end
  object Label2: TLabel
    Left = 216
    Top = 8
    Width = 101
    Height = 23
    Caption = #1050#1086#1083#1080#1095#1077#1089#1090#1074#1086
  end
  object Label3: TLabel
    Left = 384
    Top = 8
    Width = 102
    Height = 23
    Caption = #1053#1086#1084#1077#1088' '#1094#1077#1093#1072
  end
  object Shape1: TShape
    Left = 551
    Top = 0
    Width = 5
    Height = 285
    Brush.Color = clDefault
  end
  object Shape2: TShape
    Left = 0
    Top = 280
    Width = 638
    Height = 0
  end
  object Shape3: TShape
    Left = 0
    Top = 280
    Width = 911
    Height = 5
    Brush.Color = clDefault
  end
  object Label4: TLabel
    Left = 562
    Top = 8
    Width = 129
    Height = 23
    Caption = #1053#1072#1080#1084#1077#1085#1086#1074#1072#1085#1080#1077
  end
  object Label5: TLabel
    Left = 562
    Top = 74
    Width = 101
    Height = 23
    Caption = #1050#1086#1083#1080#1095#1077#1089#1090#1074#1086
  end
  object Label6: TLabel
    Left = 562
    Top = 140
    Width = 102
    Height = 23
    Caption = #1053#1086#1084#1077#1088' '#1094#1077#1093#1072
  end
  object Label7: TLabel
    Left = 80
    Top = 300
    Width = 278
    Height = 23
    Caption = #1055#1086#1080#1089#1082' '#1087#1088#1086#1076#1091#1082#1094#1080#1080' '#1087#1086' '#1085#1072#1079#1074#1072#1085#1080#1102':'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object Label8: TLabel
    Left = 80
    Top = 333
    Width = 231
    Height = 23
    Caption = #1055#1086#1080#1089#1082' '#1087#1088#1086#1076#1091#1082#1094#1080#1080' '#1087#1086' '#1094#1077#1093#1091':'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object Label9: TLabel
    Left = 80
    Top = 373
    Width = 319
    Height = 46
    Caption = #1048#1085#1092#1086#1088#1084#1072#1094#1080#1103' '#1086' '#1094#1077#1093#1077', '#1074#1099#1087#1091'- '#1089#1090#1080#1074#1096#1077#1084' '#1087#1088#1086#1076#1091#1082#1094#1080#1080' '#1085#1077' '#1084#1077#1085#1077#1077', '#1095#1077#1084
    WordWrap = True
  end
  object Label10: TLabel
    Left = 80
    Top = 440
    Width = 291
    Height = 23
    Caption = #1059#1076#1072#1083#1080#1090#1100' '#1087#1088#1086#1076#1091#1082#1094#1080#1102' '#1089' '#1085#1072#1079#1074#1072#1085#1080#1077#1084
  end
  object StringGrid1: TStringGrid
    Left = 27
    Top = 37
    Width = 483
    Height = 220
    ColCount = 3
    DefaultColWidth = 160
    DefaultRowHeight = 30
    FixedCols = 0
    RowCount = 7
    FixedRows = 0
    ScrollBars = ssNone
    TabOrder = 0
    ColWidths = (
      160
      160
      160)
    RowHeights = (
      30
      30
      30
      30
      30
      30
      30)
  end
  object ButtonAdd: TButton
    Left = 562
    Top = 216
    Width = 98
    Height = 58
    Caption = #1044#1086#1073#1072#1074#1080#1090#1100
    TabOrder = 1
    OnClick = ButtonAddClick
  end
  object Edit1: TEdit
    Left = 562
    Top = 37
    Width = 211
    Height = 31
    TabOrder = 2
    OnClick = Edit1Click
  end
  object Edit2: TEdit
    Left = 562
    Top = 103
    Width = 211
    Height = 31
    TabOrder = 3
    OnClick = Edit2Click
  end
  object Edit3: TEdit
    Left = 562
    Top = 169
    Width = 211
    Height = 31
    TabOrder = 4
    OnClick = Edit3Click
  end
  object ButtonShow: TButton
    Left = 690
    Top = 330
    Width = 96
    Height = 31
    Caption = #1053#1072#1079#1072#1076
    TabOrder = 5
    Visible = False
    OnClick = ButtonShowClick
  end
  object EditProduction: TEdit
    Left = 419
    Top = 296
    Width = 120
    Height = 31
    TabOrder = 6
    OnClick = EditProductionClick
  end
  object EditCEH: TEdit
    Left = 419
    Top = 333
    Width = 120
    Height = 31
    TabOrder = 7
    OnClick = EditCEHClick
  end
  object Button1: TButton
    Left = 564
    Top = 296
    Width = 96
    Height = 31
    Caption = #1055#1086#1080#1089#1082
    TabOrder = 8
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 564
    Top = 333
    Width = 96
    Height = 31
    Caption = #1055#1086#1080#1089#1082
    TabOrder = 9
    OnClick = Button2Click
  end
  object Button3: TButton
    Left = 564
    Top = 388
    Width = 96
    Height = 31
    Caption = #1055#1086#1080#1089#1082
    TabOrder = 10
    OnClick = Button3Click
  end
  object EditAmount: TEdit
    Left = 419
    Top = 388
    Width = 120
    Height = 31
    TabOrder = 11
    OnClick = EditAmountClick
  end
  object EditDelete: TEdit
    Left = 419
    Top = 437
    Width = 120
    Height = 31
    TabOrder = 12
    OnClick = EditDeleteClick
  end
  object Button4: TButton
    Left = 564
    Top = 437
    Width = 96
    Height = 31
    Caption = #1059#1076#1072#1083#1080#1090#1100
    Enabled = False
    TabOrder = 13
    OnClick = Button4Click
  end
  object Button5: TButton
    Left = 666
    Top = 216
    Width = 107
    Height = 58
    Caption = #1059#1076#1072#1083#1080#1090#1100' '#1087#1086#1089#1083#1077#1076#1085#1080#1081
    Enabled = False
    TabOrder = 14
    WordWrap = True
    OnClick = Button5Click
  end
  object PopupMenu1: TPopupMenu
    Left = 704
    Top = 416
    object N1: TMenuItem
      Caption = #1042#1099#1074#1086#1076#1080#1090#1100' '#1080#1085#1092#1086#1088#1084#1072#1094#1080#1102' '#1086#1073#1086' '#1074#1089#1077#1093' '#1094#1077#1093#1072#1093
      RadioItem = True
      OnClick = N1Click
    end
    object N2: TMenuItem
      Caption = #1042#1099#1074#1086#1076#1080#1090#1100' '#1080#1085#1092#1086#1088#1084#1072#1094#1080#1102' '#1090#1086#1083#1100#1082#1086' '#1086#1073' '#1086#1076#1085#1086#1084' '#1094#1077#1093#1077
      Checked = True
      RadioItem = True
      OnClick = N2Click
    end
  end
end
