### 1. Udowodnij że implikacja odwrotna występująca w prawie Peirce'a też jest tautologią rachunku zdań
$$
\text{prawo peirce'a: } ((p \Rightarrow q) \Rightarrow p) \Rightarrow p
$$

| $p$ | $q$ | $p \Rightarrow q$ | $(p \Rightarrow q) \Rightarrow p$ | $W$ |
| --- | --- | ----------------- | --------------------------------- | --- |
| 0   | 0   | 1                 | 0                                 | 1   |
| 0   | 1   | 1                 | 0                                 | 1   |
| 1   | 0   | 0                 | 1                                 | 1   |
| 1   | 1   | 1                 | 1                                 | 1   |

### 2. Udowodnij że zasada kontrapozycji jest tautologią
$$
\text{zasada kontrapozycji: } (p \Rightarrow q) \Leftrightarrow (\lnot q \Rightarrow \lnot p)
$$

| $p$ | $q$ | $p \Rightarrow q$ | $\lnot p$ | $\lnot q$ | $\lnot q \Rightarrow \lnot p$ | $w$ |
| --- | --- | ----------------- | --------- | --------- | ----------------------------- | --- |
| 0   | 0   | 1                 | 1         | 1         | 1                             | 1   |
| 0   | 1   | 1                 | 1         | 0         | 1                             | 1   |
| 1   | 0   | 0                 | 0         | 1         | 0                             | 1   |
| 1   | 1   | 1                 | 0         | 0         | 1                             | 1   |

### 3. Udowodnij że prawo dylematu konstrukcyjnego jest tautologią
$$
\text{prawo dylematu konstrukcyjnego: } (p \Rightarrow r) \wedge (q \Rightarrow r) \wedge (p \vee q) \Rightarrow r
$$

| $p$ | $q$ | $r$ | $p \Rightarrow r$ | $q \Rightarrow r$ | $(p \Rightarrow r) \wedge (q \Rightarrow r) = \alpha$ | $p \vee q$ | $\alpha \wedge (p \vee q)$ | $w$ |
| --- | --- | --- | ----------------- | ----------------- | ----------------------------------------------------- | ---------- | -------------------------- | --- |
| 0   | 0   | 0   | 1                 | 1                 | 1                                                     | 0          | 0                          | 1   |
| 0   | 0   | 1   | 1                 | 1                 | 1                                                     | 0          | 0                          | 1   |
| 0   | 1   | 0   | 1                 | 0                 | 0                                                     | 1          | 0                          | 1   |
| 0   | 1   | 1   | 1                 | 1                 | 1                                                     | 1          | 1                          | 1   |
| 1   | 0   | 0   | 0                 | 1                 | 0                                                     | 1          | 0                          | 1   |
| 1   | 0   | 1   | 1                 | 1                 | 1                                                     | 1          | 1                          | 1   |
| 1   | 1   | 0   | 0                 | 0                 | 0                                                     | 1          | 0                          | 1   |
| 1   | 1   | 1   | 1                 | 1                 | 1                                                     | 1          | 1                          | 1   |

### 4. Udowodnij, bez analizowania tabeli prawdy, że następująca formuła jest tautologią
$$
((a \Rightarrow b) \wedge (c \Rightarrow \lnot b) \wedge (\lnot a \Rightarrow d)) \Rightarrow (c \Rightarrow d) \equiv \alpha
$$


Gdy zadanie jest w takiej formie jak ta, to można udowodnić tautologię, pokazując że gdy następnik ma wartość T, to poprzednik ma wartość F, gdyż tylko wtedy cała implikacja ma wartość fałsz. 

$$
w(c \Rightarrow d) = 0 \Leftrightarrow w(c) = 1 \wedge w(d) = 0
$$
W takim razie 
$$
w(c \Rightarrow \lnot b) = 1 \Leftrightarrow w(b) = 0
$$

co z kolei oznacza że $w(a) = 0$, oraz $w(\lnot a \Rightarrow d) = 0$. A więc poprzednik jest zawsze fałszywy gdy następnik jest fałszywy, cnd.

### 5. Formułę $p \vee q \vee r \Rightarrow ((p \vee q) \wedge \lnot r) \vee r \wedge p \wedge q$ przedstaw w dysjunktywnej postaci normalnej

$$
\begin{array}{l}
p \vee q \vee r \Rightarrow (\lnot r \wedge p \vee \lnot r \wedge q) \vee r \wedge p \wedge q \equiv \\
\equiv (\lnot p \wedge \lnot q \wedge \lnot r) \vee (p \wedge q \wedge r) \vee (\lnot r \wedge p \vee \lnot r \wedge q) \equiv \\
\equiv (\lnot p \wedge \lnot q \wedge \lnot r) \vee (p \wedge q \wedge r) \vee (\lnot r \wedge p) \vee (\lnot r \wedge q) \equiv \\
\end{array}
$$

### 6. Formułę z zadania 5. w koniunktywnej postaci normalnej

$$
\begin{array}{l}
\lnot (p \vee q \vee r) \vee \lnot (\lnot p \vee \lnot q \vee \lnot r) \vee \lnot (r \vee \lnot p) \vee \lnot( r \vee \lnot q) \equiv \\
\equiv \lnot ((p \vee q \vee r) \wedge (\lnot p \vee \lnot q \vee \lnot r) \wedge (r \vee \lnot p) \wedge ( r \vee \lnot q)) \equiv \\
\end{array}
$$

### 7. Na podstawie formuły w postaci uzyskanej w zadaniu 5. podaj zbiór literałów dla których formuła przyjmuje wartość fałsz

Każda z formuł koniunkcji musi mieć wartość fałszywą więc mamy odp:

$$
\left\{ p=1, r=1,q=0 \right\}  , \ \left\{ p=0, r=1, q=1 \right\}, \ \left\{ p=0,q=0,r=1 \right\} 
$$

### 8. Podaj które ze spójników $\wedge, \vee, \Rightarrow, \Leftrightarrow$ są rozdzielne lewostronnie wobec względem których.

$\vee$ wobec $\vee,\wedge, \Rightarrow, \Leftrightarrow$
$\Rightarrow$ wobec $\wedge, \vee,\Rightarrow, \Leftrightarrow$
$\wedge$ wobec $\vee, \wedge$ 

### 9. Odpowiedz na poniższe pytania

$$
\begin{array}{l}
p := \text{komputer ma procesor} \\
q := \text{może wykonać program} \\
r := \text{wystąpiła przerwa w zasilaniu} \\
s := \text{uruchomiono zasilanie awaryjne} \\
 \\
((p \Rightarrow q) \wedge (r \Rightarrow \lnot q) \wedge (p \Rightarrow s)) \Rightarrow(r \Rightarrow s) \\
 \\
\text{Dla następujących wartości literałow z prawdy wynika fałsz: } p=0, q=0, r=1, s=0 \\
\text{Więc rozumowanie jest nie poprawne}
\end{array}
$$

### 10.  Czy gdyby zamienić zdanie c) to by rozumowanie było poprawne

$$
\begin{array}{l}
((p \Rightarrow q) \wedge (r \Rightarrow \lnot q) \wedge (\lnot p \Rightarrow s)) \Rightarrow(r \Rightarrow s)   \\
\text{Chcąc uzyskać fałsz cały poprzednik implikacji musi być prawdziwy a następnik fałszywy} \\
(r \Rightarrow s) = F \implies r = T \wedge s = F \\
(r \Rightarrow \lnot q) = T \implies q = F \\
(p \Rightarrow q) = T \implies p = F  \\
(\lnot p \Rightarrow s) = T \implies s = T  \\
\text{Otrzymaliśmy sprzeczność więc rozumowanie jest poprawne}
\end{array}
$$

### 11. Przedstaw spójniki $\lnot, \wedge, \vee, \Rightarrow, \oplus$ za pomocą $|$

$$
\begin{array}{l}
\lnot p \equiv p | 1  \\
p \wedge q \equiv \lnot (p | q) \equiv 1 | (p | q) \\
p \vee q \equiv \lnot (\lnot p \wedge \lnot q) \equiv (p | p) | (q | q) \\
p \Rightarrow q \equiv \lnot p \vee q \equiv ((p | p) | (p | p)) | (q | q) \equiv p | (q|q) \\
p \oplus q \equiv \lnot p \wedge q \equiv (\lnot p | q) | (\lnot p | q) \equiv ((p|p)|q)|((p|p)|q)
\end{array}
$$

### 13. Pokaż dla każdej formuły innym sposobem że jest tautologią

a) $(p \Rightarrow q) \Leftrightarrow (\lnot p \vee q)$


