	  lxi h,7050
	  lxi d,7064
	   mvi b,05
loop:	  mov a,m
	   stax d
	   inx h
	   dcx d
	  dcr b
	   jnz loop
	   hlt

# org 7051h
# db 01,02,03,04