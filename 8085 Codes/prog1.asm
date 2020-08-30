# org 4000
	   lxi h,7050
	  lxi d,7064
	   mvi b,04
loop:	  mov a,m
	   stax d
	   inx h
	   dcx d
	  dcr b
	   jnz loop
	   hlt
