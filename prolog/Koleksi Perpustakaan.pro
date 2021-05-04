program :- read(L), judul(L,X), write(X), nl.
judul([],[]).
judul([book(_,A,_,_)|T],X) :- judul(T,B), append([A],B,X).
:- program.
