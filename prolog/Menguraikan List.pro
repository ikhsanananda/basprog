program :- read(X), urai(X,Y), write(Y), nl.
urai([],[]).
urai([X|Ys],[X|Zs]) :- \+ is_list(X), urai(Ys,Zs).
urai([[X,1]|Ys],[X|Zs]) :- urai(Ys,Zs).
urai([[X,N]|Ys],[X|Zs]) :- N > 1, N1 is N - 1, urai([[X,N1]|Ys],Zs).
:- program.
