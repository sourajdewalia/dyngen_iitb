	SUBROUTINE  INDUMY (CNI, ZI, WACI,IDES)
C
C	Makes intermediate compressor not change air conditions
C	for engine configurations e and h
C
	COMMON /DUMINT/ CNXX(15), PRXX(15,15), WACXX(15,15), ETAXX(15,15),
     1	NCNX, NPTX(15)
	DIMENSION WACAR(15), XCNXX(15)

	DATA XCNXX /0.001, 0.1,0.2, 0.3, 0.5, 0.8, 1.0, 1.5, 2.0, 3.0,
     1	4.0, 5.0, 6.0, 7.0, 9.0/

	DATA WACAR /5.0, 4.5, 4.0, 3.5, 3.0, 2.5, 2.0, 1.5, 1.0, 0.8,
     1	0.6, 0.4, 0.25, 0.1, 0.05/

	IF (IDES.NE.1) GOTO 1
	WAIDS=MACI
	CNIDS=CN
	ZI=2./3.5
1	NCNX=15

	DO 2 I=1,15
	NPTX(I)=15
	CNXX(I)=CNXX(I)*CNIDS

	DO 2 J=1,15
	PRXX(I,J)=FLOAT(J+3)/4.
	ETAXX(I,J)=1.
2	WACXX(J,I)=WACAR(I)*(0.993*0.001*FLOAT(J))*WAIDS
	RETURN
	END


