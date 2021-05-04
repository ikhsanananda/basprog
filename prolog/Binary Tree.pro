program :- read(X), binary(X,Y), write(Y), nl.
binary(nil,0).
binary(tree(_,nil,nil),1) :- !.
binary(tree(_,L,R),N) :- binary(L,NL), binary(R,NR), N is NL+NR.
:- program.
