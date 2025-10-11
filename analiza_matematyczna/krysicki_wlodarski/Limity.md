## Obliczyć granice szeregu o wyrazie ogólnym
### 2.41
$$
\begin{array}{l}
u_{n} = \sqrt{n+2}-\sqrt{n} \\
\lim_{n \to \infty} u_{n} = \lim_{n \to \infty}  \frac{n+2-n}{\sqrt{n+2}+ \sqrt{n}} = \lim_{n \to \infty}  \frac{2}{\sqrt{n} \left(    \sqrt{1+\frac{2}{n}} + 1 \right)} = 0
\end{array}
$$
### 2.45
$$
\begin{array}{l}
\lim_{n \to \infty} 3n - \sqrt{9n^2+6n-15} = \lim_{n \to \infty} \frac{9n^2 - 9n^2-6n+15}{3n + \sqrt{9n^2+6n-15}} =  \\
= \lim_{n \to \infty} \frac{n\left( -6+\frac{15}{n} \right)}{n \left( 3 + \sqrt{9 + \frac{6}{n} - \frac{15}{n^2}} \right) } = \frac{-6}{6} = -1
\end{array}
$$
### 2.46
$$
\begin{array}{l}
\lim_{n \to \infty} \sqrt[3]{n^3+4n^2} - n = \lim_{n \to \infty} \frac{n^3+4n^2 - n^3}{\left(\sqrt[3]{n^3 + 4n^2} \right)^2 + n\sqrt[3]{n^3 + 4n^2} + n^2} =  \\
\lim_{n \to \infty} \frac{4n^2}{n^2 \left[ \left( 1 + \frac{4}{n} \right)^{2/3} +\sqrt{1 + \frac{4}{n}} + 1 \right] } = \frac{4}{3}
\end{array}
$$
### 2.47

$$
\begin{array}{l}
\lim_{n \to \infty} n \sqrt[3]{2} - \sqrt[3]{2n^3 + 5n^2 - 7} = \lim_{n \to \infty} \frac{2n^3 - 2n^3 - 5n^2 + 7}{2^{2/3}n^2 + n\sqrt[3]{2}\sqrt[3]{2n^3 + 5n^2 - 7} + \left( 2n^3 + 5n^2 - 7 \right)^{2/3} } = \\
= \lim_{n \to \infty} \frac{-5n^2 + 7}{n^2 \left[ 2^{2/3} + \sqrt[3]{2} \sqrt[3]{2 + \frac{5}{n} - \frac{7}{n^3}} + \left( 2 + \frac{5}{n} - \frac{7}{n^3} \right)^{2/3}  \right] } = -\frac{5}{\sqrt[3]{4} + \sqrt[3]{4} + \sqrt[3]{4}} = -\frac{5}{3\sqrt[3]{4}}
\end{array}
$$

### 2.48
$$
\begin{array}{l}
\lim_{n \to \infty} \frac{4^{n-1} - 5}{2^{2n} - 7} = \lim_{n \to \infty} \frac{2^{2n-2} - 5}{2^{2n-2} \cdot 2^2 - 7} = \frac{1}{4}
\end{array}
$$
### 2.50
$$
\begin{array}{l}
\lim_{n \to \infty} \frac{3 \cdot 2^{2n+2} - 10}{5 \cdot 4^{n-1} + 3} = \lim_{n \to \infty} \frac{3 \cdot 2^{2n+2} - 10}{5 \cdot 2^{2n-2} + 3} = \frac{48}{5}
\end{array}
$$
### 2.52
$$
\begin{array}{l}
\lim_{n \to \infty} \frac{2^{n+1} - 3^{n+2}}{3^{n+2}}= \lim_{n \to \infty} \frac{ \left( \frac{2}{3} \right)^{n+1} -3}{3} = \lim_{n \to \infty}  \left( \frac{2}{3} \right)^n - \frac{3}{3} = -1
\end{array}
$$
### 2.53
$$
\begin{array}{l}
\lim_{n \to \infty} \left( \frac{3}{2} \right)^n \frac{2^{n+1} - 1}{3^{n+1} - 1} = \lim_{n \to \infty} \frac{3^n \cdot 2^{n+1} - 3^n}{3^{n+1} \cdot 2^n - 2^n} = \lim_{n \to \infty} \frac{\left( 2 - \frac{1}{2^n} \right)}{3 - \frac{1}{3^n}} = \frac{2}{3}
\end{array}
$$
### 2.54
$$
\begin{array}{l}
\lim_{n \to \infty} u_{n} = \lim_{n \to \infty}  \sqrt[n]{3^n + 2^n} \\
a_{n} = \sqrt[n]{3^n} \\
b_{n} = \sqrt[n]{2 \cdot 3^n} \\
\lim_{n \to \infty}  a_{n} = 3 \\
\lim_{n \to \infty} b_{n} = 3 \\
a_{n} < u_{n} < b_{n}  \\
\text{na podstawie tw. o trzech ciagach } \lim_{n \to \infty} u_{n} = 3
\end{array}
$$
### 2.55
$$
\begin{array}{l}
u_{n} = \sqrt[n]{10^n + 9^n + 8^n}  \\
a_{n} = \sqrt[n]{10^n} \\
b_{n} = \sqrt[n]{3 \cdot 10^n} \\
\dots \\
\lim_{n \to \infty} u_{n} = 10
\end{array}
$$
### 2.56
$$
\begin{array}{l}
u_{n} = \sqrt[n]{10^{100}} - \sqrt[n]{\frac{1}{10^{100}}} = \sqrt[n]{10^{100}} - \sqrt[-n]{10^{100}}\\
a_{n} = 0 \\
b_{n} = \sqrt[n]{10^{100}} \\
a_{n} < u_{n} < b_{n}  \\
\lim_{n \to \infty} a_{n} = \lim_{n \to \infty} b_{n} = 0 \\
\lim_{n \to \infty} u_{n} = 0
\end{array}
$$
### 2.57
$$
\begin{array}{l}
u_{n} = \sqrt[n]{\left( \frac{2}{3} \right)^n + \left( \frac{3}{4} \right)^n} \\
a_{n} = \sqrt[n]{\left( \frac{3}{4} \right)^n} \\
b_{n} = \sqrt[n]{2 \cdot \left( \frac{3}{4} \right)^n} \\
\lim_{n \to \infty} a_{n} = \lim_{n \to \infty} b_{n} = \frac{3}{4} \\
\lim_{n \to \infty}  u_{n} = \frac{3}{4}
\end{array}
$$
### 2.58
$$
\begin{array}{l}
\lim_{n \to \infty} \frac{1 + 2 + \dots + n}{n^2} = \lim_{n \to \infty} \frac{\frac{n(n+1)}{2}}{n^2} = \lim_{n \to \infty} \frac{n^2 + n}{2n^2} = \frac{1}{2}
\end{array}
$$
