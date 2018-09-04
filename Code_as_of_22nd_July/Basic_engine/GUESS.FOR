	FUNCTION GUESS(M, T, TD, P, PD, W, WD, D, DD, VD)

	IF (M.EQ.0)  GUESS=VD*((T/TD)**1.60)*((DD/D)**0.50)
	IF (M.EQ.1)  GUESS=VD*((P/PD)**1.80)*((DD/D)**0.33)
	IF (M.EQ.2)  GUESS=VD*((W/WD)**0.33)*((DD/D)**1.00)
	IF (M.EQ.3)  GUESS=VD*((W/WD)**0.00)*((P/PD)**0.50)
	IF (M.EQ.4)  GUESS=VD*((W/WD)**0.00)*((P/PD)**0.50)
	IF (M.EQ.5)  GUESS=VD*((T/TD)**1.1)*((DD/D)**0.7)
	IF (M.EQ.6)  GUESS=VD*((P/PD)**1.00)*((D/DD)**0.25)
	IF (M.EQ.7)  GUESS=VD*((P/PD)**0.62)*((D/DD)**0.31)
	IF (M.EQ.8)  GUESS=VD*((T/TD)**1.2)**DD/D
	IF (M.EQ.9)  GUESS=VD*P/PD*((D/DD)**1.5)
	RETURN
	END

