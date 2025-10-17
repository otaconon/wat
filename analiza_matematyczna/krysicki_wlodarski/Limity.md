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
### 2.63

$$
\begin{array}{l}
\lim_{n \to \infty} \frac{1}{n^k} + \frac{2}{n^k} +\dots + \frac{n}{n^k} = \lim_{n \to \infty} \frac{1+2+\dots+n}{n^k} =  \\
= \lim_{n \to \infty} \frac{\left( \frac{n(n+1)}{2} \right)}{n^k} = \lim_{n \to \infty} \frac{n^2 + n}{2n^k} = \lim_{n \to \infty}  \frac{1 + \frac{1}{n}}{2n^{k-2}} = \begin{cases}
\frac{1}{2}, &\text{if } k = 2 \\
\infty, &\text{if } k < 2 \\
0, &\text{if } k > 2
\end{cases}
\end{array}
$$

### 2.64

$$
\begin{array}{l}
\lim_{n \to \infty} \left( 1 + \frac{2}{n} \right)^n = \lim_{n \to \infty} \left( \left( 1 + \frac{2}{n} \right)^{n/2} \right)^{2} = e^2
\end{array}
$$

### 2.65

$$
\begin{array}{l}
\lim_{n \to \infty}  \left( 1 - \frac{1}{n^2} \right)^n = \lim_{n \to \infty}  \left(\left( 1 + \left( -\frac{1}{n^2} \right) \right)^{-n^2}\right)^{-1/n} = \lim_{n \to \infty}  e^{-1/n} = 1
\end{array}
$$

### 2.66

$$
\begin{array}{l}
\lim_{n \to \infty} \left( \frac{n+5}{n} \right)^n = \lim_{n \to \infty} \left( 1 + \frac{5}{n} \right)^n = e^5
\end{array}
$$

### 2.67

$$
\begin{array}{l}
\lim_{n \to \infty}  \left( 1-\frac{3}{n} \right)^n = e^{-3}
\end{array}
$$

### 2.68

$$
\begin{array}{l}
\lim_{n \to \infty} \left( 1 - \frac{4}{n} \right)^{-n+3} = \lim_{n \to \infty} \left( \left( 1 - \frac{4}{n} \right)^{-n/4} \right)^{4(n-3)/n} = \lim_{n \to \infty} e^{4(n-3)/n} = e^4
\end{array}
$$

### 2.69

$$
\begin{array}{l}
\lim_{n \to \infty}  \left( \frac{n^2 + 6}{n^2} \right)^{n^2} = \lim_{n \to \infty} \left( 1 + \frac{6}{n^2} \right)^{n^2} = e^6
\end{array}
$$

### 2.70

$$
\begin{array}{l}
\lim_{ n \to \infty}  \left( \frac{n^2 + 2}{2n^2 + 1} \right)^{n^2} = \lim_{n \to \infty} \left( 1 + \frac{-n^2+1}{2n^2+1} \right)^{n^2} \\
a_{n} = \frac{-n^2 + 1}{2n^2 + 1} \\
= \lim_{n \to \infty} \left(\left( 1 + a_{n} \right)^{1/a_{n}} \right)^{n^2 \cdot a_{n}} = \lim_{n \to \infty} e^{n^2 \cdot a_{n}} = \lim_{n \to \infty} u_{n}\\
\lim_{n \to \infty} n^2 \cdot a_{n} = \lim_{n \to \infty} \frac{n^2(-n^2 + 1)}{2n^2 + 1} = -\infty \\
\lim_{n \to \infty} u_{n} = 0
\end{array}
$$

### 2.71

$$
\begin{array}{l}
\lim_{n \to \infty} \sqrt{n + \sqrt{n}} - \sqrt{n - \sqrt{n}} = \lim_{n \to \infty} \frac{n + \sqrt{n} - n + \sqrt{n}}{\sqrt{n + \sqrt{n}} + \sqrt{n - \sqrt{n}}} = \\
= \lim_{n \to \infty} \frac{2\sqrt{n}}{\sqrt{n}\left( \sqrt{1 + \frac{1}{\sqrt{n}}} + \sqrt{1 - \frac{1}{\sqrt{n}}} \right)} = 1
\end{array}
$$

