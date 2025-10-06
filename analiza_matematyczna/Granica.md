>[!definition]
Funkcja **$f$ zbliża się do granicy $g$ przy $a$**, oznacza że: $$\forall \varepsilon > 0, \ \exists\sigma>0$$ taka że jeśli $$\forall x, \ 0<|x-a|<\sigma$$ to wtedy $$ |f(x)-g|<\varepsilon $$

### Przykład 1
Wykaż że $\forall a, \ 0<a<1, \, \lim_{ x \to a }f(x) = 0$ dla
$$
f(x) = \begin{cases}
0, &x \text{ niewymierny, } 0 < x < 1 \\
\frac{1}{q}, &x=\frac{p}{q}, \ \text{przy czym} \ nwd(p, q) = 1, \ 0 < x < 1 \\
\end{cases}
$$

Niech $n \in \mathbb{N}$ będzie tak duże, że $\frac{1}{n}\leq\varepsilon$