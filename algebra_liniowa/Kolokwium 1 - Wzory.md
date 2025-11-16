## Grupy
### Definicje

#### Grupa

Zbiór $G$, w którym określone jest działanie $\circ$, nazywamy **grupą**, jeśli spełnione są warunki:
1) działanie $\circ$ jest **łączne**
2) istnieje **element neutralny**
3) dla każdego elementu, istnieje element do niego **odwrotny**

#### Działanie

**Działaniem** w zbiorze niepustym $A$ nazywamy każde odwzorowanie $f$ iloczyn kartezjańskiego $A \times A$ w zbiór $A$: $$
f: A \times A \rightarrow A$$

Działanie $\circ$ określone w zbiorze $A$ nazywamy:
1) **przemiennym**, jeśli  $$
\forall a,b \in A; \ (a \circ b = b \circ a)
$$
2) **łącznym**, jeśli $$
\forall a,b \in A; \ [(a \circ b) \circ c = a \circ (b \circ c)]
$$
3) **rozdzielnym**, jeśli:
$$
\forall a,b,c \in A: a \otimes (b + c) = (a \otimes b) \oplus (a \otimes c)
$$
#### Element neutralny

Element $e \in A$ nazywamy **elementem neutralnym** jeśli: $$
\exists e \in G \ \forall a \in G, (e \circ a = a \circ e = a)$$

#### Element odwrotny

Element $a^{-1}$ nazywamy **elementem odwrotnym** jeśli: $$
\forall a \in G \ \exists a^{-1} \in G ,\ (a \circ a^{-1} = a^{-1} \circ a = e)$$
gdzie $e$ jest elementem neutralnym

<div style="page-break-after: always;"></div>


#### Rodzaje grup

**grupa addytywna** - zbiór z działaniem dodawania
**grupa multiplikatywna** - zbiór $Q - \left\{ 0 \right\},\ R - \left\{ 0 \right\}$ z działaniem mnożenia

#### Modulo

Zbiór $\mathbb{Z}_{n}$ jest grupą wtedy i tylko wtedy, gdy $n$ jest liczba pierwszą

## Liczby zespolone

### Podstawowe wzory

$$
\begin{array}{l}
z &= a + bi \\
z &= \cos \varphi + i \sin \varphi  \\
\bar{z} &= a - bi  \\
\text{Re}(z) &= a  \\
\text{Im}(z) &= b \\
|z| &= \sqrt{a^2 + b^2}  \\
\sqrt[n]{z} &= \sqrt[n]{|z|} \left( \cos\left( \frac{\varphi + 2k\pi}{n} \right) + i \sin\left( \frac{\varphi + 2k\pi}{n} \right) \right) \ \text{dla } k = 0,1,\dots,n-1 \\
z^n &= |z|^n (\cos n \varphi  + i \sin n \varphi)  \\
|z_{1} \cdot z_{2}| &= |z_{1}| \cdot |z_{2}| \\
\text{arg}(z_{1} \cdot z_{2}) &= \text{arg}(z_{1}) + \text{arg}(z_{2}) \\
\text{arg}\left( \frac{z_{1}}{z_{2}} \right) &= \text{arg}(z_{1}) - \text{arg}(z_{2}) \\
e^{i \varphi} &= \cos(\varphi) + i \sin(\varphi)
\end{array}
$$

### Schemat rozwiązywania równań kwadratowych

Zaczynamy od policzenia $\Delta$:
$$
\Delta = b^2 - 4ac
$$
Niech $w = a + bi$,  $z = x + yi$ oraz $w^2 = z$, wtedy otrzymujemy następujący układ równań:

$$
\begin{equation}
\begin{cases}
a^2 - b^2 &= x \\
2ab &= y \\
a^2 + b^2 &= \sqrt{x^2 + y^2}
\end{cases}
\end{equation}
$$
Korzystając z powyższego układu równań znajdujemy $\sqrt{\Delta}$ i podstawiamy pod $x_{1}, x_{2}$:
$$
x_{12} = \frac{-b \pm \sqrt{\Delta}}{2a}
$$
### Schemat rozwiazywania równań n-tego stopnia

Naszym celem będzie rozłożenie równania na wielomiany pierwszego i drugiego stopnia np. przy pomocy schematu Hornera. Warto przy tym pamiętać że jeżeli $z$ jest pierwiastkiem wielomianu o współczynnikach rzeczywistych to $\bar{z}$, również nim jest.

## Trygonometria (raczej nie potrzebne)

$$
\begin{array}{l}
\sin(2x) &= 2\sin(x)\cos(x) \\
\cos(2x) &= \cos^2(x) - \sin^2(x) \\
\sin(a \pm b) &= \sin(a)\cos(b) \pm \cos(a)\sin(b) \\
\cos(a \pm b) &= \cos(a)\cos(b) \mp \sin(a)\sin(b) \\
\end{array}
$$

## Pierścienie (raczej nie potrzebne)

### Definicja

Niepusty zbiór $P$, w którym określone są dwa działania $\oplus$ i $\otimes$, nazywamy **pierścieniem**, jeśli spełnione są warunki:
1) $P$ jest grupa abelowa względem działania $\oplus$
2) Działanie $\otimes$ jest rozdzielne względem $\oplus$
3) Działanie $\otimes$ jest łączne

Jeśli w pierścieniu istnieje element neutralny mnożenia, to element taki nazywamy **jednościa** pierścienia.

Element $a \in P$ różny od elementu neutralnego $\oplus$ nazywamy **lewym dzielnikiem zera**, gdy istnieje element $b \in P$ różny od elementu neutralnego $\oplus$ taki, że $a \otimes b = \theta(b \otimes a = \theta)$, gdzie $\theta$ oznacza element neutralny grupy addytywnej z działaniem $\oplus$.

Element pierścienia $P$ nazywamy **dzielnikiem zera**, gdy jest on lewym lub prawym dzielnikiem zera. Pierścień $P$ nazywamy pierścieniem **bez dzielników zera**, gdy żaden jego element nie jest dzielnikiem zera.

Pierścień przemienny z jednością bez dzielników zera, nazywamy **pierścieniem całkowitym**

## Ciało (raczej nie potrzebne)

### Definicja

Pierścień $K$ nazywamy **ciałem**, jeśli spełnia następujące warunki:
1) $K$ zawiera więcej niż jeden element
2) $K - \left\{ 0 \right\}$ jest grupą względem mnożenia w $K$

Jednością grupy $K - \left\{ 0 \right\}$  względem mnożenia nazywamy jednością ciała $K$, oznaczamy ją przez $e$.

Pierścień $K$ z jednością, nazywamy ciałem wtedy i tylko wtedy, gdy $\forall a \neq 0 \ \exists a^{-1}: a\cdot a^{-1} = e$
