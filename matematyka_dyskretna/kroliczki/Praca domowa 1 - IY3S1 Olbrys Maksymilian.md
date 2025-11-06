## 12/31
Wiemy że zbiór $\left\{ \wedge, \vee, \lnot \right\}$ jest funkcjonalnie pełny, oraz że $p \vee q = \lnot(\lnot p \wedge \lnot q)$. Oznacza to, że każdą alternatywę w dowolnej funkcji zdaniowej możemy zastąpić koniunkcją. A więc zbiór $\left\{ \wedge, \lnot \right\}$ jest funkcjonalnie pełny.

## 10/44

Przekształćmy wyrażenie korzystając z następujących praw rachunku funkcyjnego:
1. Prawo de Morgana: $\lnot \exists x \in \mathbb{X}: P(x) \equiv \forall x \in \mathbb{X}: \lnot P(x)$
$$
\begin{array}{l}
\lnot \exists x \in \mathbb{X}: \exists y \in \mathbb{Y}: (\lnot \varphi(x, y) \vee \psi(x, y)) \equiv \\
\equiv \forall x \in \mathbb{X}: \forall y \in \mathbb{Y}: \lnot (\lnot \varphi(x, y) \vee \psi(x, y))
\end{array}
$$
2. Likwidacja implikacji $\varphi(x, y) \Rightarrow \psi(x, y) \equiv \lnot \varphi(x, y) \vee \psi(x, y)$
$$
\begin{array}{l}
\forall x \in \mathbb{X}: \forall y \in \mathbb{Y}:\lnot(\lnot \varphi(x, y) \vee \psi(x, y)) \equiv \\
\equiv \forall x \in \mathbb{X}: \forall y \in \mathbb{Y}: \lnot(\varphi(x, y) \Rightarrow \psi(x, y))\\
\end{array}
$$

