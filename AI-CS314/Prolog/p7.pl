male(tom).
male(bob).
male(jim).

female(pam).
female(liz).
female(ann).
female(pat).


parent(pam,bob).
parent(tom,bob).
parent(tom,liz).
parent(bob,ann).
parent(bob,pat).
parent(pat,jim).

father(X,Y) :- parent(X,Y), male(X).
mother(X,Y) :- parent(X,Y), female(X).
grandfather(X,Y) :- parent(X,Z), parent(Z,Y), male(X).
grandmother(X,Y) :- parent(X,Z), parent(Z,Y), female(X).
brother(X,Y) :- parent(Z,X), parent(Z,Y), male(X), not(X=Y).
sister(X,Y) :- parent(Z,X), parent(Z,Y), female(X), not(X=Y).
