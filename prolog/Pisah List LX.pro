program :- read(L), read(Z), subset(L,Z,X), write(X), nl.
subset([X|Ys],N,S) :- gabung(Y,Z,S), pisah([X|Ys],N,Y,Z).
pisah(L,0,[],L).
pisah([A|B],N,[A|B1],Z) :- N>0, N1 is N-1, pisah(B,N1,B1,Z).
gabung(X,Y,[X,Y]).
:- program.