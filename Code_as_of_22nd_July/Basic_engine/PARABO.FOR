	SUBROUTINE  PARABO (X, Y, XD, YANS)
C
C	Parabolic curve-fit routine
C
	DIMENSION  X(3), Y(3)

	A=((X(1)-X(2))*(Y(1)-Y(3))-(X(1)-X(3))*(Y(1)-Y(2)))/
     1	((X(1)-X(2))*(X(1)-X(3))*(X(3)-X(2)))

	B=((X(1)**2-X(2)**2)*(Y(1)-Y(3))-(X(1)**2-X(3)**2)*
     1	(Y(1)-Y(2)))/((X(1)-X(2))*(X(1)-X(3))*(X(2)-X(3)))

	D=(Y(1)*X(2)**2-Y(2)*X(1)**2-B*X(2)*X(1)*X(2)-X(1))/
     1	(X(2)**2-X(1)**2)

	YANS=(A*XD+B)*XD+D

	RETURN
	END

