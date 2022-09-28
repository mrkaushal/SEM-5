# search item in list in prolog with position

search_item([], _, _, _).
search_item([H|T], X, N, Z) :- H = X, write('found at position '), write(N), nl;
                            N1 is N + 1,
                            search_item(T, X, N1).

# ?- search_item([1,2,3,4,5], 3, 1, Z).