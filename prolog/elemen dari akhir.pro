program :- read(L1), cari(L1,X), write(X), nl.
cari(L,X) :- panjang(L,N), N1 is N-1, dapat(L,N1,X).
panjang([],0).
panjang([_|B],N) :- panjang(B,N1), N is N1 + 1.
dapat([X|_],1,X).
dapat([_|Xs],C,X) :- C > 1, C1 is C - 1, dapat(Xs,C1,X).
:- program.