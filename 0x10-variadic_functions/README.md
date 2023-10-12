Variadic Functions!

The first time I heard this term, I got curious. I wondered why in the world a function could be referred as such.

Anyway, we have typically declared functions thus: int main(int a, double b, char c). This is for a function which takes three arguments of types int, double and char. This conventional function can only take three argumemts anywhere it is called. So we can say it has static number of arguments.

Variadic functions, as you may now suspect, are functions whcih can take varried number of arguments. In simple terms, they can take any number of arguments.

You may be asking, "what if I want to give it a million arguments? Do I have to type them all in the brackets after the function name?" Oh well, turns out you don't have to. A typical variadic function is declared as below:

int main(int a, int b, int c,...)

The elipsis (the three periods (...)) serves the same purpose it does in normal language grammar. Just make sure to include at least one argument in the function, then followed by elipsis and you have declared a variadic function.

Follow me as I do some projects on variadic functions!
