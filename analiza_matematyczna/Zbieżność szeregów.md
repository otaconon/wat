## Szeregi o wyrazach nieujemnych
### Kryterium porównawcze zbieżności szeregów
> [!theorem]
Jeżeli dla szeregu $\sum_{n=1}^{\infty} u_{n}$, gdzie $u_{n}\geq 0$, można wskazać taki szereg zbieżny $\sum_{n=1}^{\infty} v_{n}$, że począwszy od pewnego miejsca $N$ (tzn. dla każdego $n\geq N$), zachodzi nierówność $u_{n \leq v_{n}}$, to szereg $\sum_{n=1}^{\infty} u_{n}$ jest również zbieżny.

### Kryterium porównawcze rozbieżności szeregów
> [!theorem]
Jeżeli dla szeregu $\sum_{n=1}^{\infty} u_{n}$, można wskazać taki szereg rozbieżny $\sum_{n=1}^{\infty} v_{n}$, gdzie $v_{n} \geq 0$, że począwszy od pewnego miejsca $N$ (tzn. dla każdego $n\geq N$), zachodzi nierówność $u_{n \geq v_{n}}$, to szereg $\sum_{n=1}^{\infty} u_{n}$ jest również rozbieżny.

### Kryteria d'Alemberta zbieżności szeregów
> [!theorem] Z kryteriów d'Alamberta wynikają następujące wnioski:
> 1. Jeżeli $\lim_{ n \to \infty } \frac{u_{n+1}}{u_{n}} = r < 1$, to szereg $\sum_{n=1}^{\infty} u_{n}$ jest zbieżny.
> 2.  Jeżeli $\lim_{ n \to \infty } \frac{u_{n+1}}{u_{n}} = s > 1$, to szereg $\sum_{n=1}^{\infty} u_{n}$ jest rozbieżny.
>3.  Jeżeli $\lim_{ n \to \infty } \frac{u_{n+1}}{u_{n}} = 1$, to przypadek jest wątpliwy.

### Kryteria Cauchy'ego zbieżności szeregów
> [!theorem] Z kryteriów Cauchy'ego wynikają następujące wnioski:
> 1. Jeżeli $\lim_{ n \to \infty } \sqrt[n]{ u_{n} } = r < 1$, to szereg $\sum_{n=1}^{\infty} u_{n}$ jest zbieżny.
> 2.  Jeżeli $\lim_{ n \to \infty } \sqrt[n]{ u_{n} } = s > 1$, to szereg $\sum_{n=1}^{\infty} u_{n}$ jest rozbieżny.
>3.  Jeżeli $\lim_{ n \to \infty } \sqrt[n]{ u_{n} } = 1$, to przypadek jest wątpliwy.

## Szeregi przemienne
### Kryterium Leibniza zbieżności szeregów
>[!theorem]
Jeżeli $|u_{n+1}| <= |u_{n}| \ \wedge \ \lim_{ n \to \infty } u_{n = 0}$, to szereg $\sum_{n=1}^{\infty} u_{n}$ jest zbieżny.

### Kryterium bezwzględnej zbieżności szeregów
>[!theorem]
>Jeżeli szereg $\sum_{n=1}^{\infty}|u_{n}|$, którego wyrazy są równe wartościom bezwzględnym wyrazów szeregu $\sum_{n=1}^{\infty}$, jest zbieżny, to i szereg $\sum_{n=1}^{\infty} u_{n}$ jest zbieżny.


