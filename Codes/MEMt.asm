# ORG 4000
	   LXI H,2000
	   LXI B,3009
	   MVI E,0A

LOOP:	   MOV A,M
	   STAX B
	   INX H
	   DCX B
	   DCR E
	   JNZ LOOP
	   HLT
