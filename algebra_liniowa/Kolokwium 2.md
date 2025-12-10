## Macierze
1. $A + B = B + A$
2. (A + B) + C = A + (B + C) oraz $(AB)C = A(BC)$
3. $(B+C)A = BA + CA$ oraz $A(B+C) = AB + AC$
4. $\alpha (AB) = (\alpha A) B = A (\alpha B)$ dla $\alpha \in \mathbb{R}$
5. $\alpha (A + B) = \alpha A + \alpha B$ dla $\alpha \in \mathbb{R}$
6. $AI = IA = A$
7. $(A+B)^T = A^T + B^T$
8. $(AB)^T = B^T A^T$
9. $(A^T)^T = A$

## Macierz odwrotna
$$
A^{-1} = \frac{1}{\det A} \cdot \begin{bmatrix}
D_{11} & D_{12} & \dots & D_{1m} \\
D_{21} & D_{22} & \dots & D_{2m} \\
\vdots & & \ddots & \\
D_{n1} & D_{n2} & \dots & D_{nm}
\end{bmatrix}
$$

1. $(A^{-1})^{-1} = A$
2. $(A^T)^{-1} = (A^{-1})^T$
3. $(\alpha A)^{-1} = \frac{1}{\alpha} A^{-1}$
4. $(AB)^{-1} = B^{-1}A^{-1}$

## Wyznacznik
1. Jeśli macierz $B$  powstała z macierzy $A$ przez przestawienie dwóch kolumn lub wierszy to $\det B = - \det A$
2. Jeśli dwie kolumny lub wiersze macierzy są równe, to wyznacznik tej macierzy jest $0$
3. $\det A = \det A^T$
4. $\det (AB) = \det A \cdot \det B$
5. $\det (\alpha \cdot A) = \alpha^n \cdot \det A$, $\alpha \in \mathbb{R}$, $n$ - stopień macierzy $A$
6. $\det A^{-1} = \frac{1}{\det A}$

## Układy równań liniowych

Układ równań liniowych nazywamy:
- **układem oznaczonym**, gdy ma dokładnie jedno rozwiązanie
- **układem nieoznaczonym**, gdy ma nieskończenie wiele rozwiązań
- **układem sprzecznym**, gdy nie ma rozwiązań

### Metoda Cramera
Metodę Cramera można stosować do układów które mają tyle samo równań co niewiadomych ($n = m$)

Układ równań ma jedno rozwiązanie, gdy
$$
x_{i} = \frac{W_{i}}{W} \ (i = 1,2,\dots,n)
$$
gdzie $W$ jest wyznacznikiem macierzy współczynników, a $W_{i}$, wyznacznikiem macierzy powstałej, przez zastąpienie $i$-tej kolumny kolumną wyrazów wolnych.

### Rząd macierzy

**Rzędem macierzy** $A$ nazywamy maksymalny stopień niezerowych minorów tej macierzy.
$\text{rz} A = \text{rz} A^T$

### Przekształcenia elementarne
1. przestawienie dwóch kolumn lub wierszy
2. pomnożenie dowolnej kolumny lub wiersza przez różną od zera liczbę rzeczywistą
3. dodanie do dowolnej kolumny lub wiersza innej kolumny lub wiersza pomnożonej przez liczbę rzeczywistą
4. skreślenie jednej z dwóch identycznych kolumn lub wierszy
5. skreślenie kolumny lub wiersza złożonej z samych zer

### Twierdzenie Kroneckera-Capellego
Układ równań liniowych o $n$ niewiadomych i $m$ równaniach ma rozwiązanie wtedy i tylko wtedy, gdy $\text{rz} A = \text{rz} \bar{A}$, przy czym jeżeli:
- $\text{rz} A = \text{rz} \bar{A} = n$, to układ jest oznaczony
- $\text{rz} A = \text{rz} \bar{A} < n$, to układ jest nieoznaczony
- $\text{rz} A \neq \text{rz} \bar{A}$ to układ jest sprzeczny