## 4
a) Show that a list of length one in a vector space is linearly independent if and only if the vector in the list is not $0$

By the definition a list of vectors is linearly independent if and only if, the only choice of $a_{1}, \dots, a_{m} \in \mathbf{F}$ ,  $a_{1}v_{1} + \dots + a_{m}v_{m} = 0$. is $a_{1} = \dots = a_{m} = 0$ Then if the single vector in a list is 0 all possible choices of $a$ give $0$, thus not satisfying condition of linear independence

b) Show that a list of length two in a vector space is linearly independent if and only if neither of the two vectors in the list is a scalar multiple of the other.

If one vector in the list is a scalar multiple of the other we have $v_{1}, v_{2} \in V,\ v_{2} = a_{2}v_{1}$, thus we can choose $a_{1} = 1, a_{2} = 1$, giving us $a_{1}v_{1} + a_{2}v_{2} = a_{1}v_{1} + a_{2}v_{1} = v_{1} - v_{1} = 0$. Thus we proved that if one vector is a scalar multiple of the other, the list is linearly dependent. if on the other hand by definition, we can't choose such $a_{1}, a_{2}$  that will make the vectors cancel out, proving that they are linearly independent.

## 5
Find a number $t$ such that
$$
(3, 1, 4), (2, -3, 5), (5, 9, t)
$$
is not linearly independent in $\mathbf{R}^3$

$$
\begin{array}{l}
\begin{cases}
3a_{1} + 2a_{2} = 5 \\
1a_{1} -3a_{2} = 9 \\
4a_{1} + 5a_{2} = t \\
\end{cases} \\
\\
a_{1} = 9 + 3a_{2} \\
27 + 9a_{2} + 2a_{2} = 5 \\
a_{2} = -2 \\
a_{1} = 3 \\
t = 22
\end{array}
$$


## 6
Show that the list 
$$
(2, 3, 1), (1, -1, 2), (7, 3, c)
$$
is linearly dependent in $\mathbf{F}^3$ if and only if $c = 8$

$$
\begin{array}{l}
\begin{cases}
2a_{1} + a_{2} = 7a_{3} \\
3a_{1} - a_{2} = 3a_{3} \\
a_{1} + 2a_{2} = ca_{3} \\
\end{cases} \\
 \\
3a_{1} - 7a_{3} + 2a_{1} = 3a_{3} \\
5a_{1} = 10a_{3} \\
a_{1} = 2a_{3} \\
 \\
a_{1} + 2(7a_{3} - 2a_{1}) = ca_{3} \\
14 a_{3} - 6a_{3} = ca_{3} \\
8a_{3} - ca_{3} = 0 \\
a_{3}(8 - c) = 0
\end{array}
$$
For the list of vectors in $\mathbf{F}^3$ to be linearly independent, there has to be exactly one solution which is the case $\forall c \neq 8$. Thus the list is dependent in $\mathbf{F}^3$ if and only if $c = 8$.

## 7
### a)
Show that if we think of $\mathbb{C}$ as a vector space over $\mathbb{R}$, then the list $1 + i, 1 - i$ is linearly independent.

$$
\mathbf{C} = \left\{ a + bi: a, b \in \mathbf{R} \right\}
$$

$$
\begin{array}{l}
\begin{cases}
a_{1} + a_{2} = 0 \\
ia_{1} - ia_{2} = 0
\end{cases} \\
 \\
a_{2} = -a_{1} \\ \\

ia_{1} +ia_{1} = 0 \\
2ia_{1} = 0
\end{array}
$$

For the final equation to be satisfied, $a_{1}$ has to be $0$, thus the list is linearly independent

