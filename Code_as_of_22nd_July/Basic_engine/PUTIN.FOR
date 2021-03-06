	SUBROUTINE  PUTIN

	COMMON  /WORDS/ WORD

	COMMON  /DESIGN/

     1	IDES,	JDES,	KDES,	MOOE,	INIT,	IDUMP,	IAMTP,	IGASMX,
     2	IDBURN,	IAFTBN,	IDCD,	IMCD,	IDSHOC,	IMSHOC,	NOZFLT,	ITRYS,
     3	LOOPER,	NOMAP,	NUMMAP,	MAPEDG,	TOLALL,	ERR(9)

	COMMON	/ALL1/
     1	PCNFGU,	PCNCGU,	T4GU,	DUMD1,	DUMD2,	DELFG,	DELFN,	DELSFC,
     2	ZFDS,	PCNFDS,	PRFDS,	ETAFDS,	WAFDS,	PRFCF,	ETAFCF,	WAFCF,
     3	ZCDS,	PCNCDS,	PRCDS,	ETACDS,	WACDS,	PRCCF,	ETACCF,	WACCF,
     4	T4DS,	WFBDS,	DTCOD,	ETABOS,	WA3COS,	DPCODS,	DTCOCF,	ETABCF,
     5	TFHPDS,	CNHPDS,	ETHPDS,	TFHPCF,	CNHPCF,	ETHPCF,	DHHPCF,	T2DS,
     6	TFLPDS,	CNLPDS,	ETLPDS,	TFLPCF,	CNLPCF,	ETLPCF,	DHLPCF,	T21DS,
     7	T24DS,	WFDDS,	DTDUDS,	ETADDS,	WA23DS,	DPDUDS,	DTDUCF,	ETADCF,
     8	T7DS,	WFADS,	DTAFDS,	ETAADS,	WG6CDS,	DPAFDS,	DTAFCF,	ETAACF,
     9	A55,	A25,	A6,	A7,	A8,	A9,	A28,	A29,
     $	PS55,	AM5,	CVDNOZ,	CVMNOZ,	A8SAV,	A9SAV,	A28SAV,	A29SAV


	COMMON	/ALL2/
     1	I1,	P1,	H1,	S1,	T2,	P2,	H2,	s2,
     2	T21,	P21,	H21,	S21,	T3,	P3,	H3,	S3,
     3	T4,	P4,	H4,	S4,	T5,	P5,	H5,	S5,
     4	T55,	P55,	H55,	S55,	BLF,	BLC,	BLDU,	BLOB,
     5	CNF,	PRF,	ETAF,	WAFC,	WAF,	WA3,	WG4,	FAR4,
     6	CNC,	PRC,	ETAC,	WACC,	WAC,	ETAB,	DPCON,	DUMP,
     7	CNHP,	ETATHP,	DHTCHP,	DHTC,	BLHP,	WG5,	FAR5,	CS,
     8	CNLP,	ETATLP,	DHTCLP,	DHTF,	BLLP,	WG55,	FAR55,	HPEXT,
     9	AM,	ALTP,	ETAR,	ZF,	PCNF,	ZC,	PCNC,	WFB,
     $	TFFHP,	TFFLP,	PCBLF,	PCBLC,	PCBLDU,PCBLOB,	PCBLHP,	PCBLLP

	COMMON	/ALL3/
     1	XP1,	XWAF,	XWAC,	XBLF,	XBLOU,	XH3,	DUMS1,	DUMS2,
     2	XT21,	XP21,	XH21,	XS21,	T23,	P23,	H23,	S23,
     3	T24,	P24,	H24,	S24,	T25,	P25,	H25,	S25,
     4	T28,	P28,	H28,	S28,	T29,	P29,	H29,	S29,
     5	WAD,	WFD,	WG24,	FAR24,	ETAD,	DPDUC,	BYPASS,	DUMS3,
     6	TS2B,	PS28,	V2B,	AM28,	TS29,	PS29,	V29,	AM29,
     7	XT55,	XP55,	XH55,	XS55,	XT25,	XP25,	XH25,	XS25,
     8	XWFB,	XWG55,	XFAR55,	XWFD,	XWG24,	XFAR24,	XXP1,	DUMB,
     9	T6,	P6,	H6,	S6,	T7,	P7,	H7,	S7,
     $	T8,	P8,	H8,	S8,	T9,	P9,	H9,	S9

	COMMON	/ALL4/
     1	WG6,	FWA,	WG7,	FAR7,	ETAA,	DPAFT,	V55,	V25,
     2	PS6,	V6,	AM6,	TS7,	PS7,	V7,	AM7,	AM25,
     3	TS8,	PS8,	V8,	AM8,	TS9,	PS9,	V9,	AM9,
     4	VA,	FRD,	VJD,	FGMD,	VJM,	FGMM,	FGPD,	FGPM,
     5	FGM,	FGP,	WFT,	WGT,	FART,	FG,	FN,	SFC,
     6	WA32,	DPWGDS,	DPWING,	WA32DS,	A38,	AM38,	V38,	T38,
     7	H38,	P38,	S38,	PS38,	T39,	H39,	P39,	TS39,
     8	V39,	AM39,	A39,	BPRINT,	WG37,	CVDWNG,	FGMWNG,	FGPWNG,
     9	FNWING,	FNMAIN,	FWOVFN,	PS39,	FFOVFN,	FCOVFN,	FNNOFN,	FNOVFD,
     $	VJW,	T22,	P22,	H22,	S2Z,	T50,	P50,	H50

	COMMON	/ALL5/
     1	S50,	WA22,	ZI,	PCNI,	CNI,	PRI,	ETAI,	WACI,
     2	TFFIP,	CNIP,	ETATIP,	DHTCIP,	DHTI,	BLIP,	PCBLIP,	PCNIGU,
     3	ZIDS,	PCNIDS,	PRIDS,	ETADS,	WAIDS,	PRICF,	ETAICF,	WAICF,
     4	TFIPDS,	CNIPDS,	ETIPDS,	TFIPCF,	CNIPCF,	ETIPCF,	DHIPCF,	WAICDS,
     5	WAI,	PCBLI,	BLI,	T22DS,	WA21,	WG50,	WAR50,	A24,
     6	AM23,	DUMSPL,	FXFN2M,	FXM2CP,	AFTFAN,	PUNT,	PCBLID,	P6DSAV,
     7	AM6DSV,	ETAASV,	FAR75V,	T4PBL,	T61,	FAN,	ISPOOL

	COMMON	/DELCH/	DELT1
	COMMON	/DYN/	ITRAN,	TIME,	TF,	JTRAN,	NSTEP,	TPRINT,
     1	DTPRNT

	COMMON	/RPMS/	XNHPDS,	XNIPDS,	XNLPDS,	PHIHP,	PHILP
	COMMON	/VOLS/	VFAN,	VINTC,	VCOMP,	VCOMB,	VHPTRB,	VIPTRB,
     1	VLPTRB,	VAFTBN,	VFDUCT,	VWDUCT
	COMMON	/UNITS/ SI
	LOGICAL ERRER, FXFN2M, FXM2CP, DUMSPL, AFTFAN, FAN, SI

	DATA 	AWORD /	6H PUTIN/
	COMMON/	LOOPPR/	KKGO,	PRFNEW,	PRCNEW
	DIMENSION  XSAVE(405), XFILL(1)
	EQUIVALENCE	(XFILL,IDES)
	COMMON	/ERER/ERRER

