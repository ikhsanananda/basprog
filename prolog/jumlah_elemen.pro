program :- read(X), read(Y), itung(X,Y,Z), write(Z), nl.
awal(X, Y, Z) :- flatten(Y, Y1), hitung(X, Y1, Z).
hitung(Ele, List, Rslt) :- hitung(Ele, List, 0, Rslt).
hitung(_, [], Rslt, Rslt).
hitung(Z, [H|T], RsltZ, Rslt) :- Z \= H, hitung(Z, T, RsltZ, Rslt).
hitung(Z, [H|T], RsltZ, Rslt) :- Z = H, Rslt2Z is RsltZ + 1, hitung(A, T, Rslt2Z, Rslt).
:- program.
