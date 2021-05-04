program :- read(A), read(B), read(C), hasil(A,B,C,D), write(D), nl.
hasil(A,B,C,D) :- C =\= 0, D is A+B+C.
hasil(A,B,C,D) :- C =:= 0, D is A*B.
:- program.
