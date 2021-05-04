program :- read(X), read(L), read(K), insert_at(X,L,K,R), write(R), nl.
insert_at(X,L,K,R) :- remove_at(X,R,K,L).
remove_at(X,[X|Xs],1,Xs).
remove_at(X,[Y|Xs],K,[Y|Ys]) :-
    K > 1, 
    K1 is K - 1,
    remove_at(X,Xs,K1,Ys).
:- program.