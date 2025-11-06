>[!definition] Span
>The set of all linear combinations of a list of vectors $v_{1}, \dots, v_{m}$ in $V$ is called the span of $v_{1},\dots,v_{m}$ denoted by $\text{span}(v_{1},\dots,v_{m})$. In other words,
>$$
\text{span}(v_{1},\dots,v_{m}) = \left\{ a_{1}v_{1} + \dots a_{m} v_{m}: a_{1},\dots, a_{m} \in F \right\}
>$$
>The span of the empty list is defined to be ${0}$

>[!definition] Spans
>If $\text{span}(v_{1},\dots,v_{m})$ equals $V$, we say that the list $v_{1},\dots,v_{m} \text{ spans } V$

>[!definition] finite-dimensional vector space
>A vector space is called finite-dimensional if some list of vectors in it spans the space

>[!definition] polynomial, $\mathcal{P}(\mathbf{F})$
>- A function $p: \mathbf{F} \to F$ is called a polynomial with coefficients in $\mathbf{F}$ if there exist $a_{0},\dots,a_{m} \in \mathbf{F}$ such that
>$$
>p(z) = a_{0} + a_{1}z + a_{2}z^2 + \dots + a_{m} z^m
>$$
>for all $z \in \mathbf{F}$
>- $\mathcal{P}(F)$ is the set of all polynomials with coefficients in $\mathbf{F}$

>[!definition] degree of a polynomial $\text{deg } p$
>- A polynomial $p \in \mathcal{P}(\mathbf{F})$ is said to have _degree $m$_ if there exists scalars $a_{0}, a_{1}, \dots, a_{m} \in \mathbf{F}$ with $a_{m} \neq 0$ such that for every $z \in \mathbf{F}$, we have
>$$
>p(z) = a_{0} + a_{1}z + \dots + a_{m}z^m
>$$
>- The polynomial that is identity $0$ is said to have degree
>- The degree of a polynomial $p$ is denoted by $\text{deg } p$

>[!definition] $\mathcal{P}_{m}(\mathbf{F})$
>For $m$ a nonnegative integer, $\mathcal{P}_{m}(\mathbf{F})$ denotes the set of all polynomials with coefficients in $\mathbf{F}$ and degree at most $m$

>[!definition] linearly independent
>- A list $v_{1},\dots,v_{m}$ of vectors in $V$ is called _linearly independent_ if the only choice of $a_{1},\dots,a_{m} \in \mathbf{F}$ that makes
>$$
>a_{1}v_{1} + \dots a_{m}v_{m}
>$$
>is $a_{1} = \dots = a_{m} = 0$
>- The empty list is also declared to be linearly independent

>[!definition] linearly dependent
>- A list of vectors in $V$ is called _linearly dependent_ if it is not linearly dependent
>- In other words, a list $v_{1},\dots,v_{m}$ of vectors in $V$ is linearly dependent if there exist $a_{1},\dots, a_{m} \in \mathbf{F}$, not all $0$, such that $a_{1}v_{1} + \dots + a_{m}v_{m} = 0$




