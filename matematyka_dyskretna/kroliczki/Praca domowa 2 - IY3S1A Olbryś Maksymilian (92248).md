## 3/52
$$
\begin{array}{l}
\frac{p \Rightarrow q; \ r \Rightarrow s}{(p \vee r) \Rightarrow (q \vee s)}
\end{array}
$$
Załóżmy że podany ciąg formuł nie jest regułą dowodzenia, wtedy wiemy że:
$w((p \vee r) \Rightarrow (q \vee s)) = \bot$ oraz $w(p \Rightarrow q \wedge r \Rightarrow s) = \top$. W takim razie:

$$
\begin{array}{l}
w(q \vee s) = \bot \\
w(p \vee r) = \top \\
w(p \Rightarrow q) = \top \\
w(r \Rightarrow s) = \top
\end{array}
$$

$$
\begin{array}{l}
w(q \vee s) = \bot \implies w(q) = \bot \wedge w(s) = \bot
\end{array}
$$

$$
\begin{array}{l}
w(q) = \bot \wedge w(p \Rightarrow q) = \top \implies &w(p) = \bot  \\
w(s) = \bot \wedge w(r \Rightarrow s) = \top \implies &w(r) = \bot 
\end{array}
$$

ale to oznacza że $w(p \vee r) = \bot$ co jest niezgodne z naszymi założeniami. Otrzymaliśmy więc sprzeczność, dowodząc tym samym że ciąg formuł jest regułą dowodzenia.

Przesłanki:
 - $p \Rightarrow q$
 - $r \Rightarrow s$

Wnioski:
- $(p \vee r) \Rightarrow (q \vee s)$

## 2/64
Udowodnić $\forall k \in \mathbb{N},\ k\geq 10: 3^k \leq k!$

Zauważmy że dla $k = 10$ nierówność jest spełniona gdyż
$$
3^{10} = 59049 \leq 3628800 = 10!
$$
Niech $S$ oznacza zbiór liczb naturalnych dla których analizowana nierówność jest nieprawdziwa:
$$
S = \left\{ n \in \mathbb{N}, n \geq 10: 3^n > n! \right\} 
$$
Zastosujemy schemat dowodu apagogicznego $\frac{\lnot \varphi \Rightarrow (\psi \wedge \lnot \psi)}{\varphi}$. Niech $\varphi: S = \varnothing$, oraz $\psi(n), n \geq 10: 3^n \leq n!$. Załóżmy że $\lnot \varphi$, wtedy $S \neq \varnothing$. Zasada Minimum stanowi że skoro $\mathbb{N} \supseteq S \neq \varnothing$, to istnieje element najmniejszy $m \in S, m > 10$. Z opisanych warunków otrzymujemy następujące dwie nierówności:
$$
\begin{array}{l}
\lnot \psi(m), m \geq 10: 3^m > m! \\
3^{m-1} \leq (m-1)!
\end{array}
$$
Przekształćmy drugą nierówność mnożąc obie strony przez $3$:
$$
\begin{array}{l}
3^{m-1} \cdot 3 \leq 3(m-1)! \\
3^m \leq 3(m-1)! \\
\end{array}
$$
Zauważmy że
$$
\begin{array}{l}
3(m-1)! \leq m! \\
3 \leq m \\
\end{array}
$$
Ponieważ dla $m \geq 10$ prawdziwym jest że $3(m-1)! \leq m!$ to wnioskujemy
$$
\psi(m), m \geq 10: 3^m \leq m!
$$
Tym samym otrzymaliśmy sprzeczność, jako że założyliśmy $\lnot \psi$, a otrzymaliśmy $\psi$.
Udowodniliśmy więc prawdziwość przesłanki, więc prawdziwy jest również wniosek, co kończy dowód.