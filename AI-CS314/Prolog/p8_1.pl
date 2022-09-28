//  list in prolog with example

print_list([]).
print_list([H|T]) :- write(H), nl, print_list(T).

# ?- print_list([1,2,3,4,5]).