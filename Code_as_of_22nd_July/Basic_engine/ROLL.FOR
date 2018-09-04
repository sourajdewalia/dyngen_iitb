  	SUBROUTINE ROLL
C
C	Saves past values of dynamic variables needed for calculating
C	derivatives, etc.
C
	COMMON  /FOC/    FO (50,4)
	COMMON	/SOC/ 	 SO (10,6)
	COMMON	/CDELAY/ PDATA (5,50), TIMEPT(50)

	DO 1 I=1,50
	SO (I,2)=SO(I,1)
1	SO (I,4)=SO(I,3)

	DO 2 I=1,10
	SO (I,6)=SO (I,5)
	SO (I,5)=SO (I,4)
	SO (I,3)=SO (I,2)
2	SO (I,2)=SO (I,1)

	DO 3 I=1,49
	NI=51-I
	NO=50-I
	TIMEPT(NI)=TIMEPT(NO)
	DO 3 J=1,5
3	PDATA(J,N1)=PDATA(J,NO)

	RETURN
	END

