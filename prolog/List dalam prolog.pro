program :- read(X), read(Y), kelipatan(Y,X,Z), write(Z), nl.
kelipatan([],_,0) :- !.
kelipatan([H|T],X,Z) :- mod(H,X) =:= 0, kelipatan(T,X,X1), Z is X1+1.
kelipatan([H|T],X,Z) :- mod(H,X) =\= 0, kelipatan(T,X,X1), Z is X1.
:-program.
