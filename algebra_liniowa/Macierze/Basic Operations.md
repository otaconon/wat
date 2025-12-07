## The Transpose Operation
To transpose a matrix, is to exchange its row with its columns. Let $B = A^{T}$, then 
$$
\begin{array}{l}

B_{i, j} = A_{j, i} \\
\end{array}
$$

$$
\begin{array}{l}
A &=& \begin{bmatrix}
a & b & c \\
d & e & f
\end{bmatrix} \\ \\
A^T &=& \begin{bmatrix}
a & d \\
b & e \\
c & f
\end{bmatrix}
\end{array}
$$

## Addition, Subtraction and Scalar-multiplication

It is obvious

## Matrix Shift

To shift a matrix is to add a scalar-multiplied identity matrix to it. Let $\overline{\mathbf{A}}$ denote the shifted matrix, then

$$
\begin{array}{l}
\overline{\mathbf{A}} = \mathbf{A} + \lambda \mathbf{I} &\mathbf{A} \in \mathbb{R}^{M \times M}, \lambda \in \mathbb{R}
\end{array}
$$

## Diagonal

Diagonal operation returns a vector created from diagonal elements of a matrix.

## Trace

Trace operation returns the sum of all elements on the matrix diagonal. **It is defined only for square matrices not matter how unintuitive it seems**.

## Matrix-Matrix multiplication

Matrix multiplication is defined between two matrices $\mathbf{A}, \mathbf{B}$ if and only if $\mathbf{A} \in \mathbb{F}^{M \times N}, \mathbf{B} \in \mathbb{F}^{N \times K}$.
Let $\mathbf{C} = \mathbf{AB}$, then $c_{i,j}$ is the dot product between $i^{\text{th}}$ row in $\mathbf{A}$ and the $j^{\text{th}}$ column in $\mathbf{B}$.

### Matrix multiplication with diagonal matrices

- Pre-multiplication by a diagonal matrix scales the rows of the right matrix by the diagonal elements.
- Post-multiplication by a diagonal matrix scales the columns of the left matrix by the diagonal elements.

$$
\begin{bmatrix}
a & 0 & 0 \\
0 & b & 0 \\
0 & 0 & c
\end{bmatrix}
\begin{bmatrix}
1 & 2 & 3 \\
4 & 5 & 6 \\
7 & 8 & 9
\end{bmatrix} = 
\begin{bmatrix}
1a & 2a & 3a \\
4b & 5b & 6b \\
7c & 8c & 9c
\end{bmatrix}
$$

$$
\begin{bmatrix}
1 & 2 & 3 \\
4 & 5 & 6 \\
7 & 8 & 9
\end{bmatrix}
\begin{bmatrix}
a & 0 & 0 \\
0 & b & 0 \\
0 & 0 & c
\end{bmatrix} = 
\begin{bmatrix}
1a & 2b & 3c \\
4a & 5b & 6c \\
7a & 8b & 9c
\end{bmatrix}
$$
### Order of operations
An operation applied to multiplied matrices gets applied to each matrix individually but in reverse order.
$$
(\mathbf{A} \dots \mathbf{B})^T = \mathbf{B}^T \dots \mathbf{A}^T
$$