C	IDES	=1	FOR CALCULATING DESIGN POINT
C	ITRAN	=1	THIS POINT IS THE IC FOR A TRANSIENT

C	MODE	=0	FOR CONSTANT T4
C	MODE	=1	FOR CONSTANT PCNC
C	MODE	=2	FOR CONSTANT WFB
C	MODE	=3	FOR CONSTANT PCNF

C	INIT	=1	WILL NOT INITIALISE POINT

C	IDUMP	=1      WILL DUMP LOOPING DRITE-OUTS IF ERROR OCCURS
C	IDUMP	=2	WILL DUMP LOOPING DRITE-OUTS AFTER EVERY POINT

C	IAMTP	=0	WILL USE INPUT AM ANO MIL SPEC ETAR
C	IAMTP	=1	WILL USE INPUT AM AND INPUT ETAR
C	IAMTP	=2	WILL USE T1=TI+DELT1 AND STANDARD P1
C	IAMTP	=3	WILL USE P2 AND STANDARD T1
C	AMTP	=4	WILL USE T2 AND P2
C	IAMTP	=5	WILL USE RAM2 FOR SPECIAL RECOVERY

C	IGASMX	=-1	SEPARATE FLOW, INPUT    AM6
C	IGASMX	=0	SEPARATE FLOW, A6=A55
C	IGASMX	=1	WILL MIX DUCT AND MAIN STREAMS, A6=A25+A55
C	IGASMX	=2	WILL MIX DUCT AND MAIN STREAMS, INPUT AM6
	
C	IDBURN	=1	FOR DUCT BURNING, INPUT T24
C	IDBURN	=2	FOR DUCT BURNING, INPUT WFD

C	IAFTBN	=1	FOR AFTERBURNING, INPUT T7
C	IAFTBN	=2	FOR AFTERBURNING, INPUT WFA

C	IDCD	=1	DUCT NOZZLE WILL BE C-D

C	IMCD	=1	MAIN NOZZLE WILL BE C-D

C	NOZFLT	=1	FOR FLOATING MAIN NOZZLE
C	NOZFLT	=2	FOR FLOATING DUCT NOZZLE
C	NOZFLT	=3	FOR FLOATING MAIN AND DUCT NOZZLES

