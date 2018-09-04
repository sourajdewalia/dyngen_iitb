 	SUBROUTINE  SYG (ICON)
C
C	controls printing from UNIT08 (Throughout the program and
C	particularly in ENGBAL, certain messages, variables, and
C	matrix values are written on UNIT08 as an aid in determining
C	why an error occurred or why a point did not balance. These
C	values are printed out if subroutine ERROR is called and
C	IDUMP is greater than zero, or after a good point if IDUMP:2.)
C
	DIMENSION WORD(132)

	DATA ONEDOL /6H      /

	GOTO (1,2) ICON
	END FILE 8
1	REWIND 8
	RETURN

C	TERMINATE THE FILE

2	WRITE (8,10)
	END FILE 8
	REWIND 8

C	READ RECORD
3	READ (8,11) (WORD(I),I=1,132)
C	CHECK FOR 12 LEADING DOLLAR SIGNS

	DO 4 I=1,12
	IF (WORD(I)-ONEDOL) 4,5,4
4	CONTINUE
	RETURN

C	CHECK FOR 6 TRAILING DOLLAR SIGNS

5	DO 8 I=1,132
C	I=I
	IF (WORD(I)-ONEDOL) 8,6,8
6	K=I+5
	DO 7 J=1,K
	IF (WORD(J)-ONEDOL) 6,8,6
7	CONTINUE
	GOTO 9
8	CONTINUE
	WRITE (6, 12)
	RETURN
C	PRINT LINE
9	I=I-1
	WRITE (6,11) (WORD(M),M=1,I)
	GOTO 3
C
C
10	FORMAT (12H$$$$$$$$$$$$)
11	FORMAT (132A1)
12	FORMAT (1H0, 12HERROR IN SYG)
	END

