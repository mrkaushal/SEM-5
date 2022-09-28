# sum the list item in prolog

sum_list([], 0).
sum_list([H|T], Z) :- sum_list(T, Z1), Z is H + Z1.

# ?- sum_list([1,2,3,4,5], X).