object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Form1'
  ClientHeight = 489
  ClientWidth = 887
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -24
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 29
  object Label1: TLabel
    Left = 65
    Top = 29
    Width = 227
    Height = 29
    Caption = #1042#1074#1077#1076#1080#1090#1077' '#1074#1099#1088#1072#1078#1072#1085#1080#1077
  end
  object Label5: TLabel
    Left = 183
    Top = 130
    Width = 30
    Height = 29
    Caption = 'd='
  end
  object Label2: TLabel
    Left = 61
    Top = 130
    Width = 30
    Height = 29
    Caption = 'a='
  end
  object Label3: TLabel
    Left = 61
    Top = 168
    Width = 30
    Height = 29
    Caption = 'b='
  end
  object Label4: TLabel
    Left = 183
    Top = 171
    Width = 30
    Height = 29
    Caption = 'e='
  end
  object Label6: TLabel
    Left = 61
    Top = 206
    Width = 28
    Height = 29
    Caption = 'c='
  end
  object Label7: TLabel
    Left = 504
    Top = 29
    Width = 326
    Height = 29
    Caption = #1054#1073#1088#1072#1090#1085#1072#1103' '#1079#1072#1087#1080#1089#1100' '#1074#1099#1088#1072#1078#1077#1085#1080#1103
    Visible = False
  end
  object LabelUsualResult: TLabel
    Left = 504
    Top = 168
    Width = 8
    Height = 29
    Visible = False
  end
  object LabelReverseResult: TLabel
    Left = 504
    Top = 216
    Width = 8
    Height = 29
  end
  object Edit1: TEdit
    Left = 65
    Top = 64
    Width = 227
    Height = 37
    TabOrder = 0
    Text = 'a/(b*(c+d))-e'
  end
  object EditD: TEdit
    Left = 219
    Top = 127
    Width = 73
    Height = 37
    TabOrder = 1
    Text = '7,9'
  end
  object EditA: TEdit
    Left = 97
    Top = 127
    Width = 73
    Height = 37
    TabOrder = 2
    Text = '8,5'
  end
  object EditB: TEdit
    Left = 97
    Top = 165
    Width = 73
    Height = 37
    TabOrder = 3
    Text = '0,3'
  end
  object EditE: TEdit
    Left = 219
    Top = 165
    Width = 73
    Height = 37
    TabOrder = 4
    Text = '1,6'
  end
  object EditC: TEdit
    Left = 97
    Top = 203
    Width = 73
    Height = 37
    TabOrder = 5
    Text = '2,4'
  end
  object Button2: TButton
    Left = 140
    Top = 254
    Width = 93
    Height = 35
    Caption = #1054#1050
    TabOrder = 6
    OnClick = Button2Click
  end
  object EditReverse: TEdit
    Left = 504
    Top = 64
    Width = 227
    Height = 37
    TabOrder = 7
    Visible = False
  end
end
