	SUBROUTINE  RAM2 (AM,ETAR)
C
C	Calculates special cases of input ram recovery as a function of
C	flight Mach number
C
	DIMENSION  PRINLT(15), FHN(15)
	DIMENSION  Y(3), X(3)

	DATA  FHN /0., 0.1, 0.2, 0.3, 0.4, 0.5, 0.8, 1.1, 1.2, 1.4,
     1	1.6, 1.8, 2.2, 2.4, 2.7/

	DATA  PRINLT /0.9, 0.932, 0.95, 0.961, 0.968, 0.97, 0.971,
     1	0.97, 0.9681, 0.958, 0.94,  0.9101, 0.858, 0.8201, 0.75/

	H=0.
	DO 1 J=1,15
1	IF (AM.GE. FHN(J)) M=J-1
	IF (M.EQ.0) M=1
	IF (M.GE.14) M=13

	DO 2 I=1,3
	MM=M-1+I
	X(I)=FHN(MM)
2	Y(I)=PRINLT(MM)

	CALL PARABO (X, Y, AM, ETAR)
	RETURN
	END
