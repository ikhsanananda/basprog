program :- read(A), prima(A,B), write(B), nl.
prima(A,B):- A>1, isprima(A,2,B).
prima(A,B):- A<2, B is 0.
isprima(A,C,B) :- C<A, mod(A,C) =\= 0, C1 is C+1, isprima(A,C1,B).
isprima(A,C,B) :- C<A, mod(A,C) =:= 0, B is 0.
isprima(A,A,B) :- B is 1. 
:- program.
