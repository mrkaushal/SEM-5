# search item in list in prolog

search_item([], _).
search_item([H|T], X) :- H = X, write('found'), nl;
                         search_item(T, X).

# ?- search_item([1,2,3,4,5], 3).