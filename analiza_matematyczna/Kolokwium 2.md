## Pochodne
$$
\begin{array}{l}
(1)& \frac{d}{dx} (uv) &=& \frac{du}{dx} v + u \frac{dv}{dx} \\
(2)& \frac{d}{dx} \left( \frac{u}{v} \right) &=& \frac{\frac{du}{dx} v - u \frac{dv}{dx}}{v^2} \\
(3)& \frac{dy}{dx} &=& \frac{dy}{du} \frac{du}{dx} \\
(4)& \frac{d}{dx} x^n &=& n x^{n-1} \\
(5)& \frac{d}{dx} a^x &=& a^x \ln a \\
(6)& \frac{d}{dx} e^x &=& e^x \\
(7)& \frac{d}{dx} \log_{a}{x} &=& \frac{1}{x \ln a} \\
(8)& \frac{d}{dx} \ln x &=& \frac{1}{x} \\
(9)& \frac{d}{dx} \sin x &=& \cos x \\
(10)& \frac{d}{dx} \cos x &=& - \sin x \\
(11)& \frac{d}{dx} \tan x &=& \sec^2 x \\
(12)& \frac{d}{dx} \cot x &=& - \csc^2 x  \\
(13)& \frac{d}{dx} \sec x &=& \sec x \tan x \\
(14)& \frac{d}{dx} \csc x &=& - \csc x \cot x \\
(15)& \frac{d}{dx} \sin^{-1} x &=& \frac{1}{\sqrt{1 - x^2}} \\
(16)& \frac{d}{dx} \tan^{-1} x &=& \frac{1}{1 + x^2} \\
\end{array}
$$

## Symbole nieoznaczone
$[\infty - \infty], [0 \cdot \infty], \left[ \frac{\infty}{\infty} \right], [\frac{0}{0}], 0^0, \infty^0, 0^\infty$

## Asymptoty

1. Prosta $x = c$ jest asymptotą pionową krzywej gdy, jest jej asymptotą lewostronną i prawostronną, czyli:
$$
\begin{array}{l}
&(\lim_{x \to c^-} f(x) = -\infty \vee \lim_{x \to c^+} f(x) = +\infty) \\
\wedge &(\lim_{x \to c^-} f(x) = \infty \vee \lim_{x \to c^+} f(x) = -\infty)
\end{array}
$$
2. Prosta o równaniu $y = mx + n$ jest asymptotą ukośną gdy $m \neq 0$, gdy następujące granice są istnieją i są skończone:
	1. $m = \lim_{x \to \pm\infty} \frac{f(x)}{x}$
	2. $n = \lim_{x \to \pm\infty} = (f(x) - mx)$
3. Prosta jest asymptotą poziomą gdy spełnia warunki asymptoty poziomej ale $m = 0$

## Wklęsłość i wypukłość funkcji

Załóżmy że funkcja $f(x)$ ma pochodną na przedziale $(a; b)$ mówimy że krzywa $y = f(x)$ jest:

1. Wypukła na przedziale $(a; b)$ wtedy i tylko wtedy, gdy dla każdego $x_{0} \in (a; b)$ styczna poprowadzona do tej krzywej w punkcie $(x_{0}, f(x_{0}))$ jest położona pod tą krzywą.
2. Wklęsła na przedziale $(a; b)$ wtedy i tylko wtedy, gdy dla każdego $x_{0} \in (a; b)$ styczna poprowadzona do tej krzywej w punkcie $(x_{0}; f(x_{0}))$ jest położona nad tą krzywą.

Jeżeli $f(x)$ dla każdego $x \in (a; b)$:
- $f''(x) < 0$, to krzywa $y = f(x)$ jest wklęsła na przedziale $(a; b)$
- $f''(x) > 0$, to krzywa $y = f(x)$ jest wypukła na przedziale $(a; b)$

## Szereg Taylora
$$
f(x) = \sum_{k=1}^{n-1} \frac{f^{(k)} (a)}{k!} + \frac{f^{(n)} (c)}{n!}(x-a)^n
$$
Dla $a = 0$ otrzymujemy szereg Maclaurina

