>[!definition]
Funkcja **$f$ zbliża się do granicy $g$ przy $a$**, oznacza że: $$\forall \varepsilon > 0, \ \exists\delta>0$$ taka że jeśli $$\forall x, \ 0<|x-a|<\delta$$ to wtedy $$ |f(x)-g|<\varepsilon $$

### Przykład 1
Wykaż że $\forall a, \ 0<a<1, \, \lim_{ x \to a }f(x) = 0$ dla
$$
f(x) = \begin{cases}
0, &x \text{ niewymierny, } 0 < x < 1 \\
\frac{1}{q}, &x=\frac{p}{q}, \ \text{przy czym} \ nwd(p, q) = 1, \ 0 < x < 1 \\
\end{cases}
$$

Niech $n \in \mathbb{N}$ będzie tak duże, że $\frac{1}{n}\leq\varepsilon$, wtedy jedyne liczby $x$ dla których $|f(x)-0|<\varepsilon$ może być nie prawdziwe to:
$$
\frac{1}{2}; \frac{1}{3}, \frac{2}{3};\dots; \frac{1}{n}, \dots, \frac{n-1}{n}
$$
Ponieważ ilość takich liczb jest skończona, to wiemy że istnieje taka liczba najbardziej zbliżona do $a$. (Jeżeli $a$ jest taką liczbą to rozważmy tylko $\frac{p}{q} \neq a$) Możemy oznaczyć tą liczbę jako $\delta$.
Ponieważ $$0<|x-a|<\delta \Longrightarrow x \not\in \left\{ \frac{1}{2}, \dots, \frac{n-1}{n}\right\}$$
a więc
$$
|f(x)-0|<\varepsilon
$$
jest prawdziwe, co kończy dowód.

### Twierdzenia
>[!theorem]
Funkcja nie może dążyć do dwóch granic jednocześnie przy $a$. Innymi słowy, $$
\lim_{ x \to a }f(x) = g \vee \lim_{ x \to a }f(x)=l \Longrightarrow g = l
$$

#### Dowód
$$\lim_{ x \to a }f(x) = g \Longrightarrow \forall\varepsilon>0 ,\ \exists\delta_{1}>0$$
taka że
$$
\forall x ,\ 0<|x-a|<\delta_{1} \Longrightarrow |f(x)-g|<\varepsilon
$$
analogicznie
$$\lim_{ x \to a }f(x) = l \Longrightarrow \forall\varepsilon>0 ,\ \exists\delta_{2}>0$$
taka że
$$
\forall x ,\ 0<|x-a|<\delta_{2} \Longrightarrow |f(x)-l|<\varepsilon
$$
możemy teraz wywnioskować że
$$
\forall\varepsilon>0 ,\ \exists \delta>0
$$
taka że
$$
\forall x ,\ 0<|x-a|<\delta \Longrightarrow |f(x)-g|<\varepsilon \ \wedge \ |f(x)-l|<\varepsilon
$$
wystarczy obrać $\delta=\text{min}(\delta_{1}, \delta_{2})$

Teraz żeby dokończyć dowód musimy znaleźć taki $\varepsilon$ dla którego otrzymamy sprzeczność w przypadku gdy $g\neq l$.
Niech $\varepsilon = \frac{|g-l|}{2}$, wtedy istnieje taka $\delta>0$, że
$$
\forall x ,\ 0<|x-a|<\delta \Longrightarrow |f(x)-g| < \frac{|g-l|}{2} \ \wedge \ |f(x)-l|< \frac{|g-l|}{2}
$$
to oznacza że
$$
|g-l|=|g-f(x)+f(x)-l| \leq |g-f(x)| + |f(x)-l| < \frac{|g-l|}{2} + \frac{|g-l|}{2} = |g-l|
$$
otrzymaliśmy sprzeczność. $\blacksquare$
