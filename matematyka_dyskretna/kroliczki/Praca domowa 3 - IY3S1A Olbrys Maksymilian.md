## 1.
Wyznacz złożenie relacji $R = \{\left< a, b \right> \in X \times X: a < b\}$ $X = \left\{ 0, 1, 2, 3, 4 \right\}$. Wyznacz dziedzinę i przeciw dziedzinę.

### Relacja
Na początek sprawdźmy czy takie złożenie istnieje. Ponieważ $R \subseteq X \times X$ to $R \circ R \subseteq X \times X$. A więc złożenie istnieje.

$$
\begin{array}{l}
R \circ R &= \left\{ \left< a, c \right>: \exists b \in X: \left< a, b \right> \in R \wedge \left< b, c \right> \in R    \right\} = \\
&= \left\{ \left< a, c \right> \in X \times X: \exists b \in X: a < b \wedge b < c    \right\}
\end{array}
$$

### Elementy Relacji
Podstawiając kolejne elementy zbioru $X$, otrzymujemy:
$$
R \circ R = \left\{ \left< 0, 2 \right>, \left< 0, 3 \right>, \left< 0, 4 \right>, \left< 1, 3 \right>, \left< 1, 4 \right>, \left< 2, 4 \right>  \right\} 
$$

### Dziedzina
$$
D(R \circ R) = \{0, 1, 2\}
$$
### Przeciwdziedzina
$$
D^{-1}(R \circ R) = \left\{ 2, 3, 4 \right\} 
$$

## 2. (5 / 77)

$$
A \setminus (B \cap C) = A \cap \overline{(B \cap C)} = A \cap (\overline B \cup \overline C) = 
(A \cap \overline B) \cup (A \cap \overline C) = (A \setminus B) \cap (A \setminus C)
$$
![[Pasted image 20251124191951.png]]

![[Pasted image 20251124192348.png]]