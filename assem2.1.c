.MODEL SMALL
.STACK 100H
.DATA
A1 DW 2
A2 DW 7
.CODE
MAIN PROC
    MOV AX, @DATA
    MOV DS,AX

    MOV BX,A1
    MOV CX,A2

    ADD BX,CX
    ADD BX,30H

    MOV DX,BX
    MOV AH,2
    INT 21H



    MOV AH,4CH
    INT 21H
    MAIN ENDP
END MAIN
}

