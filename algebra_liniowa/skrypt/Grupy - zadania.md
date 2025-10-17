## Zadanie 1. Zbadać, czy zbiór $X$ z działaniem $*$ jest grupą. Czy jest to grupa abelowa?

### 1) $X = Z, a * b = a + b + 1$
1. Sprawdźmy czy działanie jest wewnętrzne

$$
\begin{array}{l}
\forall a, b \in Z: a + b + 1 \in Z \\
\text{Ponieważ } X = Z \text{ to działanie jest wewnętrzne}
\end{array}
$$

1. Sprawdźmy czy działanie $*$ jest łączne

$$
\begin{array}{l}
(a * b) * c = (a + b + 1) * c = a + b + 1 + c + 1 = a + b + c + 2 \\
a * (b * c) = a * (b + c + 1) = a + b + c + 1 + 1 = a + b + c + 2 \\
(a * b) * c = a * (b * c), \text{ a więc działanie jest łączne}
\end{array}
$$

3. Sprawdźmy czy istnieje element neutralny $e$

$$
\begin{array}{l}
a * (-1) = a + (-1) + 1 = a \\
\forall a \in X: a * (-1) = (-1) * a = a, \text{ to oznacza że istinieje elemnt neutralny } e = -1
\end{array}
$$

4. Sprawdźmy czy dla każdego elementu $a$ odwrotny $a^{-1}$

$$
\begin{array}{l}
a * (-a) = a + (-a - 2) + 1 = -1 = e \\
\forall a \in X: a * (-a -2) = (-a - 2) * a = e \implies -a-2 = a^{-1}
\end{array}
$$

Zbiór $X$ jest więc grupą

5. Sprawdźmy czy $X$ jest grupą abelową, czyli czy $*$ jest działaniem przemiennym

$$
\begin{array}{l}
a * b = a + b + 1 \\
b * a = b + a + 1 \\
a * b = b * a, \ * \text{ jest przemienne }
\end{array}
$$

Zbiór $X$ jest więc grupą abelową

### 2) $X = (1, +\infty), a * b = ab - a- b + 2$

Aby zbiór $X$ był grupą należy wykazać:
1. Wewnętrzność działania $*$
2. Łączność działania $*$
3. Istnienie elementu neutralnego $e$
4. $\forall a \in X, \exists a^{-1} \in X: a * a^{-1} = e$

Po kolei to:
1. $\forall a, b \in X: a * b \in X$
$$
\begin{array}{l}
ab - a - b + 2 = ab - a - b + 1 + 1 = (a - 1)(b - 1) + 1 \\
\text{teraz mamy } (a-1 > 0) \wedge (b - 1 > 0) \implies (a-1)(b-1) > 0 \\
\text{a więc } (a-1)(b-1) + 1 > 1 \\
\text{czyli } \forall a, b \in X: a*b > 1 \ \blacksquare
\end{array}
$$

2. $(a * b) * c = a * (b * c)$

$$
\begin{array}{l}
L = (a * b) * c = (ab - a - b + 2) * c =  \\
= (ab - a - b + 2)c - (ab - a - b + 2) - c + 2 = \\
= abc - ac -bc + 2c - ab + a + b - c - 2 + 2 = \\
= abc - ac - ab - bc + a + b + c \\
 \\
P = a * (b * c) = a * (bc - b - c + 2) =  \\
= a(bc - b - c + 2) - a - (bc - b - c + 2) + 2 = \\
= abc - ab - ac + 2a - a - bc + b + c - 2 + 2 =  \\
= abc - ab - ac - bc + a + b + c \\
 \\
L = P \ \blacksquare
\end{array}
$$

3. $\exists e \in X, \forall a \in X: a * e = a$

$$
\begin{array}{l}
a * e = a \\
ae - a - e + 2 = a \\
ae - e + 2 = 2a \\
e(a - 1) = 2(a - 1) \\
e(a-1) - 2(a-1) = 0 \\
(a-1)(e - 2) = 0 \\
\forall a \in X: a * 2 = 2 * a = a \\
e = 2 \ \blacksquare
\end{array}
$$

4. $\forall a \in X, \exists a^{-1} \in X: a * a^{-1} = e$

$$
\begin{array}{l}
a * a^{-1} = e \\
aa^{-1} - a - a^{-1} + 2 = 2 \\
a^{-1}(a - 1) - a = 0 ,\ a \in X \implies a \neq 1 \\
a^{-1} = \frac{a}{a-1} \ \blacksquare
 \\

\end{array}
$$

Zbiór $X$ jest więc grupą

5. $X$ jest grupą abelową wtedy i tylko wtedy gdy $a * b = b * a$

$$
\begin{array}{l}
L = ab - a - b + 2 \\
P = ba - b- a + 2 = ab - a - b + 2 \\
L = P \ \blacksquare
\end{array}
$$

Grupa $X$ jest więc grupą abelową