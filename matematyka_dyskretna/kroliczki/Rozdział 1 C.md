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