### 2.72

$$
\begin{array}{l}
\lim_{n \to \infty} \sqrt{n(n - \sqrt{n^2 - 1})} = \lim_{n \to \infty} \sqrt{\frac{n^4 - n^4 + n^2}{n^2 + n\sqrt{n^2 - 1}}} = \\
= \lim_{n \to \infty} \sqrt{\frac{n^2}{n^2\left( 1 + \sqrt{1 - \frac{1}{n^2}} \right)}} = \frac{\sqrt{2}}{2}
\end{array}
$$

### 2.73

$$
\begin{array}{l}
\lim_{n \to \infty}  n(\sqrt{2n^2 + 1} - \sqrt{2n^2 - 1}) = \lim_{n \to \infty} \frac{n(2n^2 + 1 - 2n^2 + 1)}{\sqrt{2n^2 + 1} + \sqrt{2n^2 - 1}} = \\
= \lim_{n \to \infty} \frac{2n}{n\left( \sqrt{2 + \frac{1}{n^2}} + \sqrt{2 - \frac{1}{n^2}} \right)} = \frac{\sqrt{2}}{2} \\
\end{array}
$$

### 2.74

$$
\lim_{n \to \infty} \sqrt[n]{2n^3 - 3n^2 + 15} = \lim_{n \to \infty} \sqrt[n]{2} \sqrt[n]{n^3} \sqrt[n]{2 - \frac{3}{n} + \frac{15}{n^3}} = 1
$$

### 2.75

$$
\begin{array}{l}
\lim_{n \to \infty}  \sqrt{n^{10} - 2n^2 + 2} = \lim_{n \to \infty} n^5 \sqrt{1 - \frac{2}{n^8} + \frac{2}{n^{10}}} = \infty
\end{array}
$$

### 2.76

$$
\begin{array}{l}
\lim_{n \to \infty} \frac{\sqrt{n}}{\sqrt{n + \sqrt{n + \sqrt{n}}}} = \lim_{n \to \infty}  \frac{\sqrt{n}}{\sqrt{n + \sqrt{n}\left( \sqrt{1 + \frac{1}{\sqrt{n}}} \right)}} =  \\
= \lim_{n \to \infty} \frac{\sqrt{n}}{\sqrt{n} \sqrt{1 + \frac{1}{\sqrt{n}} \sqrt{1 + \frac{1}{\sqrt{n}}}}} = 1
\end{array}
$$

### 2.77

$$
\begin{array}{l}
\lim_{n \to \infty} \frac{\cos(n^3)}{2n} - \frac{3n}{6n + 1} = 0 - \frac{1}{2} = -\frac{1}{2}
\end{array}
$$

### 2.78

$$
\lim_{n \to \infty} 2^{-n} a \cos(n\pi) = 0
$$

### 2.79

$$
\begin{array}{l}
\lim_{n \to \infty} \frac{n\sin(n!)}{n^2 + 1} = 0
\end{array}
$$

### 2.80

$$
\begin{array}{l}
\lim_{n \to \infty}  \sin(n!) \frac{n}{n^2 + 1} + \frac{2n}{3n + 1} \cdot \frac{n}{1 - 3n} = \\
= \lim_{n \to \infty} \sin(n!) \frac{n}{n^2 + 1} + \frac{-2n^2}{9n^2 - 1}=  \\
= \lim_{n \to \infty} \sin(n!) \frac{n^2\left( \frac{1}{n} \right)}{n^2\left( 1 + \frac{1}{n^2} \right)} + \frac{n^2(-2)}{n^2\left( 9 - \frac{1}{n^2} \right)} = \\
\sin((n \rightarrow \infty)!) \cdot 0 - \frac{2}{9} = -\frac{2}{9}
\end{array}
$$

### 2.81