### b) 
Show that if we think of $\mathbb{C}$ as a vector space over $\mathbb{C}$, then the list $1+i, 1-i$ is linearly dependent
$$
\mathbf{C} = \left\{ z : z \in \mathbf{C} \right\} 
$$
$$
\begin{array}{l}
(a_{1} + b_{1}i)(1 + i) + (a_{2} + b_{2}i)(1 - i) = 0  \\
(a_{1} - b_{1}) + i(a_{1} + b_{1}) + (a_{2} - b_{2}) + i(a_{2} + b_{2}) = 0 \\
(a_{1} - b_{1} - a_{2} + b_{2}) + i(a_{1} + b_{1} + a_{2} + b_{2}) = 0 \\
a_{1} - b_{1} - a_{2} + b_{2} = 0 \wedge a_{1} + b_{1} + a_{2} + b_{2} = 0 \\ \\

a_{1} + b_{2} = b_{1} + a_{2} \\
2a_{1} + 2b_{2} = 0 \\
a_{1} = -b_{2}
\end{array}
$$
The final equation means, if we choose any
$$
\left\{   z_{1} = a_{1} + b_{1}i, z_{2} = a_{2} + b_{2}i \in \mathbf{C}: a_{1} = -b_{2}\right\} 
$$
then the linear combination of vectors from the list with these coefficients, will give a result $0$, showing that they are linearly dependent

## 8
Suppose $v_{1}, v_{2}, v_{3}, v_{4} \ (1)$ is linearly independent in $V$. Prove that the list
$$
v_{1} - v_{2}, v_{2} - v_{3}, v_{3} - v_{4}, v_{4} \ (2)
$$
is also linearly independent

From _exercise 2_ we know that (2) spans the same space as (1). Now because (1) is linearly independent, any linearly dependent list of four vectors in $V$ can't span the same space as (1) (from _2.22_). Thus (2) is linearly independent

## 9
Prove or give a counterexample: If $v_{1}, v_{2}, \dots, v_{m}$ is linearly independent list of vectors in $V$, then 
$$
5v_{1} - 4v_{2}, v_{2}, v_{3}, \dots, v_{m}
$$
is linearly independent

List of vectors is linearly independent if and only if a linear combination of these vectors can equal $0$ for not all $0$ coefficients
$$
a_{1}(5v_{1} - 4v_{2}) + a_{2}v_{2},\dots, a_{m}v_{m} = 0
$$
multiplying and rearranging we get
$$
a_{1}v_{1} + (a_{2} - 4a_{1})v_{2},\dots,a_{m}v_{m} = 0
$$
$a_{2} - 4a_{1} \in F$, thus we rewrote the equation as a linear combination of vectors known to be linearly independent, proving that the list in question is indeed linearly independent

## 10
Prove or give a counterexample: If $v_{1}, v_{2}, \dots, v_{m} \ (1)$is a linearly independent list of vectors in $V$ and, $\lambda \in \mathbf{F}$ with $\lambda \neq 0$, then $\lambda v_{1}, \lambda v_{2}, \dots, \lambda v_{m} \ (2)$ is linearly independent

Because $\lambda \neq 0$, the linear combination of (2) is only zero if $a_{1}v_{1} + a_{2}v_{2} + \dots + a_{m}v_{m} = 0$, now from the linear independence of (1) we know that the linear combination of (2) is equal to zero if and only if all coefficients are equal to zero, proving linear independence of (2)

## 11
Prove or give a counterexample. If $v_{1}, v_{2}, \dots, v_{m} \ (1)$ and $w_{1}, w_{2}, \dots, w_{m} \ (2)$ are linearly independent list of vectors in $V$, then the list $v_{1} + w_{1}, v_{2} + w_{2}, \dots, v_{m} + w_{m} \ (3)$  is linearly independent

Choose 
$$
\begin{array}{l}
v_{1} = (1, 0) \\
v_{2} = (0, 1)  \\
w_{1} = (0, 1) \\
w_{2} = (1, 0)
\end{array}
$$
then we get 
$$
\begin{array}{l}
v_{1} + w_{1} = (1, 1) \\
v_{2} + w_{2} = (1, 1) \\
(v_{1} + w_{1}) - (v_{2} + w_{2}) = 0
\end{array}
$$
the final equations tells us, that a combination of vectors in (3), can equal zero with not all zero coefficients. Showing that the list (3) can be linearly dependent

