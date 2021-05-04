program :- read(L), compress(L,R), write(R), nl.
compress([],[]).
compress([X],[X]).
compress([X,X|Xs],Zs) :- compress(Xs,Zs).
compress([X,Y|Ys],[X|Zs]) :- X \= Y, compress([Y|Ys],Zs).
:- program.