$$
\begin{array}{l}
\lim_{n \to \infty} \frac{2n}{2n^2 - 1} \cos \left( \frac{n+1}{2n - 1} \right) - \frac{n}{1-2n} \cdot \frac{n-(-1)^n}{n^2 + 1} =  \\
\lim_{n \to \infty} \frac{\left( n^2\left( \frac{2}{n} \right) \right)}{n^2\left( 2 - \frac{1}{n^2} \right)} \cos \left( \frac{n\left( 1 + \frac{1}{n} \right)}{n\left( 2 - \frac{1}{n} \right)} \right) - \frac{n}{n \left(-2 + \frac{1}{n} \right)} \cdot \frac{n^2\left( \frac{1}{n} -\frac{(-1)^n}{n^2}\right)}{n^2\left( 1 + \frac{1}{n^2} \right)} =  \\
0 +\frac{1}{2} \cdot 0 = 0
\end{array}
$$

### 2.82

$$
\begin{array}{l}
\lim_{n \to \infty} n (\ln(n+1) - \ln(n)) =  \\
= \lim_{n \to \infty}  n\ln\left( \frac{n+1}{n} \right) =  \\
= \lim_{n \to \infty} \ln\left( 1 + \frac{1}{n} \right)^n =  \\
= 1
\end{array}
$$

### 2.83

$$
\begin{array}{l}
\lim_{n \to \infty}  \frac{\ln\left( 1 + \frac{3}{n} \right)}{\frac{1}{n}} =  \\
= \lim_{n \to \infty} \ln\left( 1 + \frac{3}{n} \right)^n = 3
\end{array}
$$

### 2.84

$$
\begin{array}{l}
\lim_{n \to \infty}  \frac{\log_{2}{n^5}}{\log_{8}{n}} = \lim_{n \to \infty} \frac{5\log_{2}{n}}{\frac{1}{3}\log_{2}{n}} = 15
\end{array}
$$

### 2.85

$$
\begin{array}{l}
\lim_{n \to \infty}  \frac{9^{\log_{3}{n}}}{4^{\log_{2}{n}}} = 1
\end{array}
$$

### 2.86

$$
\begin{array}{l}
\lim_{n \to \infty} \frac{n^3}{2^n} \\
u_{n} = \frac{n^3}{2^n} \\
u_{n+1} = \frac{(n+1)^3}{2^{n+1}} \\
\lim_{n \to \infty} \frac{|u_{n+1}|}{|u_{n}|} = \lim_{n \to \infty} \frac{\frac{(n+1)^3}{2^{n+1}}}{\frac{n^3}{2^n}} =  \\
\lim_{n \to \infty} \frac{(n+1)^3}{2n^3} = \frac{n^3 -3n^2 + 3n + 1}{2n^3} =  \\
= \frac{1}{2} < 1 \implies \lim_{n \to \infty} u_{n} = 0
\end{array}
$$

### 2.87

$$
\begin{array}{l}
\lim_{n \to \infty} \frac{27^{\log_{3}{n}}}{16^{\log_{2}{n}}} = \lim_{n \to \infty} \frac{n^3}{n^4} = \\
= \lim_{n \to \infty} \frac{1}{n} = 0
\end{array}
$$

### 2.88

$$
\begin{array}{l}
u_{n} = \frac{n!}{n^n}  \\
u_{n} = \frac{1 \cdot 2 \cdot 3 \cdot \dotsc \cdot n}{n \cdot n \cdot \dotsc \cdot n} = \frac{1}{n} \frac{2 \cdot 3 \cdot \dotsc \cdot n}{n \cdot n \cdot \dotsc \cdot n} \begin{cases}
= 1, \ n\in \left\{ 1, 2 \right\}  \\
< \frac{1}{n}, \ n \in N \wedge n > 2
\end{cases} \\
a_{n} = 0 \\
b_{n} = \frac{1}{n}  \\
a_{n} \leq u_{n} \leq b_{n} \\
\lim_{n \to \infty} a_{n} = \lim_{n \to \infty} b_{n} = 0 \implies \lim_{n \to \infty} u_{n} = 0
\end{array}
$$

### 2.89

