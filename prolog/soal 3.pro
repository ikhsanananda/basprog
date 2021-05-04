program :- read(F), read(S), partof(F,S,Z), write(Z), nl.
partof(F,S,Z) :- sublist(F,F,S,Z).
sublist(_,[],_,Z) :- Z is 1, !.
sublist(_,_,[],Z) :- Z is 0, !.
sublist(OrgF, [X|TF], [X|TS], Z) :- sublist(OrgF, TF, TS, Z).
sublist(OrgF, [X|TF], [_|TS], Z) :- sublist(OrgF, OrgF, TS, Z).
:- program.