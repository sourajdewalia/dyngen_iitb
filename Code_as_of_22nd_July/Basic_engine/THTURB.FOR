  	SUBROUTINE  THTURB (DH, ETA, FAR, H, S, P, TO, HO, SO, PO)
C
C	Performs isentropic calculations for turbines
C
	COMMON	/UNITS/	SI
	LOGICAL	SI

	IF  (SI)  GOTO 100
	DEM=1.986375
	GOTO 101
100	DEM=8316.41
101	CONTINUE

	HO=H-DH
	HOP=H-DH/ETA
	PT=P/2.
	DO 1, I=1,25
	CALL THERMO (PT, HOP, TT, ST, AMWT, 1, FAR, 1)
	DELS=ST-S
	IF  (ABS(DELS).LE. 0.00005*S) GOTO 2
1	PT=P*EXP(DELS*AMWT/OEM+ALOG(PT/P))
	CALL ERROR
2	PO=PT

	CALL THERMO (PO, HO, TO, SO, X1, 1, FAR, 1)

	RETURN
	END