$$
\begin{array}{l}
u_{n} = \frac{2^n \cdot 3^{2n}}{n!} = \frac{18^n}{n!} \\
u_{n+1} = \frac{18^{n+1}}{(n+1)!} \\
\lim_{n \to \infty} \frac{|u_{n+1}|}{|u_{n}|} = \lim_{n \to \infty} \frac{18^{n+1}}{18^{n} \cdot (n+1)} = 0
\end{array}
$$

### 2.90

$$
\begin{array}{l}
u_{n} = \left( 1 - \frac{2}{2^2} \right)\left( 1 - \frac{1}{3^2} \right) \left( 1 - \frac{1}{4^2} \right) \dots \left( 1 - \frac{1}{n^2} \right) = \\
= \left( \frac{2^2 - 1}{2^2} \right)\left( \frac{3^2 - 1}{3^2} \right)\left( \frac{4^2 - 1}{4^2} \right) \dots \left( \frac{n^2 - 1}{n^2} \right) = \\
= \frac{2 - 1}{2} \cdot \frac{2+1}{2} \cdot \frac{3 - 1}{3} \cdot \frac{3 + 1}{3} \dots \frac{n - 1}{n} \cdot \frac{n + 1}{n} = \\
= \frac{1}{2} \cdot \frac{3}{2} \cdot \frac{2}{3} \cdot \frac{4}{3} \cdot \dotsc \cdot \frac{n}{n-1} \cdot 
\frac{n-1}{n} \cdot \frac{n+1}{n}  = \\
= \frac{1}{2} \cdot \frac{n+1}{n} \\
\lim_{n \to \infty}  u_{n} = \frac{1}{2}
\end{array}
$$

### 2.91 Okazać że

$\sqrt[n]{|u_{n}|} \rightarrow q < 1, \text{to } u_{n} \rightarrow 0$

$$
\begin{array}{l}
\sqrt[n]{|u_{n}|} \rightarrow q < 1 \implies \forall \varepsilon, \exists N, \forall n \geq N: \sqrt[n]{|u_{n}|} \leq q + \varepsilon \\
 \\
|u_{n}| \leq (q + \varepsilon)^n \\
\text{Choose } q + \varepsilon < 1 \\
|u_{n}| \leq (q + \varepsilon)^n < 1 \\
\lim_{n \to \infty} (q + \varepsilon)^n = 0 \\
 \\
0 \leq |u_{n}| \leq (q + \varepsilon)^n \\
\lim_{n \to \infty} 0 = \lim_{n \to \infty} (q + \varepsilon)^n = 0  \\ \\

\text{Thus} \\
\lim_{n \to \infty} |u_{n}| =0 \\
-|u_{n}| <= u_{n} \leq |u_{n}| \implies \lim_{n \to \infty} u_{n} = 0 \  \square
\end{array}
$$

## Specjalne
### 1.
$$
u_{n}  \left( 1 + \tan\left( \frac{6n}{4n^2-1} \right) \right)^{5n}
$$

#### Nielegalny sposób
$$
\begin{array}{l}
e^{ix} = \cos(x) - i\sin(x) \\
e^{-ix} = \cos(x) + i\sin(x) \\
e^{ix} - e^{-ix} = 2i\sin(x) \\
\sin(x) = \frac{e^{ix} - e^{-ix}}{2i}
\end{array}
$$

$$
\begin{array}{l} \\
\text{Jeżeli wiemy że} \lim_{n \to \infty} x_{n} = 0  \\
\lim_{n \to \infty} \frac{\sin(x_{n})}{x_{n}} = \lim_{n \to \infty} \frac{e^{ix_{n}} -e ^{-ix_{n}}}{2ix_{n}} =  \\
= \lim_{n \to \infty}  \frac{\left( \frac{d}{dx_{n}} (e^{ix_{n}} - e^{-ix_{n}})\right)}{\frac{d}{dx_{n}} 2ix_{n}} =  \\
= \lim_{n \to \infty} \frac{ie^{ix_{n}} + ie^{-ix_{n}}}{2i} = \frac{2i}{2i} = 1
\end{array}
$$


## Trywialne

$$
\begin{array}{l}

\end{array}
$$