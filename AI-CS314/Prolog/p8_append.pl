# Concatenation of two lists l1 and l2 is l3

append([],L,L).
append([H|T],L2,[H|L3]) :- append(T,L2,L3).

# ?- append([1,2,3],[4,5],X).