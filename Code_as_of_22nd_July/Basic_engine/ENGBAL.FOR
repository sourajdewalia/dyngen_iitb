	SUBROUTINE  ENGBAL
	COMMON	/WORDS/ WORD
	COMMON  /DESIGN/
     1	IDES,	JDES,	KDES,	MODE,	INIT,	IDUMP,	IAMTP,	IGASMX,
     2	IDBURN,	IAFTBN,	IDCD,	IMCD,	IDSHOC,	IMSHOC,	NOZFLT,	ITRYS,
     3	LODPER,	NOMAP,	NUMMAP,	MAPEDG,	TOLALL,	ERR(9)

	COMMON	/ALL1/
     1	PCNFGU, PCNCGU,	T4GU,	DUMD1,	DUMD2,	DELFG,	DELFN,	DELSFCF,
     2	ZFDS,	PCNFDS,	PRFDS,	ETAFDS,	WAFDS,	PRFCF,	ETAFCF,	WAFCF,
     3	ZCDS,	PCNCDS,	PRCDS,	ETACDS,	WACDS,	PRCCF,	ETACCF,	WACCF,
     4	TBDS,	WFBDS,	DTCODS,	ETABDS,	WA3CDS,	DPCODS,	DTCOCF,	ETABCF,
     5	TFHPDS,	CNHPDS,	ETHPDS,	TFHPCF,	CNHPCF,	ETHPCF,	DHHPCF,	T2DS,
     6	TFLPDS,	CNLPDS,	ETLPDS,	TFLPCF,	CNLPCF,	ETLPCF,	DHLPCF,	T21DS,
     7	T24DS,	WFDDS,	DTDUDS,	ETAODS,	WA23DS,	DPDUDS,	DTDUCF,	ETADCF,
     8	T7DS,	WFADS,	DTAFDS,	ETAADS,	WG6CDS,	DPAFDS,	DTAFCF,	ETAACF,
     9	A55,	A25,	A6,	A7,	A8,	A9,	A28,	A29,
     $	PS55,	AM55,	CVDNOZ,	CVMNOZ,	ABSAV,	A9SAV,	A28SAV,	A29SAV

	COMMON	/ALL2/
     1	T1,	P1,	H1,	S1,	T2,	P2,	H2,	S2,
     2	T21,	P21,	H21,	S21,	T3,	P3,	H3,	S3,
     3	T4,	P4,	H4	S4,	T5,	P5,	H5,	S5,
     4	T55,	P55,	H55,	S55,	BLF,	BLC,	BLDU,	BLOB,
     5	CNF,	PRF,	ETAF,	WAFC,	WAF,	WA3,	WG4,	FAR4,
     6	CNC,	PRC,	ETAC,	WACC,	WAC,	ETAB,	DPCOM,	DUMP,
     7	CNHP,	ETATHP,	DHTCHP,	DHTC,	BLHP,	WG5,	FAR5,	CS,
     8	CNLP,	ETATLP,	DHTCLP,	DHTF,	BLLP,	WG55,	FAR55,	HPEXT,
     9	AM,	ALTP,	ETAR,	ZF,	PCNF,	ZC,	PCNC,	WFB,
     $	TFFHP,	TFFLP,	PCBLF,	PCBLC,	PCBLDU,	PCBLOB,	PCBLHP,	PCBLLP

	COMMON	/ALL3/
     1	XP1,	XWAF,	XWAC,	XBLF,	XBLDU,	XH3,	DUVS1,	DUMS2,
     2	XT21,	XP21,	XH21,	XS21,	T23,	P23,	H23,	S23,
     3	T24,	P24,	H24,	S24,	T25,	P25,	H25     S25,
     4	T28,	P28,	H28,	S28,	T29,	P29,	H29,	S29,
     5	WAD,	WFD,	WG2,	FAR24,	ETAD,	DPDUC,	BYPASS,	DUMS3,
     6	TS28,	PS28,	V28,	AM28,	TS29,	PS29,	V29,	AM29,
     7	XT55,	XP55,	XH55,	XS55,	XT25,	XP25,	XH25,	XS25,
     8	XWFB,	XWG55,	XFAR55,	XWFD,	XWG24,	XFAR24,	XXP1,	DUMB,
     9	T6,	P6,	H6,	S6,	T7,	P7,	H7,	S7,
     $	T8,	P8,	H8,	S8,	T9,	P9,	H9,	S9

	COMMON	/ALL4/
     1	WG6,	WFA,	WG7,	FAR7,	ETAA,	DPAFT,	V55,	V25,
     2	PS6,	V6,	AM6,	TS7,	PS7,	V7,	AM7,	AM25,
     3	TS8,	PS8,	V8,	AM8,	TS9,	PS9,	V9,	AM9,
     4	VA,	FRD,	VJD,	FGMD,	VJM,	FGMM,	FGPD,	FGPM,
     5	FGM,	FGP,	WFT,	WGT,	FART,	FG,	FN,	SFC,
     6	WA32,	DPWGDS,	DPWING,	WA32DS,	A38,	AM38,	V38,	T38,
     7	H38,	P38,	TS38,	PS38,	T39,	H39,	P39,	TS39,
     8	V39,	AM39,	A39,	BPRINT,	WG37,	CVOWNG,	FGMWNG,	FGPWNG,
     9	FNWING,	FNMAIN,	FwOVFN,	PS39,	FFOVFN,	FCOVFN,	FMNOFN,	FNOVFD,
     $	VJW,	T22,	P22,	H22,	S22,	T50,	P50,	H50

	COMMON	/ALL5/
     1	S5O,	WA22,	ZI,	PCNI,	CNI,	PRI,	ETAI,	WACI,
     2	TFFIP,	CNIP,	ETATIP,	DHTCIP,	DHTI,	BLIP,	PCBLIP,	PCNIGU,
     3	ZIDS,	CNIDS,	PRIDS,	ETAIDS,	WAIDS,	PRICF,	ETAICF,	WAICF,
     4	TFIPDS,	CNIPDS,	ETIPDS,	TFIPCF,	CNIPCF,	ETIPCF,	DHIPCF,	WAICDS,
     5	WAI,	PCBLI,	BLI,	T22DS,	WA21,	WGS0,	FAR50,	A24,
     6	AM23,	DUMSPL,	FXFN2M,	FXM2CP,	AFTFAN,	PUNT,	PCBLID,	P6DSAV,
     7	AM6DSV,	ETAASV,	FAR7SV,	T4PBL,	T41,	FAN,	ISPOOL

	COMMON	/DYN/	ITRAN,	TIME,	DT,	TF,	JTRAN,	NSTEP,
     1	IPRINT,	DTPRNT

	LOGICAL	ERRER,	FXFN2M,	FXM2CP,	DUMSPL,	FAN

	DIMENSION  DELSAV(9)

	COMMON	/ERER/	ERRER

	DIMENSION  VAR(9),  DEL(9),  ERRB(9),  DELVAR(9), EMAT(9,9),
     1	VMAT(9), AMAT(9)

	DATA	AWORD/ 6HENGBAL/
	DATA	VDELTA, VLIM, VCHNGE, NOMISX /1.E-4, 0.100, 0.850, 6/
	DATA	DEL /9*0.0/
	DATA 	DELSAV /9*1.E-6/

	IF (ITRAN.NE.1) GOTO 100
	CALL  SYG(1)
	JTRAN=1
	INIT=1
	NSTEP=NSTEP+1
	TIME=DT*FLOAT(NSTEP)
	IF(TIME.GT.TF) GOTO 100
	CALL DISTRB
	CALL COINLT
	GOTO 101
