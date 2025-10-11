## Find the limit
### 3.25
$$
\sum_{n=1}^{\infty} \left(\sqrt[2n+1]{x}-\sqrt[2n-1]{x}\right) = \left(\sqrt[3]{x} - \sqrt[1]{x} \right) + \left( \sqrt[5]{x} - \sqrt[3]{x} \right) + \dots
$$
$$
\sum_{k=1}^{n} \sqrt[2k+1]{x} - \sum_{k=1}^{n} \sqrt[2k-1]{x} = \sqrt[2n+1]{x} - \sqrt[1]{x} + \sum_{k=1}^{n-1}\sqrt[2k+1]{x} - \sum_{k=2}^{n} \sqrt[2k-1]{x} = \sqrt[2n+1]{x} - \sqrt[1]{x}
$$
$$
\lim_{n \to \infty} \sum_{k=1}^{n} \left( \sqrt[2k+1]{x} - \sqrt[2k-1]{x} \right) = \lim_{n \to \infty}  \sqrt[2n+1]{x} - \sqrt[1]{x} = 
\begin{cases}
1 - x,\ \text{if } x > 0 \\
-1 - x,\ \text{if } x < 0 \\
0,\ \text{if } x = 0
\end{cases}
$$

## Given the series partial sum find its n-th term and sum 
### 3.26
$$ \begin{array}{l}
&S_{n} &= \frac{n+1}{n} = 1 + \frac{1}{n} \\
&S_{1} &= 1 + \frac{1}{1} \\
&S_{2} &= 1 + \frac{1}{2} = S_{1} - \frac{1}{2} \\
&S_{3} &= 1 + \frac{1}{3} = S_{2} - \frac{1}{6} \\
&\dots
\end{array}
$$
$$
\begin{array}{l}
&a_1 &= 1 + 1 \\
&a_2 &= S_{2} - S_{1} = -\frac{1}{2} \\
&a_{3} &= S_{3} - S_{2} = -\frac{1}{6} \\
&\dots
\end{array}
$$
$$
\begin{array}{l}
a_{1} = 2 \\
a_{n} = -\frac{1}{n(n-1)},\ \text{if } n \neq 1
\end{array}
$$
$$
\lim_{n \to \infty} S_{n} = 2 - \sum_{n=2}^{\infty} \frac{1}{n(n-1)}
$$
$$
2 - \sum_{k=2}^{n} \frac{1}{k(k-1)} = 2 - \sum_{k=1}^{n-1} \frac{1}{k(k+1)}
$$
$$
\lim_{n \to \infty} 2 - \sum_{k=1}^{n} \frac{1}{k(k+1)} = 2 - 1 = 1
$$

### 3.27
$$
\begin{array}{l}
S_{n} &= \frac{-1+2^n}{2^n} = 1 - \frac{1}{2^n} \\
S_{1} &= 1 - \frac{1}{2} \\
S_{2} &= 1 - \frac{1}{4} \\
S_{3} &= 1 - \frac{1}{8} \\
\dots
\end{array}
$$
$$
\begin{array}{l} \\
a_{1} = \frac{1}{2} \\
a_{2} = S_{2} - S_{1} = \frac{1}{4} - \frac{1}{2} = -\frac{1}{4} \\
a_{3} = S_{3} - S_{2} = \frac{1}{8} - \frac{1}{4} = -\frac{1}{8} \\
\dots
\end{array}
$$
$$
\lim_{n \to \infty} S_{n} = \sum_{n=1}^{\infty} \frac{1}{2^n}
$$
$$
S_{n} = \frac{1}{2}\left( 1 + \frac{1}{2} + \frac{1}{4} +\dots + \frac{1}{2^{n-1}} + \frac{1}{2^n} - \frac{1}{2^n} \right) = \frac{1}{2}\left( 1 + S_{n} - \frac{1}{2^n} \right) 
$$
$$
\begin{array}{l}
&S_{n} &= \frac{1}{2} + \frac{1}{2}S_{n} - \frac{1}{2^{n+1}} \\
&S_{n} &= 1 - \frac{1}{2^{n+1}}
\end{array}
$$

$$
S = \lim_{ n \to \infty} S_{n} = 1
$$
### 3.28
$$
S_{n} = \frac{(-1)^n}{n}
$$
$$
\begin{array}{l}
&a_{1} = S_{1} &= -1 \\
&a_{2} = S_{2} - S_{1} &= \frac{1}{2} + 1 &= \frac{3}{2} \\
&a_{3} = S_{3} - S_{2} &= -\frac{1}{3} - \frac{1}{2} &= -\frac{5}{6} \\
&a_{4} = S_{4} - S_{3} &= \frac{1}{4} + \frac{1}{3} &= \frac{7}{12} \\
&\dots \\
&a_{n} = (-1)^n \frac{2n - 1}{n(n-1)}
\end{array}
$$
$$
\begin{array}{l}
S_{n} = -1 + \sum_{k=2}^{n} \left( -1 \right)^n \frac{2k-1}{k(k-1)} = -1 + \sum_{k=2}^{n} (-1)^n \frac{k + k -1}{k(k-1)} = \\
= -1 + \sum_{k=2}^{n} (-1)^k \left( \frac{1}{k-1} + \frac{1}{k} \right) = -1 + \sum_{k=1}^{n} \left( \frac{(-1)^{k+1}}{k(k+1)} \right) = \\
= -1 + \frac{1}{2} - \frac{1}{6} + \frac{1}{12} - \frac{1}{20} + \frac{1}{30} \dots + \frac{(-1)^{n+1}}{n(n+1)}= \\
= -1 - \sum_{k=1}^{n} \frac{1}{2k(2k+1)} + \sum_{k=1}^{n} \frac{1}{2k(2k-1)} = \\ = -1 + \sum_{k=1}^{n} \frac{2k - 1 + 2k + 1}{2k(2k+1)(2k-1)} = 
 -1 + \sum_{k=1}^{n} \frac{4k}{2k(4k^2 - 1)} = -1 + \sum_{k=1}^{n} \frac{2}{4k^2 - 1}
\end{array}
$$
$$
\begin{array}{l}
&S_{k_{1}} = \frac{1}{3} \\
&S_{k_{2}} = \frac{1}{15} + \frac{1}{3} = \frac{2}{5} \\
&S_{k_{3}} = \frac{1}{35} +  \frac{2}{5} = \frac{3}{7} \\
&\dots \\
&S_{k_{n}} = \frac{k_{n}}{2k_{n} + 1}
\end{array}
$$
$$
\lim_{k_{n} \to \infty} S_{k_{n}} = \frac{1}{2}
$$
$$
S_{n} = -1 + \frac{2k_{n}}{2k_{n}+1}
$$
$$
\lim_{n \to \infty} S_{n} = -1 + 1 = 0
$$

