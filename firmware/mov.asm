	MOV	AL,05
	MOV	BL,08
	MOV	CL,07
	MOV	DL,06
	
	MOV	AL,[01]
	MOV	BL,[04]
	MOV	CL,[07]
	MOV	DL,[0A]

	MOV	[E0],AL     
	MOV	[E1],BL
	MOV	[E2],CL
	MOV	[E3],DL

	MOV	AL,[BL]	
	MOV	BL,[CL]
	MOV	CL,[DL]
	MOV	DL,[AL]

	MOV	[AL],BL
	MOV	[BL],CL
	MOV	[CL],DL
	MOV	[DL],AL

	END
	
	
