program :- read(X), read(Y), fpb(X,Y,A), write(A), nl.
fpb(X,0,X) :- X > 0.
fpb(X,Y,A) :- Y > 0, Z is X mod Y, fpb(Y,Z,A).
:- program.