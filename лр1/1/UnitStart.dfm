object FormStart: TFormStart
  Left = 0
  Top = 0
  Caption = 'FormStart'
  ClientHeight = 166
  ClientWidth = 507
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -21
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 25
  object Label1: TLabel
    Left = 168
    Top = 16
    Width = 172
    Height = 25
    Caption = #1042#1099#1073#1077#1088#1080#1090#1077' '#1092#1080#1075#1091#1088#1091
  end
  object ComboBox1: TComboBox
    Left = 152
    Top = 56
    Width = 209
    Height = 33
    TabOrder = 0
    OnChange = ComboBox1Change
    Items.Strings = (
      '1.'#1050#1088#1091#1075
      '2.'#1052#1085#1086#1075#1086#1091#1075#1086#1083#1100#1085#1080#1082)
  end
  object Button1: TButton
    Left = 200
    Top = 128
    Width = 97
    Height = 33
    Caption = #1042#1099#1093#1086#1076
    TabOrder = 1
    OnClick = Button1Click
  end
end
