% Lhisp
% Lisp en español para hispanohablantes

Lhisp (Lisp hispano), es un dialecto de la familia de lenguajes de
programación LISP, que son una implementación del Cálculo lambda. 

La diferencia específica de Lhisp es que está concebida para usuarios
hispanohablantes, usando palabras en español para nombrar las
funciones y tratando en lo posible de asemejarse al habla natural de
un usuario hispanohablante.

Instalación
===========

Por el momento el programa está en una fase muy temprana. Para
compilar bastará con:

```bash
cc -std=c99 -Wall repl.c -o lhisp
```

Características
===============

En su versión fundamental (0.0.0), Lhisp incluye un intérprete y una
REPL escritos en C.

- Lisp de juguete, tal como se explica en
  <http://www.buildyourownlisp.com/>

- Posibilidad de crear perfiles de usuario, o *ambientes* determinados
  cuyo uso quedará indicado de algún modo, o bien en el prompt o,
  mejor aún, en la salida devuelta por el programa: ";;
  usuario|ambiente|clausura =>".
      
Quehaceres
==========
En posteriores versiones, existe la voluntad de lograr los siguientes objetivos:

- Implementar nuevas funcionalidades extraídas de
  <https://github.com/kanaka/mal/>
- Implementar las especificaciones descritas en los *Lambda Papers* de
  Steele&Sussman, que se pueden encontrar en
  <http://library.readscheme.org/page1.html>