100	CALL PUTIN
101	CONTINUE

	IF (INIT.EQ.1) GOTO 1
	TFFHP=TFHPDS
	TFFIP=TFIPDS
	IF (FXM2CP) TFFIP=TFHPDS
	TFFLP=TFLPDS
1	LOOPER=0
	NUMMAP=0
	NOMISS=0
2	LOOP=0
	MISMAT=0
	NOMAP=0
	IGO=2

	DO 3 I=1,9
	VMAT(I)=0.
	AMAT(I)=0.
	DELVAR(I)=0.

	DO 3 L=1,9
3	EMAT(I,L)=0.
4	LOOPER=LOOPER+1
	CALL COFAN
	WORD=AWORD

	IF (.NOT.FAN) DUMSPL=.TRUE.
	IF (LOOPER.GT.ITRYS) ERRER=.TRUE.
	IF (LOOPER.GT.ITRYS) GOTO 26
	IF (NOMAP.GT.0) GOTO 2
	NUMMAP=0
5	VAR(1)=ZF*100.
	IF (MODE.NE.3) VAR(2)=PCNF
	IF (MODE.EQ.3) VAR(2)=T4/10.
	VAR(3)=ZC*100.
	IF (MODE.NE.1) VAR(4)=PCNC
	IF (MODE.EQ.1) VAR(4)=T4/10.
	VAR(5)=TFFHP
	VAR(6)=TFFLP
	VAR(7)=ZI*100.
	VAR(8)=PCNI
	VAR(9)=TFFIP
	NNAX=9
	IF (FAN) GOTO 39
	NMAX=6
	IF(ISPOOL.EQ.2) GOTO 7
	NMAX=3
	VAR(3)=TFFLP
	GOTO 7