| $p$ | $q$ | $p \Rightarrow q$ | $\lnot p$ | $\lnot p \vee q$ | $W$ |
| --- | --- | ----------------- | --------- | ---------------- | --- |
| 0   | 0   | 1                 | 1         | 1                | 1   |
| 0   | 1   | 1                 | 1         | 1                | 1   |
| 1   | 0   | 0                 | 0         | 0                | 0   |
| 1   | 1   | 1                 | 0         | 1                | 1   |

b) $(p \Rightarrow (q \Rightarrow r)) \Leftrightarrow ((p \wedge q) \Rightarrow r)$

$$
\begin{array}{l}
L \equiv p \Rightarrow (q \Rightarrow r) \equiv p \Rightarrow (\lnot q \vee r) \equiv \lnot p \vee \lnot q \vee r \\
P \equiv ((p \wedge q) \Rightarrow r) \equiv \lnot p \vee \lnot q \vee r \\
L = P
\end{array}
$$

c) $((p \Rightarrow q) \wedge (q \Rightarrow r)) \Rightarrow (p \Rightarrow r) = \varphi$ 

$$
\begin{array}{l}
\varphi = F  \Longleftrightarrow (p \Rightarrow r) = F \wedge ((p \Rightarrow q) \wedge (q \Rightarrow r)) = T \\
(p \Rightarrow r) = F \implies r = F \wedge p = T \\
(q \Rightarrow r) = T \implies q = F \\
(p \Rightarrow q) = T \implies p = F \\
\text{Otrzymaliśmy sprzeczność ponieważ p miało być prawdziwe} \\
\text{Więc } \varphi \text{ jest zawsze prawdziwa}
\end{array}
$$

### 14.