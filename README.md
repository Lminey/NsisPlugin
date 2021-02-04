# NsisPlugin


如果调用dll


	Var chanle_id

	Function GetChanleName
	CallInstDLL $INSTDIR\NsisPlugin.dll GetChanleName
	Pop $0
	StrCpy $chanle_id $0
	FunctionEnd`


