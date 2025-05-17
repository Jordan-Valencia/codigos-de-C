# 🔍 Algoritmos de Búsqueda y Ordenamiento en C

<div align="center">
  
![C](https://img.shields.io/badge/Lenguaje-C-blue)
![Algoritmos](https://img.shields.io/badge/Tema-Algoritmos-orange)
![Versión](https://img.shields.io/badge/Versión-1.0-green)

</div>

<p align="center">
  <b>Una colección de implementaciones de algoritmos clásicos de búsqueda y ordenamiento</b>
</p>

---

## 📋 Contenido

- [🔎 Programa 1: Búsqueda Binaria](#-programa-1-búsqueda-binaria)
- [🔢 Programa 2: Ordenamiento y Búsqueda de Números](#-programa-2-ordenamiento-y-búsqueda-de-números)
- [📊 Programa 3: Comparación de Algoritmos de Ordenamiento](#-programa-3-comparación-de-algoritmos-de-ordenamiento)
- [🧮 Programa 4: Análisis del Ordenamiento Peine](#-programa-4-análisis-del-ordenamiento-peine)

---

## 🔎 Programa 1: Búsqueda Binaria

<div align="center">
  <h3>Búsqueda eficiente en vectores ordenados</h3>
</div>

Este programa implementa el algoritmo de búsqueda binaria para encontrar un valor específico en un vector ordenado.

### ✨ Características:

- ✅ Implementa la búsqueda binaria en una función separada
- ✅ Cuenta y muestra el número de comparaciones realizadas
- ✅ Cuenta y muestra el número de movimientos realizados
- ✅ Busca el número 17 en un vector predefinido
- ✅ Muestra la posición donde se encuentra el valor (si existe)

### 🖥️ Ejemplo de salida:

```
Vector: 2 3 4 5 6 8 13 17 19 23 25 26 
El valor 17 se encuentra en la posición 7
Número de comparaciones: 3
Número de movimientos: 2
```

---

## 🔢 Programa 2: Ordenamiento y Búsqueda de Números

<div align="center">
  <h3>Ordenamiento personalizado y búsqueda eficiente</h3>
</div>

Este programa solicita números al usuario, los ordena utilizando uno de cuatro algoritmos de ordenamiento diferentes, y luego busca un valor específico utilizando búsqueda binaria.

### ✨ Características:

- ✅ Solicita 20 números al usuario
- ✅ Implementa 4 algoritmos de ordenamiento:
  - 🔄 Ordenamiento Burbuja (Bubble Sort)
  - 🔄 Ordenamiento por Inserción (Insertion Sort)
  - 🔄 Ordenamiento por Selección (Selection Sort)
  - 🔄 Ordenamiento Peine (Comb Sort)
- ✅ Permite al usuario seleccionar el método de ordenamiento
- ✅ Ordena el vector según el método seleccionado
- ✅ Busca un valor usando búsqueda binaria y muestra su posición

### 🖥️ Ejemplo de uso:

```
Ingrese 20 números:
Número 1: 45
Número 2: 23
...
Número 20: 67

Ingrese el valor a buscar: 23

Seleccione el método de ordenación:
1. Ordenamiento Burbuja
2. Ordenamiento por Inserción
3. Ordenamiento por Selección
4. Ordenamiento Peine (distancia=1.2)
Opción: 1

Vector original: 45 23 ... 67
Vector ordenado con Ordenamiento Burbuja
Vector ordenado: 3 7 ... 89
El valor 23 se encuentra en la posición 5
```

---

## 📊 Programa 3: Comparación de Algoritmos de Ordenamiento

<div align="center">
  <h3>Análisis comparativo de eficiencia</h3>
</div>

Este programa compara el rendimiento de tres algoritmos de ordenamiento diferentes (Burbuja, Inserción y Selección) en tres escenarios distintos: mejor caso, peor caso y caso promedio.

### ✨ Características:

- ✅ Implementa tres algoritmos de ordenamiento:
  - 🔄 Ordenamiento Burbuja
  - 🔄 Ordenamiento por Inserción
  - 🔄 Ordenamiento por Selección
- ✅ Ofrece un menú para seleccionar el algoritmo a analizar
- ✅ Cuenta y muestra el número de comparaciones para cada escenario
- ✅ Cuenta y muestra el número de movimientos para cada escenario
- ✅ Muestra el vector después de cada movimiento
- ✅ Prueba con tres escenarios:

| Escenario | Vector |
|-----------|--------|
| ✅ Mejor caso | `1, 2, 3, 4, 5, 6, 7, 8, 9, 10` |
| ❌ Peor caso | `9, 8, 7, 6, 5, 4, 3, 2, 1, 0` |
| ⚠️ Caso promedio | `7, 9, 1, 5, 3, 6, 0, 2, 8, 4` |

### 🖥️ Ejemplo de salida:

```
Seleccione el método de ordenación:
1. Ordenamiento Burbuja
2. Ordenamiento por Inserción
3. Ordenamiento por Selección
Opción: 1

--- ORDENAMIENTO BURBUJA ---

Mejor escenario inicial: 1 2 3 4 5 6 7 8 9 10
Mejor escenario - Comparaciones: 45, Movimientos: 0

Peor escenario inicial: 9 8 7 6 5 4 3 2 1 0
Movimiento en Ordenamiento Burbuja: 8 9 7 6 5 4 3 2 1 0
...
Peor escenario - Comparaciones: 45, Movimientos: 45

Caso promedio inicial: 7 9 1 5 3 6 0 2 8 4
Movimiento en Ordenamiento Burbuja: 7 1 9 5 3 6 0 2 8 4
...
Caso promedio - Comparaciones: 45, Movimientos: 28
```

---

## 🧮 Programa 4: Análisis del Ordenamiento Peine

<div align="center">
  <h3>Estudio detallado del algoritmo Comb Sort</h3>
</div>

Este programa analiza el algoritmo de Ordenamiento Peine (Comb Sort) con diferentes factores de reducción y valores iniciales de distancia.

### ✨ Características:

- ✅ Implementa el algoritmo de Ordenamiento Peine
- ✅ Permite seleccionar diferentes factores de reducción:

| Factor | Descripción |
|--------|-------------|
| 1.3 | Factor de reducción estándar |
| 1.2 | Factor de reducción menor |
| 1.5 | Factor de reducción mayor |
| 1.0 | Con distancia inicial personalizada |

- ✅ Para el factor 1.0, permite seleccionar diferentes distancias iniciales:
  - 7
  - 6
  - 5
  - 4
- ✅ Cuenta y muestra el número de comparaciones para cada escenario
- ✅ Cuenta y muestra el número de movimientos para cada escenario
- ✅ Muestra el vector después de cada movimiento
- ✅ Prueba con tres escenarios (igual que en el Programa 3)

### 🖥️ Ejemplo de salida:

```
Seleccione el factor de reducción:
1. 1.3
2. 1.2
3. 1.5
4. 1.0 (con distancia inicial personalizada)
Opción: 2

--- ORDENAMIENTO PEINE (reduccion=1.2, distancia inicial=10) ---

Mejor escenario inicial: 1 2 3 4 5 6 7 8 9 10
Mejor escenario - Comparaciones: 19, Movimientos: 0

Peor escenario inicial: 9 8 7 6 5 4 3 2 1 0
Movimiento (distancia=8): 9 8 7 6 5 4 3 2 1 0
...
Peor escenario - Comparaciones: 19, Movimientos: 9

Caso promedio inicial: 7 9 1 5 3 6 0 2 8 4
Movimiento (distancia=8): 7 9 1 5 3 6 0 2 8 4
...
Caso promedio - Comparaciones: 19, Movimientos: 7
```

---
