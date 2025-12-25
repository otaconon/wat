## Funkcje pierwotne
### Definicja
Funkcję $F(x)$ nazywamy **funkcją pierwotną** funkcji $f(x)$ na przedziale $X = (a; b)$, jeśli 
$$
\forall x \in X: F'(x) = f(x)
$$
### Tw. o funkcjach pierwotnych
Jeśli $F(x)$ jest funkcją pierwotną $f(x)$ na przedziale $X$, to:
1. Funkcja $\phi(x) = F(x) + C$, gdzie $C$ oznacza dowolną stałą, jest także funkcją pierwotną funkcji $f(x)$ na przedziale $X$.
2. Każdą funkcję pierwotną $\phi(x)$ funkcji $f(x)$ na przedziale $X$, można przedstawić w postaci sumy $F(x) + C_{0}$, gdzie $C_{0}$ jest stosownie do $\phi(x)$ i $F(x)$ dobraną stałą.

## Całka nieoznaczona
### Definicja
**Całką nieoznaczoną** funkcji $f: X \mapsto R$ nazywamy zbiór wszystkich funkcji pierwotnych $f(x)$.
$$
\int f(x) dx = F(x) + C \iff F'(x) = f(x)
$$
### Reguły całkowania
1. $\int A \cdot f(x) dx = A \cdot \int f(x) dx$
2. $\int(f(x) \pm g(x)) dx = \int f(x) dx \pm \int g(x) dx$

### Całkowanie przez podstawienie
Jeżeli
1. Funkcja $f: I \mapsto R$ jest ciągła na przedziale $I$
2. Funkcja $\varphi: J \mapsto R$ ma ciągłą pochodną na przedziale $J$
to
$$
\int f(x) dx = \int f(\varphi(t)) \varphi'(x) dx = F(\varphi(t)) + C
$$

### Ważniejsze całki liczone przez podstawienie
$$
\begin{array}{l}
\int \frac{f'(x)}{f(x)} dx &=& \ln |f(x)| + C \\
\int \frac{f'(x)}{f^2(x)} dx &=& -\frac{1}{f(x)} + C \\
\int \frac{f'(x)}{\sqrt{f(x)}} dx &=& 2\sqrt{f(x)} + C
\end{array}
$$

### Całkowanie przez części
Jeżeli funkcje $f(x)$ i $g(x)$ mają na pewnym przedziale ciągłe pochodne $f'(x)$ i $g'(x)$, to
$$
\int f(x) \cdot g'(x) dx = f(x) \cdot g(x) - \int f'(x) \cdot g(x) dx
$$
Wzory:
$$
\begin{array}{l}
\int \sin ax dx &=& -\frac{1}{a} \cos ax + C \\
\int \cos ax dx &=& \frac{1}{a} \sin ax + C \\
\int e^{ax} dx &=& \frac{1}{a} e^{ax} + C
\end{array}
$$


### Całki nieoznaczone funkcji elementarnych
$$
\begin{array}{l}
\int 0 \ dx &=& C \\
\int 1 \ dx &=& x + C \\
\int x^n dx &=& \frac{x^{n+1}}{n+1} + C \\
\int \frac{1}{x} dx &=& \ln|x| + C \\
\int e^x dx &=& e^x + C \\
\int a^x dx &=& \frac{a^x}{\ln a} + C \\
\int \sin x dx &=& -\cos x + C \\
\int \cos x dx &=& \sin x + C \\
\int \frac{1}{\cos^2 x} dx &=& tg x + C \\
\int \frac{1}{\sin^2 x} dx &=& -ctg x + C \\
\int \frac{1}{1 + x^2} dx &=& arctg x + C \\
\int \frac{1}{\sqrt{1 - x^2}} &=& \arcsin x + C
\end{array}
$$