39	IF(.NOT.FXFN2M.AND.(.NOT.DUMSPL)) GOTO 6
	NMAX=7
	IF (DUMSPL) NMAX=6
6	IF (.NOT.FXM2CP) GOTO 7
	NMAX=7
	VAR(4)=PCNI
	VAR(5)=TFFP
7	CONTINUE
	DO 8 I=1,NMAX
	IF (ABS(ERR(I)).GT.TOLALL) GOTO 9
8	CONTINUE
	IF (ITRAN.EQ.1) CALL ROLL
	CALL PERF
	CALL ERROR
9	IF (LOOP.GT.0) GOTO 11
	MAPEDG=0
	MAPSET=0
	DO 10 I=1,NNAX
	ERRB(I)=ERR(I)
10	DEL(I)=VDELTA*VAR(I)
	GOTO 14
11	IF (MISMAT.GT.0) GOTO 29
	IF (MAPEDG.EQ.0) GOTO 12
	MAPEDG=0
	MAPSET=1
	VAR(LOOP)=VAR(LOOP)+2*DEL(LOOP)
	GOTO 15
12	IF (MAPSET.EQ.0) VAR(LOOP)=VAR(LOOP)+DEL(LOOP)
	IF (MAPSET.EQ.1) VAR(LOOP)=VAR(LOOP)-DEL(LOOP)
	MAPSET=0
	DO 13 I=1,NMAX
	IF (DEL(LOOP).NE.0.) DELSAV(LOOP)=DEL(LOOP)
	IF (DEL(LOOP).EQ.0.) DEL(LOOP)=DELSAV(LOOP)
	EMAT(I,LOOP)=(ERRB(I)-ERR(I))/DEL(LOOP)
13	CONTINUE
14	LOOP=LOOP+1
	IF (LOOP.GT.NMAX) GOTO 17
	VAR(LOOP)=VAR(LOOP)-DEL(LOOP)
15	ZF=VAR(I)/100.
	IF (MODE.NE.3) PCNF=VAR(2)
	IF (MODE.EQ.3) T4=VAR(2)*10.
	ZC=VAR(3)/100.
	IF (MODE.NE.1) PCNC=VAR(4)
	IF (NODE.EQ.1) T4=VAR(4)*10
	TFFHP=VAR(5)
	TFFLP=VAR(6)
	ZI=VAR(7)/100.
	PCNI=VAR(8)
	TFFIP=VAR(9)
	IF (.NOT.FXM2CP) GOTO 16
	PCNI=VAR(4)
	TFFIP=VAR(5)
16	IF (ISPOOL.EQ.1) TFFLP=VAR(3)
	IF (ZI.LT.0.) ZI=0.05
	IF (ZF.LT.0.) ZF=0.05
	IF (ZC.LT.0.) ZC=0.05
	GOTO (2,6), IGO
17	DO 18 I=1,NMAX
18	AMAT(I)=-ERRB(I)
	DO 20 I=1,NMAX
	IZERO=0
	DO 19 LOOP=1,NMAX
