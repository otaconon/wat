## Proste definicje
- _zdanie_ to wyrażenie o wartości prawda (P) lub fałsz (F), tylko zdania twierdzące
- _wartość logiczna_ to P lub F przypisana zdaniu
- _zmienna zdaniowa_ to symbol oznaczający całe zdanie, P lub F po podstawieniu wartości logicznej
- _funktor zdaniotwórczy_ to operacja budująca zdania ($\wedge, \vee, \lnot$)
- Spójniki jedno- i dwuargumentowe:
	- unarne: $\lnot$
	- binarne: $\wedge, \vee, \Rightarrow, \Leftrightarrow, \oplus$
## Formuła logiki zdań
>[!definition]
Niech $\text{Var} = \{p_{1}, p_{2},\dots\}$ - przeliczalny zbiór zmiennych
Alfabet $\sum = \text{Var} \cup \left\{ \lnot, \vee, \wedge, \Rightarrow, \Leftrightarrow, (,) \right\}$
Zbiór formuł $\text{Form} \subseteq \sum \}$ to najmniejszy taki zbiór, że:
>1. $\text{Var} \subseteq \text{Form}$
>2. $\varphi \in \text{Form} \Rightarrow (\lnot \varphi) \in \text{Form}$
>3. $\varphi, \psi \in \text{Form} \wedge \circ \in \left\{ \wedge, \vee, \Rightarrow, \Leftrightarrow \right\} \Rightarrow \left( \varphi \circ \phi \right) \in \text{Form}$

### Definicja w formie CFG
$\text{Form} \rightarrow$ $\text{Var}$ $| \ \lnot \text{Form}$ $\text{| ( Form Bin Form )}$
$\text{Bin} \rightarrow \vee \ |\ \wedge \ |\ \Rightarrow \ |\ \Leftrightarrow$
$Var \rightarrow \text{ID} \ | \ P \ | \ F$

## Postać normalna formuły - DNF i CNF
- _DNF_ (disjunctive normal form) - alternatywa koniunkcji literałów
- _CNF_ (conjunctive normal form) - koniunkcja alternatyw literałów

### Algorytm zamiany do postaci normalnej
1. usuń $\Leftrightarrow$ i $\Rightarrow$:
	- $p \Leftrightarrow q \equiv \left( p \Rightarrow q \right) \wedge \left( q \Rightarrow p \right)$
	- $p \Rightarrow q \equiv \lnot p \vee q$
2. _NNF_ (negation normal form): wsuń negacje do literałów
3. rozdzielaj $\vee, \wedge$ tak aby uzyskać pożądaną formę
## Równoważność formuł
>[!definition]
Jeśli $\varphi, \psi \in \text{Form}$, to $\varphi \equiv \psi \Leftrightarrow \forall w \in W: w(\phi) = w(\psi)$

## Specjalne formuły
- _tautologia_ - formuła zawsze prawdziwa
- _sprzeczność_ - formuła zawsze fałszywa
- _spełnialna_ - prawdziwa dla jakiegoś wartościowania
## Zbiór spójników funkcjonalnie pełny
>[!definition]
>Zbiór spójników jest funkcjonalnie pełny, gdy można przy jego użyciu zdefiniować dowolną funkcję prawdziwościową

## Przemienność, łączność i rozdzielność
- przemienność: $\wedge, \vee, \Leftrightarrow$
- łączność $\wedge, \vee, \Leftrightarrow$
- rozdzielność lewo i prawo stronna: $\wedge, \vee$

## Kolejność wykonywania spójników
- kolejność: $\lnot, \wedge, \vee, \Rightarrow, \Leftrightarrow$
- łączność: $\Rightarrow$ łączny prawostronnie

## Najważniejsze twierdzenia
>[!theorem] Zamiana implikacji alternatywą
>$p \Rightarrow q \equiv \lnot p \vee q$

>[!theorem] Prawa de Morgana
>1. $\lnot (p \wedge r) \equiv \lnot p \vee \lnot q$
>2. $\lnot(p \vee q) \equiv \lnot p \wedge \lnot q$

>[!theorem] Schemat dowodu nie wprost
>$\lnot (p \Rightarrow q) \Leftrightarrow (\lnot p \Rightarrow \lnot q ) \Rightarrow p$


