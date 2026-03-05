[mApp1]
Meter=Image
MeasureName=mAppIcon1
PreserveAspectRatio=1
W=#gIconWidth#
H=#gIconHeight#
X=#distance#
Y=( [mTitle:Y] + [mTitle:H] + 10 )
AntiAlias=1
DynamicVariables=1
UpdateDivider=1
Hidden=( [mAppCount] >= 1 ? 0 : 1 )
LeftMouseUpAction=[!CommandMeasure "mAppName1" "Open"]
ToolTipText=[mAppName1]

[mApp2]
Meter=Image
MeasureName=mAppIcon2
PreserveAspectRatio=1
W=#gIconWidth#
H=#gIconHeight#
X=( #distance# + #horizontal_indent# )
Y=( [mApp1:Y] )
AntiAlias=1
DynamicVariables=1
UpdateDivider=1
Hidden=( [mAppCount] >= 2 ? 0 : 1 )
LeftMouseUpAction=[!CommandMeasure "mAppName2" "Open"]
ToolTipText=[mAppName2]

[mApp3]
Meter=Image
MeasureName=mAppIcon3
PreserveAspectRatio=1
W=#gIconWidth#
H=#gIconHeight#
X=( [mAppCount] <= 4 ? #distance# : ( [mApp2:X] + #horizontal_indent# ) )
Y=( [mAppCount] <= 4 ? ( [mApp2:Y] + #vertical_indent# ) : ( [mApp2:Y] ) )
AntiAlias=1
DynamicVariables=1
UpdateDivider=1
Hidden=( [mAppCount] >= 3 ? 0 : 1 )
LeftMouseUpAction=[!CommandMeasure "mAppName3" "Open"]
ToolTipText=[mAppName3]

[mApp4]
Meter=Image
MeasureName=mAppIcon4
PreserveAspectRatio=1
W=#gIconWidth#
H=#gIconHeight#
X=( [mAppCount] <= 4 ? ( [mApp3:X] + #horizontal_indent# ) : ( [mAppCount] <= 9 ? #distance# : ( [mApp3:X] + #horizontal_indent# ) ) )
Y=( [mAppCount] <= 4 ? ( [mApp3:Y] ) : ( [mAppCount] <= 9 ? ( [mApp3:Y] + #vertical_indent# ) : ( [mApp3:Y] ) ) )
AntiAlias=1
DynamicVariables=1
UpdateDivider=1
Hidden=([mAppCount] >= 4 ? 0 : 1 )
LeftMouseUpAction=[!CommandMeasure "mAppName4" "Open"]
ToolTipText=[mAppName4]

[mApp5]
Meter=Image
MeasureName=mAppIcon5
PreserveAspectRatio=1
W=#gIconWidth#
H=#gIconHeight#
X=( [mAppCount] <= 9 ? ( [mApp4:X] + #horizontal_indent# ) : #distance# )
Y=( [mAppCount] <= 9 ? ( [mApp4:Y]) : ( [mApp4:Y] + #vertical_indent# ) )
AntiAlias=1
DynamicVariables=1
UpdateDivider=1
Hidden=( [mAppCount] >= 5 ? 0 : 1 )
LeftMouseUpAction=[!CommandMeasure "mAppName5" "Open"]
ToolTipText=[mAppName5]

[mApp6]
Meter=Image
MeasureName=mAppIcon6
PreserveAspectRatio=1
W=#gIconWidth#
H=#gIconHeight#
X=( [mApp5:X] + #horizontal_indent# )
Y=( [mApp5:Y] )
AntiAlias=1
DynamicVariables=1
UpdateDivider=1
Hidden=( [mAppCount] >= 6 ? 0 : 1 )
LeftMouseUpAction=[!CommandMeasure "mAppName6" "Open"]
ToolTipText=[mAppName6]

[mApp7]
Meter=Image
MeasureName=mAppIcon7
PreserveAspectRatio=1
W=#gIconWidth#
H=#gIconHeight#
X=( [mAppCount] <= 9 ? #distance# : ( [mApp6:X] + #horizontal_indent# ) )
Y=( [mAppCount] <= 9 ? ( [mApp6:Y] + #vertical_indent# ) : ( [mApp6:Y] ) )
AntiAlias=1
DynamicVariables=1
UpdateDivider=1
Hidden=( [mAppCount] >= 7 ? 0 : 1 )
LeftMouseUpAction=[!CommandMeasure "mAppName7" "Open"]
ToolTipText=[mAppName7]

[mApp8]
Meter=Image
MeasureName=mAppIcon8
PreserveAspectRatio=1
W=#gIconWidth#
H=#gIconHeight#
X=( [mApp7:X] + #horizontal_indent# )
Y=( [mApp7:Y] )
AntiAlias=1
DynamicVariables=1
UpdateDivider=1
Hidden=( [mAppCount] >= 8 ? 0 : 1 )
LeftMouseUpAction=[!CommandMeasure "mAppName8" "Open"]
ToolTipText=[mAppName8]

[mApp9]
Meter=Image
MeasureName=mAppIcon9
PreserveAspectRatio=1
W=#gIconWidth#
H=#gIconHeight#
X=( [mAppCount] <= 9 ? ( [mApp8:X] + #horizontal_indent# ) : #distance# )
Y=( [mAppCount] <= 9 ? ( [mApp8:Y] ) : ( [mApp8:Y] + #vertical_indent# ) )
AntiAlias=1
DynamicVariables=1
UpdateDivider=1
Hidden=( [mAppCount] >= 9 ? 0 : 1 )
LeftMouseUpAction=[!CommandMeasure "mAppName9" "Open"]
ToolTipText=[mAppName9]

[mApp10]
Meter=Image
MeasureName=mAppIcon10
PreserveAspectRatio=1
W=#gIconWidth#
H=#gIconHeight#
X=( [mApp9:X] + #horizontal_indent# )
Y=( [mApp9:Y] )
AntiAlias=1
DynamicVariables=1
UpdateDivider=1
LeftMouseUpAction=[!CommandMeasure "mAppName10" "Open"]
ToolTipText=[mAppName10]
Hidden=( [mAppCount] >= 10 ? 0 : 1 )

[mApp11]
Meter=Image
MeasureName=mAppIcon11
PreserveAspectRatio=1
W=#gIconWidth#
H=#gIconHeight#
X=( [mApp10:X] + #horizontal_indent# )
Y=( [mApp10:Y] )
AntiAlias=1
DynamicVariables=1
UpdateDivider=1
LeftMouseUpAction=[!CommandMeasure "mAppName11" "Open"]
ToolTipText=[mAppName11]
Hidden=( [mAppCount] >= 11 ? 0 : 1 )

[mApp12]
Meter=Image
MeasureName=mAppIcon12
PreserveAspectRatio=1
W=#gIconWidth#
H=#gIconHeight#
X=( [mApp11:X] + #horizontal_indent# )
Y=( [mApp11:Y] )
AntiAlias=1
DynamicVariables=1
UpdateDivider=1
LeftMouseUpAction=[!CommandMeasure "mAppName12" "Open"]
ToolTipText=[mAppName12]
Hidden=( [mAppCount] >= 12 ? 0 : 1 )

[mApp13]
Meter=Image
MeasureName=mAppIcon13
PreserveAspectRatio=1
W=#gIconWidth#
H=#gIconHeight#
X=#distance#
Y=( [mApp12:Y] + #vertical_indent# )
AntiAlias=1
DynamicVariables=1
UpdateDivider=1
LeftMouseUpAction=[!CommandMeasure "mAppName13" "Open"]
ToolTipText=[mAppName13]
Hidden=( [mAppCount] >= 13 ? 0 : 1 )

[mApp14]
Meter=Image
MeasureName=mAppIcon14
PreserveAspectRatio=1
W=#gIconWidth#
H=#gIconHeight#
X=( [mApp13:X] + #horizontal_indent# )
Y=( [mApp13:Y] )
AntiAlias=1
DynamicVariables=1
UpdateDivider=1
LeftMouseUpAction=[!CommandMeasure "mAppName14" "Open"]
ToolTipText=[mAppName14]
Hidden=( [mAppCount] >= 14 ? 0 : 1 )

[mApp15]
Meter=Image
MeasureName=mAppIcon15
PreserveAspectRatio=1
W=#gIconWidth#
H=#gIconHeight#
X=( [mApp14:X] + #horizontal_indent# )
Y=( [mApp14:Y] )
AntiAlias=1
DynamicVariables=1
UpdateDivider=1
LeftMouseUpAction=[!CommandMeasure "mAppName15" "Open"]
ToolTipText=[mAppName15]
Hidden=( [mAppCount] >= 15 ? 0 : 1 )

[mApp16]
Meter=Image
MeasureName=mAppIcon16
PreserveAspectRatio=1
W=#gIconWidth#
H=#gIconHeight#
X=( [mApp15:X] + #horizontal_indent# )
Y=( [mApp15:Y] )
AntiAlias=1
DynamicVariables=1
UpdateDivider=1
LeftMouseUpAction=[!CommandMeasure "mAppName16" "Open"]
ToolTipText=[mAppName16]
Hidden=( [mAppCount] >= 16 ? 0 : 1 )
