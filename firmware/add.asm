	ADD AL,10       # 10 00 00 00
	ADD BL,25       # 10 25 00 00
	ADD AL,BL       # 35 25 00 00

	ADD CL,36       # 35 25 36 00
	ADD DL,52       # 35 25 36 52
	ADD CL,DL       # 35 25 88 52

	ADD AL,CL       # BD 25 88 52
	ADD AL,DL       # 0F 25 88 52 1

	ADD BL,CL       # 0F AD 88 52
	ADD BL,DL       # 0F FF 88 52

	END
