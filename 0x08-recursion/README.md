Welcome once again, folks.

Here I present to you some projects I did on Recursion in C.

Recursion occurs when a function calls itself during its execution.

A typical illustration is shown using factorial.

1 factorial (1!) = 1 x 1 = 1;
2 factorial (2!) = 2 x 1 = 2;
3 factorial (3!) = 3 x 2 x 1 = 6;
4 factorial (4!) = 4 x 3 x 2 x 1 = 24;

From the  above, it's clear to see a pattern.

We can see that 3! can otherwsie be written as 3 x 2!.
4! can also be written as 4 x 3!.

Therefore, for a given number, say n, its factorial can be represented as n! = n x (n-1)!.

The catch is that we use the factorial of one number to calculate the factorial of another
number, effectively seeing factorial call itself in the calculation of factorial.


This exemplifies Recursion.