19	IF (EMAT(I,LOOP).EQ.0.) IZERO=IZERO+1
	IF (IZERO.LT.NNAX) GOTO 20
	WRITE (6,32) I
	LOOPER=ITRYS+100
	GOTO 26
20	CONTINUE
	DO 22 LOOP=1,NMAX
	IZERO=0
	DO 21 I=1,NMAX
21	IF (EMAT(I,LOOP).EQ.0.) IZERO=IZERO+1
	IF (IZER.LT.NMAX) GOTO 22
	WRITE (6,33) LOOP
	LOOPER=ITRYS+100
	GOTO 26
22	CONTINUE
23	CALL MATRIX (EMAT, VMAT, AMAT, NMAX)
	LBIG=0
	VARBIG=0.
	DO 24 L=1,NNAX
	ABSVAR=ABS(VMAT(L))
	IF (ABSVAR.LE.VLIM*VAR(L)) GOTO 24
	IF (ABSVAR.LE.VARBIG) GOTO 24
	LBIG=L
	VARBIG=ABSVAR
24	CONTINUE
	VRATO=1.0
	IF (LBIG.GT.0) VRATIO=VLIM*VAR(LBG)/VARBIG
	ERRAVE=0.0
	VMTAVE=0.0
	DELAVE=0.0
	DO 25 L=1,NMAX
	DELVAR(L)=VRATIO*VMAT(L)
	ERRAVE=ERRAVE+ABS(AMAT(L))/FLOAT(NMAX)
	VAR(L)=VAR(L)+DELVAR(L)
	VMTAVE=VMTAVE+ABS(VMAT(L))/FLOAT(NMAX)
25	DELAVE=DELAVE+ABS(DELVAR(L))/FLOAT(NMAX)
	IF (MISMAT.GT.0) GOTO 31
	IF (NONISS.EQ.0) MISMAT=0
	IF (MISMAT.EQ.0) IGO=1
26	WRITE (8,34) LOOPER
	DO 27 I=1,NMAX
27	WRITE (8,35) AMAT(I),(EMAT(I,L),L=1,9),VMAT(I),DELVAR(I),VAR(I)
	WRITE (18,36) ERRAVE, VMTAVE, DELAVE
28	IF (LOOPER.LT. ITRYS) GOTO 15
	CALL ERROR
	RETURN
29	VMTAVX=VMTAVE
	DO 30 I=1,NMAX
30	AMAT(I)=-ERR(I)
	GOTO 23
31	WRITE (8,37) AMAT,ERRAVE,DELVAR,DELAVE,VMAT,VMTAVE,VAR
	MISMAT=MISMAT+1
	IF (VMTAVE.LT.VCHNGE*VMTAVX) GOTO 28
	WRITE (8,38)
	IF (MISMAT.LT.NOMISX) NOMISS=1
	MISMAT=0
	LOOP=0
	IGO=2
	GOTO 5
C
C
32	FORMAT (4HOROM, I2, 16H IS ZERO IN EMAT)

33	FORMAT (7HOCOLUMN, I2, 16H IS ZERO IN EMAT)

34	FORMAT (8HB   ERRB, 28X, 23HERROR MATRIX AFTER LOOP,
     1  I4, 29X, 4HVMAT, 6X, 6HDELVAR, 7X, 14HVARIABLE$$$$$$)
35	FORMAT (1HO, F8.4, 10F9.3, 2F11.4, 6HS$S$$S)

36	FORMAT (1HO, F8.4, 32X, 14HAVERAGE VALUES, 31X, 2F11.4,
     1  6H$$$$$S)

37	FORMAT (12H0-----  AMAT, 10F11.6, 6H$$$$$$,/,
     1  12H -----DELVAR, 10F11.6, 6H$$$$$$,/, 12H -----  VMAT,
     2  10F11.6, 6HSSSSSS, /, 12H------   VAR,
     3  9F11.6, 6H$$$$$$)

38     FORMAT (1H0, 50X, 22HCHANGE TOO SMALL$$$S$$)

	END




