	SUBROUTINE   RAM (AM,ETAR)
C
C	Calculates ram recovery defined by MIL-E-5008B specifications
C
	IF (AM.GT.1.) GOTO 2
	ETAR=1.
1	RETURN
2	IF (AM.GT.5.) GOTO 3
	ETAR=1.-0.075*((AM-1.)**1.35)
	GOTO 1
3	ETAR=900./((AM**4)+935.)
	GOTO 1
	END