## 12
Suppose $v_{1}, \dots, v_{m}$ is linearly independent in $V$ and $w \in V$. Prove that if $v_{1} + w, \dots, v_{m} + w$ is linearly dependent, then $w \in \text{span}(v_{1},\dots, v_{m})$.

Suppose that $w$ is not in the $\text{span}(v_{1}, \dots, v_{m})$, then that means it cannot be written as a linear combination of $v_{1},\dots,v_{m}$. Thus $v_{k} + w$ also cannot be written as a linear combination of $v_{1} + w, \dots, v_{m} + w$, because: 
$$ \begin{array}{l}
a_{1}(v_{1} + w) + \dots + a_{k}(v_{k} + w) = 0 \\
(a_{1}v_{1} + \dots + a_{k} v_{k}) + (a_{1} + \dots + a_{k})kw = 0 \\
(a_{1}v_{1} + \dots + a_{k} v_{k}) = -(a_{1} + \dots + a_{k})kw
\end{array}
$$
we chose $w$ to not be in the span of $v_{1},\dots, v_{k}$, so the only choice of $a_{1}, \dots, a_{k}$, that satisfies this equation is $a_{1} = \dots = a_{k} = 0$. Thus $w$ has to be in the $\text{span}(v_{1},\dots,v_{m})$

## 13
Suppose $v_{1},\dots, v_{m}$ is linearly independent in $V$ and $w \in V$. Show that $v_{1},\dots, v_{m},w$ is linearly independent if and only if $w \not\in \text{span}(v_{1}, \dots, v_{m})$

If $w \in \text{span}(v_{1}, \dots, v_{m})$ , then $w$ can be written as a linear combination of $v_{1}, \dots, v_{m}$ thus the list $v_{1}, \dots, v_{m}, w$ cannot be linearly independent, proving the theorem one way. Now if $w \not\in \text{span}(v_{1}, \dots, v_{m})$, then $w$ cannot be written as a linear combination of $v_{1}, \dots, v_{m}$, which implies the list $v_{1}, \dots, v_{m}, w$ is linearly independent.

## 14
### Initial proof, kind of bad
Suppose $v_{1}, \dots, v_{m}$ is a list of vectors in $V$. For $k \in (1, \dots, m)$, let
$$
w_{k} = v_{1} + \dots + v_{k}
$$
Show that the list $v_{1}, \dots, v_{m}$ is linearly independent if and only if the list $w_{1}, \dots, w_{m}$ is linearly independent.

In _exercise 2A 13_ we proved that $v_{1}, \dots, v_{k+1}$ is linearly independent if and only if $v_{1}, \dots, v_{k}$ is linearly independent and $v_{k+1} \not\in \text{span}(v_{1}, \dots, v_{k})$. Thus if the list $v_{1}, \dots, v_{m}$ is linearly independent, we know that $(v_{1} + \dots + v_{k+1}) \not\in \text{span}(v_{1}, \dots, v_{k})$ which implies $w_{k+1} \not\in \text{span}(w_{1}, \dots, w_{k})$. Proving that if $v_{1}, \dots, v_{m}$ is linearly independent, then $w_{1}, \dots, w_{m}$ is also linearly independent.

To prove the theorem in the other direction suppose that $w_{1}, \dots, w_{m}$ is linearly dependent and choose $w_{k}$ that can be written as a linear combination of $w_{1}, \dots, w_{k-1}$. Thus $w_{k} \in \text{span}(w_{1}, \dots, w_{k-1})$ 
$$
\begin{array}{l}
v_{1} + \dots + v_{k} = a_{1}w_{1} + \dots + a_{k-1}w_{k-1} \\
v_{1} + \dots + v_{k} = v_{1}(a_{1} + \dots + a_{k-1}) + v_{k-1}(a_{k-1}) \\
v_{k} = v_{1}(a_{1} + \dots + a_{m} - 1) + \dots + v_{k-1}(a_{k-1} - 1) \\
\end{array}
$$
We showed that $v_{k}$ can be written as a linear combination of other $v$'s and their list is thus linearly dependent if $w$'s are linearly dependent. $\square$
