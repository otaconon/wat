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
