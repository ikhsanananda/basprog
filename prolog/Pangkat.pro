pred([],[]) :-!.
pred([X|T],[X|Result]) :- X>8, !,pred(T,Result).
pred([_,Tail],Result) :- pred(Tail,Result).