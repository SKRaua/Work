## Notation

| General Notation                                  | Description                                                                                                                                                                 | Python (if applicable) |
| :------------------------------------------------ | :-------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | :--------------------- |
| $a$                                             | scalar, non bold                                                                                                                                                            |                        |
| $\mathbf{a}$                                    | vector, bold                                                                                                                                                                |                        |
| $\mathbf{A}$                                    | matrix, bold capital                                                                                                                                                        |                        |
| **Regression**                              |                                                                                                                                                                             |                        |
| $\mathbf{X}$                                    | training example matrix                                                                                                                                                     | `X_train`            |
| $\mathbf{y}$                                    | training example targets                                                                                                                                                    | `y_train`            |
| $\mathbf{x}^{(i)}$, $y^{(i)}$                 | $i_{th}$ Training Example                                                                                                                                                 | `X[i]`, `y[i]`     |
| $m$                                             | number of training examples                                                                                                                                                 | `m`                  |
| $n$                                             | number of features in each example                                                                                                                                          | `n`                  |
| $\mathbf{w}$                                    | parameter: weight                                                                                                                                                           | `w`                  |
| $b$                                             | parameter: bias                                                                                                                                                             | `b`                  |
| $f_{\mathbf{w},b}(\mathbf{x}^{(i)})$            | The result of the model evaluation at$\mathbf{x}^{(i)}$ parameterized by $\mathbf{w},b$: $f_{\mathbf{w},b}(\mathbf{x}^{(i)}) = \mathbf{w} \cdot \mathbf{x}^{(i)} + b$ | `f_wb`               |
| $\frac{\partial J(\mathbf{w},b)}{\partial w_j}$ | the gradient or partial derivative of cost with respect to a parameter$w_j$                                                                                               | `dj_dw[j]`           |
| $\frac{\partial J(\mathbf{w},b)}{\partial b}$   | the gradient or partial derivative of cost with respect to a parameter$b$                                                                                                 | `dj_db`              |


`<a name="toc_15456_5"></a>`

## Gradient Descent With Multiple Variables

Here are the equations you developed in the last lab on gradient descent for multiple variables.:

$$
\begin{align*} \text{repeat}&\text{ until convergence:} \; \lbrace \newline\;
& w_j := w_j -  \alpha \frac{\partial J(\mathbf{w},b)}{\partial w_j} \tag{1}  \; & \text{for j = 0..n-1}\newline
&b\ \ := b -  \alpha \frac{\partial J(\mathbf{w},b)}{\partial b}  \newline \rbrace
\end{align*}
$$

where, n is the number of features, parameters $w_j$,  $b$, are updated simultaneously and where

$$
\begin{align}
\frac{\partial J(\mathbf{w},b)}{\partial w_j}  &= \frac{1}{m} \sum\limits_{i = 0}^{m-1} (f_{\mathbf{w},b}(\mathbf{x}^{(i)}) - y^{(i)})x_{j}^{(i)} \tag{2}  \\
\frac{\partial J(\mathbf{w},b)}{\partial b}  &= \frac{1}{m} \sum\limits_{i = 0}^{m-1} (f_{\mathbf{w},b}(\mathbf{x}^{(i)}) - y^{(i)}) \tag{3}
\end{align}
$$

* m is the number of training examples in the data set
* $f_{\mathbf{w},b}(\mathbf{x}^{(i)})$ is the model's prediction, while $y^{(i)}$ is the target value
