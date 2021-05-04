program :- read(X), ganjil(X,Y), write(Y), nl.
ganjil([], []).
ganjil([X], [X]).
ganjil([X,_|X1], [X|Y1]) :- ganjil(X1, Y1).
:- program.
