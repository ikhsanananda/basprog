program :- read(X), hasil(X,Y), write(Y), nl.
hasil(X, X) :- X<10.
hasil(X, Y) :- X>=10, X1 is X//10, X2 is X mod 10, hasil(X1, Y1), Y is Y1+X2.
:- program.
