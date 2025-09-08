# Espiral-Estructura-de-Datos
This program (spiral.c) generates an n × n matrix filled in spiral order.

Initialize boundaries: top, bottom, left, right and a counter num = 1.

Fill the matrix layer by layer:

- Left → Right (top row), then top++
- Top → Bottom (right col), then right--
- Right → Left (bottom row), then bottom--
- Bottom → Top (left col), then left++
- Repeat until num > n × n.
- Print the matrix.
