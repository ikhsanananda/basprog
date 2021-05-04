program :- read(Y), read(X), indeks(K,Y,X), write(K), nl.
indeks(X,[X|_],1).
indeks(X,[_|Y],K) :- K>1, K1 is K-1, indeks(X,Y,K1).
:- program.
