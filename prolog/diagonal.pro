program :- read(M), diagonal(M,R), write(R), nl.
diagonal(Matrix, L1) :-
    length(Matrix, N),
    findall(B, (between(1,N, I), nth1(I, Matrix, Row), nth1(I, Row, B)), L1).
:- program.