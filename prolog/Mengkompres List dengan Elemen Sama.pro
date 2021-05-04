program :- read(X), urai(X,Y), write(Y), nl.
urai([],[]).
urai([X|Xs],[Z|Zs]) :- hitung(X,Xs,Ys,1,Z), urai(Ys,Zs).
hitung(X,[],[],1,[X,1]).
hitung(X,[],[],N,[X,N]) :- N > 1.
hitung(X,[Y|Ys],[Y|Ys],1,[X,1]) :- X \= Y.
hitung(X,[Y|Ys],[Y|Ys],N,[X,N]) :- N > 1, X \= Y.
hitung(X,[X|Xs],Ys,K,T) :- K1 is K + 1, hitung(X,Xs,Ys,K1,T).
:- program.
