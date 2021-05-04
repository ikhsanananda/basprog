program :- read(L), akhir(L,X), write(X), nl.
akhir([X],X).
akhir([_|L],X) :- akhir(L,X).
:- program.
