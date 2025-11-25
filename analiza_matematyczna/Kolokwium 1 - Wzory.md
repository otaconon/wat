## Granica ciągu

### Wzory na sumę ciągu

$$
\begin{align}
&\sum_{k=1}^{n} a_{k} = \frac{a_{1} + a_{n}}{2} \cdot n &(\text{ciag arytmetyczny}) \\ \\
&\sum_{k=1}^{n} a_{k} = a_{1} \cdot \frac{1-q^n}{1 - q} &(\text{ciag geometryczny})
\end{align}
$$

### Iloraz wielomianów

$$
\begin{array}{l}
(1.1) &\lim_{n \to \infty} \frac{\mathcal{P}_{n}(\mathbf{R})}{\mathcal{P}_{n+k}(\mathbf{R})} = \begin{cases}
0,\ \text{if } k > 0 \\
c,\ \text{if } k = 0 \\
\infty,\ \text{if } k < 0
\end{cases} \\
\end{array}
$$
### Definicja liczby e
$$
\begin{array}{l}
(1.2) &\lim_{n \to \infty} \left( 1 + \frac{1}{a_{n}} \right)^{a_{n}} = e \\
\end{array}
$$
### Twierdzenie o trzech ciągach

$(1.3)$ Jeżeli $a_{n} \leq u_{n} \leq b_{n}$, oraz $\lim_{n \to \infty} a_{n} = \lim_{n \to \infty} b_{n} = g$, to $\lim_{n \to \infty} u_{n} = g$

## Szeregi

### Szereg geometryczny

$$
\begin{array}{l}
\sum_{n = 1}^{\infty} aq^{n-1} = \frac{a}{1-q} &(|q| \leq 1)
\end{array}
$$

### Harmoniczny

Szereg $\sum_{n = 1}^{\infty} \frac{1}{n^{\alpha}}$, jest zbieżny dla $\alpha > 0$ wtedy i tylko wtedy gdy $\alpha > 1$

### Kryterium konieczne zbieżności szeregu

$(2.1)$ $\lim_{n \to \infty} u_{n} = 0$

### Szeregi o wyrazach nieujemnych

#### Kryterium porównawcze zbieżności szeregów

$(2.2)$ Jeżeli dla szeregu $\sum_{n=1}^{\infty} u_{n}$, gdzie $u_{n}\geq 0$, można wskazać taki szereg zbieżny $\sum_{n=1}^{\infty} v_{n}$, że począwszy od pewnego miejsca $N$ (tzn. dla każdego $n\geq N$), zachodzi nierówność $u_{n} \leq v_{n}$, to szereg $\sum_{n=1}^{\infty} u_{n}$ jest również zbieżny.

#### Kryterium porównawcze rozbieżności szeregów

$(2.3)$ Jeżeli dla szeregu $\sum_{n=1}^{\infty} u_{n}$, można wskazać taki szereg rozbieżny $\sum_{n=1}^{\infty} v_{n}$, gdzie $v_{n} \geq 0$, że począwszy od pewnego miejsca $N$ (tzn. dla każdego $n\geq N$), zachodzi nierówność $u_{n \geq v_{n}}$, to szereg $\sum_{n=1}^{\infty} u_{n}$ jest również rozbieżny.

#### Kryteria d'Alemberta zbieżności szeregów

$(2.4)$ Z kryteriów d'Alamberta wynikają następujące wnioski:
 1.  Jeżeli $\lim_{ n \to \infty } \frac{u_{n+1}}{u_{n}} = r < 1$, to szereg $\sum_{n=1}^{\infty} u_{n}$ jest zbieżny.
 2.  Jeżeli $\lim_{ n \to \infty } \frac{u_{n+1}}{u_{n}} = s > 1$, to szereg $\sum_{n=1}^{\infty} u_{n}$ jest rozbieżny.
 3.  Jeżeli $\lim_{ n \to \infty } \frac{u_{n+1}}{u_{n}} = 1$, to przypadek jest wątpliwy.
#### Kryteria Cauchy'ego zbieżności szeregów

$(2.5)$ Z kryteriów Cauchy'ego wynikają następujące wnioski:
1.  Jeżeli $\lim_{ n \to \infty } \sqrt[n]{ u_{n} } = r < 1$, to szereg $\sum_{n=1}^{\infty} u_{n}$ jest zbieżny.
2.  Jeżeli $\lim_{ n \to \infty } \sqrt[n]{ u_{n} } = s > 1$, to szereg $\sum_{n=1}^{\infty} u_{n}$ jest rozbieżny.
3.  Jeżeli $\lim_{ n \to \infty } \sqrt[n]{ u_{n} } = 1$, to przypadek jest wątpliwy.

### Szeregi przemienne
#### Kryterium Leibniza zbieżności szeregów

$(2.6)$ Jeżeli $|u_{n+1}| \leq |u_{n}| \ \wedge \ \lim_{ n \to \infty } u_{n}=0$, to szereg $\sum_{n=1}^{\infty} u_{n}$ jest zbieżny.

#### Kryterium bezwzględnej zbieżności szeregów

$(2.7)$ Jeżeli szereg $\sum_{n=1}^{\infty}|u_{n}|$, którego wyrazy są równe wartościom bezwzględnym wyrazów szeregu $\sum_{n=1}^{\infty}u_{n}$, jest zbieżny, to i szereg $\sum_{n=1}^{\infty} u_{n}$ jest zbieżny.

### Nierówności i równości trygonometryczne

Założenie: $x \in \left( 0, \frac{\pi}{2} \right)$

$$
\begin{array}{l}
(3.1) &\sin x < x < \tan x \\
(3.2) &\lim_{x \to 0} \frac{\sin x}{x} = 1 \\
(3.3) &\lim_{x \to 0} \frac{\tan x}{x} = 1
\end{array}
$$