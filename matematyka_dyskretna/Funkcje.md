## Funkcja
### Funkcja jako relacja
Relację $f \subset X \times Y$ nazywamy funkcją ze zbioru $X$ w zbiór $Y$, jeśli ma następujące własności:
1. $\forall x \in X: \forall y \in Y: \forall z \in Y ((x, y) \in f \wedge (x,z) \in f) \Rightarrow (y = z)$
2. $f_{L} = X$
Innymi słowy jeśli do elementu $x$ możemy dobrać elementy $y, z$ które są w relacji z $x$ to $y = z$. A więc do każdego elementu $x$ można dobrać co najwyżej jeden element będący z nim w relacji.

- Zbiór wszystkich funkcji ze zbioru $X$ w $Y$ oznaczamy $Y^X$
- $f: X \mapsto Y$

### Funkcja częściowa
Relację $f$ nazywam funkcją częściową, jeśli ma następującą własność:
$\forall x,y,z: ((x, y) \in f \wedge (x,z) \in f) \Rightarrow (y = z)$

## Obrazy i przeciw-obrazy

### Obraz
Każda funkcja $f: X \mapsto Y$ wyznacza pewną funkcję $\vec{f}: \mathcal{P}(X) \mapsto \mathcal{P}(Y)$ tak, że dla dowolnego zbioru $A \subset X$
$$
\vec{f}(A) = \left\{ y \in Y: \exists x \in A f(x) = y \right\} 
$$
### Przeciw-obraz
Każda funkcja $f: X \mapsto Y$ wyznacza pewną funkcję $\vec{f}^{-1}: \mathcal{P}(Y) \mapsto \mathcal{P}(X)$ w następujący sposób. Dla dowolnego zbioru $B \subset Y$
$$
\vec{f}^{-1}(B) = \left\{ x \in X: \exists y \in B: f(x) = y \right\} 
$$
Dla dowolnego zbioru $B \subset Y$ zbiór $\vec{f}^{-1}$ nazywamy przeciw-obrazem zbioru $B$ przez funkcję $f$.

## Iniekcja i suriekcja

### Iniekcja
Funkcję częściową $f$ nazywamy **iniekcją**, jeśli różnym elementom przyporządkowuje różne wartości. Formalnie:
$$
\forall y \in f_{P}: \forall x_{1} x_{2} \in f_{L} (f(x_{1}) = y \wedge f(x_{2}) = y) \Rightarrow x_{1} = x_{2}
$$
Powyższy warunek mówi, że jeśli elementom $x_{1}, x_{2}$ funkcja przypisuje tę samą wartość $y$, to te elementy muszą być równe.

### Suriekcja
Funkcję częściową $f$ nazywamy suriekcją na zbiór $Y$, jeśli $f_{P} = Y$.
$$
\forall y \in Y: \forall x \in f_{L}: f(x) = y
$$
### Bijekcja
Funkcję częściową $f$ nazywamy **bijekcją** ze zbioru $X$ w zbiór $Y$, jeśli są spełnione poniższe warunki:
1. $f: X \mapsto Y$
2. $f$ jest iniekcją
3. $f$ jest suriekcją na $Y$

Każda funkcja bijektywna pomiędzy zbiorem $X$ a $Y$ dobiera elementy tych zbiorów w pary.

## Twierdzenia
#### 1.
Funkcja $f$ jest bijekcją ze zbioru $X$ w zbiór $Y$ wtedy i tylko wtedy, gdy $f^{-1}$ jest bijekcją ze zbioru $Y$ w zbiór $X$.

#### 2.
Jeśli funkcje częściowe $f, g$ są iniekcjami, to ich złożenie jest iniekcją

#### 3.
Dla dowolnych funkcji $f: X \mapsto Y, g: Y \mapsto Z$, jeśli $f$ jest suriekcją na $Y$ i $g$ jest suriekcją na $Z$, to $g \circ f$ jest suriekcją na $Z$.

## Twierdzenie o faktoryzacji
Dla każdej funkcji $f: X \mapsto Y$ istnieje zbiór $Z$ oraz funkcje $g: X \mapsto Z,h: Z \mapsto Y$ takie, że $f = h \circ g$, $g$ jest suriekcją i $h$ jest iniekcją

## Produkt uogólniony

### Definicja
**Produktem uogólnionym** zbioru $X$ nazwiemy zbiór $\mathbb{P}X$ zdefiniowany następująco:
$$
\mathbb{P}X \equiv \left\{ f \in \mathcal{P}(X \times \bigcup X):(f: X \mapsto \bigcup X) \wedge \forall x \in X: f(x) \in x \right\} 
$$
### Twierdzenie
Dla dowolnych różnych zbiorów $A,B$ istnieje bijekcja pomiędzy zbiorami $\mathbb{P}(A,B)$ a zbiorem $A \times B$

## Twierdzenie Knastera-Tarskiego
### Definicja
Funkcję $f: \mathcal{P}(X) \mapsto \mathcal{P}(X)$ nazywamy monotoniczną ze względu na inkluzję, jeśli
$$
\forall x, y \subset X (x \subset y \Rightarrow f(x) \subset f(y))
$$
Funkcje monotoniczne ze względu na inkluzję zachowują relację inkluzji pomiędzy przekształcanymi zbiorami. Nie oznacza to jednak wcale, że argument funkcji musi być podzbiorem wartości funkcji na tym argumencie.

### Twierdzenie
Każda monotoniczna funkcja $f: \mathcal{P}(X) \mapsto \mathcal{P}(X)$ posiada najmniejszy i największy punkt stały

## Lemat Banacha
Dla dowolnych zbiorów $X,Y$ oraz funkcji $f: X \mapsto Y$ i $g: Y \mapsto X$ istnieją zbiory $A_{1}, A_{2} \subset X$ oraz $B_{1}, B_{2} \subset Y$ takie, że:
1. $\left\{ A_{1}, A_{2} \right\}$ jest podziałem zbioru $X$
2. $\left\{ B_{1}, B_{2} \right\}$ jest podziałem zbioru Y
3. $\vec{f}(A_{1}) = B_{1}$
4. $\vec{g}(B_{2}) = A_{2}$
