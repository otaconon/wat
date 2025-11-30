## Square Matrix

Square matrix is a matrix in $\mathbf{F}^{N \times N}$

## Rectangular Matrix

Rectangular matrix is a matrix in $\mathbf{F}^{N \times M}$, where $N \neq M$

## Symmetric Matrix

Matrix $\mathbf{A}$ is symmetric if and only if $\mathbf{A}^T = \mathbf{A}$. Notice that for the matrix to be symmetric, it also needs to be square.

## Skew-symmetric Matrix

Matrix $\mathbf{A}$ is skew-symmetric if and only if $\mathbf{A}^T = - \mathbf{A}$

## Identity Matrix

Identity matrix $\mathbf{I}$ is such matrix that $\forall \mathbf{A}: \mathbf{IA} = \mathbf{AI} = \mathbf{A}$. Where multiplication for those two matrices is defined.
$$
\mathbf{I} = \begin{bmatrix}
1 & 0 & \dots & 0 \\
0 & 1 & \dots & 0 \\
\vdots & \vdots & \ddots & \vdots \\
0 & 0 & \dots & 1
\end{bmatrix}
$$
## Diagonal Matrix

Diagonal matrix has non zero element only on the diagonal, formally:
$$
a_{i, j} = \begin{cases}
\alpha_{n}, &\text{if} &i = j \\
0, &\text{if} &i \neq j
\end{cases}
$$
	It is useful, because it simplifies matrix multiplication and matrix exponentiation. The process of transforming non-diagonal matrix into a diagonal one, is called _diagonalisation_.

## Augmented Matrix

An augmented matrix is the result of concatenating two or more matrices column-wise, they obviously need to have the same number of rows

## Triangular Matrix

Triangular matrices can be either upper-triangular or lower-triangular. Upper triangular matrices have all zero elements below the diagonal, lower-triangular is analogous.

## Dense and Sparse Matrix

Dense or sparse matrix is not precisely define, those terms are used when matrix has almost all non-zero elements (dense) or almost all zero elements (sparse).
## Orthogonal Matrix

1. All its columns are pairwise orthogonal.
2. Each column has unit magnitude

Formally

$$
\left< \mathbf{Q}_{i}, \mathbf{Q}_{j} \right> = \begin{cases}
1, &\text{if} &i = j \\
0, &\text{if} &i \neq j
\end{cases}
$$

$$
\mathbf{Q}^T \mathbf{Q} = \mathbf{I}
$$

## Special Matrix $\mathbf{A}^T\mathbf{A}$

- Square
- Symmetric
- Full-rank if $\mathbf{A}$ is full column-rank
- Invertible if $\mathbf{A}$ is full column-rank
- Has same row space as $\mathbf{A}$
- Has orthogonal eigenvectors
- Positive (semi)definite
- Has non-negative real-valued eigenvalues
- Is called covariance matrix if $\mathbf{A}$ is a data matrix
- Is pretty



