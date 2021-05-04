program :- read(L), beda(L,X), write(X), nl.
beda([A|[A1|B1]],X) :- A1>=A , C is A1-A, append([C],Z,X), beda([A1|B1],Z).
beda([A|[A1|B1]],X) :- A1<A, C is A-A1, append([C],Z,X), beda([A1|B1],Z).
beda([_|[]],[]) :- !.
beda([],[]).
:- program.
