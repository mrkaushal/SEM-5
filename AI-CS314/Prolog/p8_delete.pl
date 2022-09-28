# delete an item from a same list in prolog

delete(X, [X|T], T).
delete(X, [H|T], [H|T1]) :- delete(X, T, T1).

# ?- delete(3, [1,2,3,4,5], X).