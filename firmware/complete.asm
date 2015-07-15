    MOV     DL,00
    MOV     BL,00
    MOV     CL,C0
    MOV	    DL,01
LOOP:
    MOV     AL,[BL]
    MOV     [CL], AL
    ADD     BL,DL
    ADD     CL,DL
    JMP     LOOP

    END
