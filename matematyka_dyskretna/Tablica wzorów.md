## 1. Najważniejsze tautologie rachunku zdań

$$
\begin{array}{l}
(1.1)&p \vee T \Leftrightarrow T \\
(1.2)&p \wedge T \Leftrightarrow p \\
(1.3)&p \vee F \Leftrightarrow p \\
(1.4) &p \wedge F \Leftrightarrow F \\
(1.5) &(p \Rightarrow q) \Leftrightarrow (\lnot p \vee q) &\text{prawo eliminacji implikacji}\\
(1.6) &(p \Leftrightarrow \lnot p) \Rightarrow \lnot p &\text{prawo Claviusa} \\
(1.7) &(\lnot p \Rightarrow p) \Rightarrow p &\text{zasada kontrapozycji} \\
(1.8) &(p \Rightarrow q) \Leftrightarrow (\lnot q \Rightarrow \lnot p) &\text{prawo transpozycji prostej} \\
(1.9) &((p \Rightarrow q) \Rightarrow p) \Rightarrow p &\text{prawo Peirce'a} \\
(1.10) &(\lnot p \Rightarrow (q \wedge \lnot q)) \Rightarrow p &\text{schemat dowodu apagogicznego} \\
(1.11) &(\lnot p \Rightarrow q) \Rightarrow ((\lnot p \Rightarrow \lnot q) \Rightarrow p) &\text{schemat dowodu nie wprost} \\
(1.12) &\lnot (p \vee q) \Leftrightarrow (\lnot p \wedge \lnot q) &\text{prawo de Morgana} \\
(1.13) &\lnot (p \wedge q) \Leftrightarrow (\lnot p \vee \lnot q) &\text{prawo de Morgana} \\
(1.14) &p \vee (p \wedge q) \Leftrightarrow p &\text{prawo pochlaniania} \\
(1.15) &p \wedge (p \vee q) \Leftrightarrow p &\text{prawo pochlaniania}
\end{array}
$$

## 2. Najważniejsze tautologie rachunku predykatów

$$
\begin{array}{l}
(2.1) &\forall x : (\varphi(x) \vee \psi(x)) \Leftarrow \forall x: \varphi(x) \vee \forall x: \psi(x) \\
(2.2) &\exists x: (\varphi(x) \vee \psi(x)) \Leftrightarrow \exists x: \varphi(x) \vee \exists x: \psi(x) \\
(2.3) &\forall (\varphi(x) \wedge \psi(x)) \Leftrightarrow \forall x: \varphi(x) \wedge \forall x: \psi(x) \\
(2.4) &\exists x: (\varphi(x) \wedge \psi(x)) \Rightarrow \exists x: \varphi(x) \wedge \exists x: \psi(x) \\
(2.5) &\lnot \forall \varphi(x) \Leftrightarrow \exists x \lnot \varphi(x) \\
(2.6) &\lnot \exists \varphi(x) \Leftrightarrow \forall x \lnot \varphi(x) \\
(2.7) &\forall x: \forall y: \varphi(x, y) \Leftrightarrow \forall y: \forall x: \varphi(x, y) \\
(2.8) &\exists x: \exists y: \varphi(x, y) \Leftrightarrow \exists y: \exists x: \varphi(x, y) \\
(2.9) &\exists x: \forall y: \varphi(x, y) \Rightarrow \forall y: \exists x: \varphi(x, y) \\
(2.10) &\forall x: (\varphi(x) \Rightarrow \psi(x)) \Rightarrow (\forall x: \varphi(x) \Rightarrow \forall x: \psi(x)) \\
(2.11) &\forall x: (\varphi(x) \Rightarrow \psi(x)) \Rightarrow (\exists x: \varphi(x) \Rightarrow \exists x: \psi(x)) \\
(2.12) &\exists x: (\varphi(x) \Rightarrow \psi(x)) \Leftarrow (\exists x: \varphi(x) \Rightarrow \exists x: \psi(x)) \\
(2.13) &\forall x: \varphi(x) \Leftrightarrow \forall y: \varphi(y) \\
(2.14) &\exists x: \varphi(x) \Leftrightarrow \exists y: \phi(y)
\end{array}
$$

<div style="page-break-after: always;"></div>

## 3. Najważniejsze reguły dowodzenia

$$
\begin{array}{l}
(3.1) &\frac{(\varphi, \varphi \Rightarrow \psi)}{\varphi} &\text{regula odrywania (modus ponens)} \\
(3.2) & \frac{\lnot \varphi, \psi \Rightarrow \varphi}{\lnot \psi} &\text{modus tollens} \\
(3.3) & \frac{\varphi \Rightarrow \psi, \psi \Rightarrow \zeta}{\varphi \Rightarrow \zeta} &\text{sylogizm warunkowy} \\
(3.4) & \frac{\varphi \vee \psi, \lnot \varphi}{\psi} &\text{sylogizm alternatywny} \\
(3.5) & \frac{(\varphi \wedge \lnot \psi) \Rightarrow (\zeta \wedge \lnot \zeta)}{\varphi \Rightarrow \psi} &\text{dowod nie wprost} \\
(3.6) & \frac{\lnot \varphi \Rightarrow (\psi \wedge \lnot \psi)}{\varphi} &\text{schemat dowodzenia apagogicznego}
\end{array}
$$

## 4. Właściwości relacji binarnych

$$
\begin{array}{l}
(4.1) &\forall x \in \mathbb{X}: xRx &\text{zwrotnosc (refleksywnosc)} \\
(4.2) &\forall x \in \mathbb{X}: \lnot xRx &\text{przeciwzwrotnosc} \\
(4.3) &\forall x, y \in \mathbb{X}: (xRy \Rightarrow yRx) &\text{symetrycznosc} \\
(4.4) &\forall x, y \in \mathbb{X}: (xRy \Rightarrow \lnot yRx) &\text{przeciwsymetrycznosc} \\
(4.5) &\forall x, y \in \mathbb{X}: (xRy \wedge yRx \Rightarrow y = x) &\text{antysymetrycznosc} \\
(4.6) &\forall x, y, z \in \mathbb{X}: (xRy \wedge yRz \Rightarrow xRz) &\text{przechodnosc (tranzystywnosc)}  \\
(4.7) &\forall x, y \in \mathbb{X}: (xRy \vee yRx) &\text{liniowosc (spojnosc)}
\end{array}
$$