C	ITRYS	=N	NUMBER OF PASSES THRU ENGINE BEFORE QUITTING

	NAMELIST/DATAIN/
     1	ISPOOL, FAN,	SI, DELT1,	IDES,	MODE,	IDUMP,	IAMTP,
     2	IGASMX,	IDBURN,	IAFTBN,	IDCD,	IMCD,	NOZFLT,	ITRYS,	ZFXFNZM,
     3	FXNZCP,	AFTFAN,	DUMSPL,	TOLALL,	DELFG,	OELFN,	DELSFC,	PCNFDS,
     4	PRFDS,	ETAFDS,	PCNCDS,	PRCDS,	ETACDS,	T4DS,	WFBDS,	ETABDS,
     5	DPCOOS,	ETHPDS,	ETLPDS,	DPDUDS,	T7DS,	ETAAOS,	DPAFDS,	A6,
     6	A8,	A28,	PS55,	AM55,	CVONOZ,	CVMNOZ,	T2,	P2,
     7	T4,	HAFCOS,	HACCDS,	HPEXT,	AR,	ALTP,	ETAR,	PCNF,
     8	PCNC,	FS,	PCBLF,	PCBLC,	PCBLOU,	PCBLOB,	PCBLHP,	PCSLLP,
     9	TZ6,	ETAO,	TT,	DFA,	ETAA,	AM6,	AM23,	DPWGDS,
     A	A38, 	PCNIOS,	PCBLIP,	ZFDS,	ZCDS,	ZIDS,	PCBLID,	TFHPOS,
     B	NHPOS,	TFIPDS,	CNIPDS,	TFLPDS,	CNLPDS,	PRIDS,	ETAIDS,	ETIPOS,
     C	DAICDS,	PCBLI,	CVDWNG,	ITRAN,	DTPRNT,	TF,	INIT,	DT,
     D	NHPDS,	XNIPDS,	XNLPDS,	PMIHP,	PMIIP,	PMILP,	VFAN,	VINTC,
     E	VCOMP,	VCOMB,	VHPTRB,	VIPTRB,	VLPTRB,	VAFTBN,	VPOUCT,	VDOUCT

	WORD=AWORD
	ITRAN=0
	JTRAN=0
	TIME=0.0
	NSTEP=0
	TPRINT=0.0
	DTPRNT=0.0

1	CALL  ZERO
	IF  (KKGO.EQ.1) GOTO 5
	IDES=0

	READ (5,DATAIN)
	IF  (ERRER.AND.IAFTBN.GT.0) GOTO 1
	IF  (ERRER.AND.IDBURN.GT.0) GOTO 1
	IF  (ERRER.AND.NOZFLT.GT.0) GOTO 1

	ERRER=.FALSE.

C	TABLE IS REFERENCED TO COMMON/ALL/FIRST ENTRY

	IF (IDES.EQ.0) GOTO 7
	IF (KKGO.NE.2) GOTO 3

	DO 2 I=1,397
2	XFILL(I)=XSAVE(I)
	READ (5, DATAIN)
3	CONTINUE

C	SAVE INPUT IN CASE OF LOOP ON PRESSURE RATIOS

	DO 4 I=1,397
4	XSAVE(I)=XFILL(I)
	GOTO 7
5	DO 6 I=1, 397
6	XFILL(I)=XSAVE(I)

	WRITE (6,8) PRFDS,PRFNEW,PRCDS, PRCNEW
	PRCDS=PRCNEW
	PRFDS=PRFNEW
7	CONTINUE

	KKGO=2
	IF  (IAFTBN.GT.0.OR.IDBURN.GT.0.OR.NOZFLT.GT.0) INIT=1

	IF  (NODE.EQ.0)  WRITE  (8,9)  IDES, AM, ALTP, T4, T24,  T7
	IF  (NODE.EQ.1)  WRITE  (8,10) IDES, AM, ALTP, PCNC,T24, T7
	IF  (NODE.EQ.2)  WRITE  (8,11) IDES, AM, ALTP, WFB, T24, T7

	IF  (DES.EQ.1)  WAFC=WAFCDS
	IF  (DUMSPL)    WAICDS=WACCDS
	IF  (IDES.EQ.1) WACI=WAICDS
	IF  (IDES.EQ.1) MACC=WACCDS

	CALL COINLT
	RETURN
C
C
8	FORMAT (18HOCHANGE PRFDS FROM, F9.3, 4H  TO, F9.3,
     1  16H  AND PRCDS FROM, F10.3, 4H  TO, F10.3)

9	FORMAT (1H0,7H  IDES=, I3, 10X, 7H    AM=, F7.3, 6X,
     1  7H  ALTP= , F7.0, 6X, 7H  T4=  , F8.2, 5X, 7H   T24=, F8.2,
     2  5X, 7H T7=   , F8.2, 6H$$$S$S)

10	FORMAT (1H0, 7H  IDES=, I3,10X, 7H    AM=, F7.3, 6X,
     1  7H  ALTP= , F7.0, 6X, 7H  PCNC=, F8.3, 5X, 7H   T24=, F8.2,
     2  5X, 7H T7=   , F8.2, 6HSS$$$$)

11	FORMAT (1H0, 7H  IDES=, I3,10X, 7H    AH=, F7.3, 6X,
     1  7H  ALTP= , F7.0, 6X, 7H  WFB=,  F8.6, 5X, 7H   T24=, F8.2,
     2  5X, 7H  T7=  , F8.2, 6HSSS$$S)

	END




