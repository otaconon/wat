>[!definition]
Zbiór $G$, w którym określone jest działanie $\circ$, nazywamy **grupą**, jeśli spełnione są warunki:
>1) działanie $\circ$ jest _łączne_
>2) istnieje _element neutralny_
>3) dla każdego elementu, istnieje element do niego _odwrotny_

>[!definition] Własność skracania
Niech $(G, \circ)$, oraz $a, b,x,y \in G$, wtedy: 
>$$
\begin{array}{l}
ax = ay \implies x = y \ &\text{lewostronna własność skracania} \\
xb = yb \implies x = y \ &\text{prawostronna własność skracania} \\
\end{array}
>$$

>[!lemma]
Niech $(S, \circ)$  będzie półgrupą, wtedy: 
>$$
(S, \circ) \text{ is a group} \iff \forall a,b \in S \ \exists x,y \in S: ax = b,\ ya = b
>$$

>[!proof]
>$$ 
\begin{array}{l}
(\Rightarrow) &\text{Załóżmy że } (S, \circ) \text{ jest grupą}. \\
&\text{Dla danych } a,b \in S \text{ oznaczmy} \\
&x = a^{-1}b,\ y = ba^{-1} \\
 \\
(\Leftarrow) &\text{Dla danego } a \in S \ \exists x,y \in S: ax = a \wedge ya = a \\
&e := y: ea = a \\
&b \in S \implies \hat{x} \in S: a \hat{x} = b \\
&eb = e(a \hat{x}) = (ea) \hat{x} = a \hat{x} = b \implies e\text{ jest lewostronnie neutralne} \\
&\text{Dla danego } b \in S,\ \exists \hat{y} \in S: \hat{y}b = e \implies b \text{ jest lewostronnie odwracalne} \\
\end{array}
>$$

>[!theorem]
Jeśli $(S, \circ)$ jest półgrupą i $\text{ord}(S) < \infty$, to:
>$$
(S, \circ) \text{ jest grupą} \iff \text{obydwie własności skarcania są dla niej prawdziwe}
>$$

>[!proof]
> $$
\begin{array}{l}
\forall f: S \to S:  \\
f \text{ jest injekcyjne} \iff f \text{ jest surjekcyjne}  \\
 \\
\forall a \in S: \\
f_{a}: S \to S,\ f_{a}(x) = ax \\
g_{a}: S \to S,\ g_{a}(x) = xa \\
\end{array}
> $$
> Obydwie własności skracania są prawdziwie 
> $$
\begin{array}{l}
\iff \forall a \in S: & f_{a}(x) = f_{a}(y) \implies x = y \\
&g_{a}(x) = g_{a}(y) \implies x = y \\
\iff \forall a \in S: &f_{a} \text{ i } g_{a} \text{ są injekcyjne} \\
\iff \forall a \in S: &f_{a} \text{ i } g_{a} \text{ są surjekcyjne}  \\
\iff \forall a \in S: &\forall b \in S \ \exists x,y \in S: f_{a}(b) = b \wedge g_{a}(y) = b \\
\iff \text{Lemma}: &(S, \circ) \text{ jest grupą}
\end{array}
>$$
