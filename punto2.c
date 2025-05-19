#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Función de búsqueda binaria
int busquedaBinaria(int vector[], int n, int valor) {
    int izquierda = 0;
    int derecha = n - 1;
    int medio;
    
    for (int i = 0; izquierda <= derecha; i++) {
        medio = izquierda + (derecha - izquierda) / 2;
        
        if (vector[medio] == valor) {
            return medio;
        }
        
        if (vector[medio] < valor) {
            izquierda = medio + 1;
        } else {
            derecha = medio - 1;
        }
    }
    
    return -1;
}

// Bubble Sort
void ordenamientoBurbuja(int vector[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (vector[j] > vector[j + 1]) {
                int temp = vector[j];
                vector[j] = vector[j + 1];
                vector[j + 1] = temp;
            }
        }
    }
}

// Insertion Sort
void ordenamientoInsercion(int vector[], int n) {
    int i, clave, j;
    for (i = 1; i < n; i++) {
        clave = vector[i];
        j = i - 1;
        
        for (int i = 0; j >= 0 && vector[j] > clave; j--) {
            vector[j + 1] = vector[j];
        }
        vector[j + 1] = clave;
    }
}

// Selection Sort
void ordenamientoSeleccion(int vector[], int n) {
    int i, j, indiceMinimo;
    
    for (i = 0; i < n - 1; i++) {
        indiceMinimo = i;
        for (j = i + 1; j < n; j++) {
            if (vector[j] < vector[indiceMinimo]) {
                indiceMinimo = j;
            }
        }
        
        int temp = vector[indiceMinimo];
        vector[indiceMinimo] = vector[i];
        vector[i] = temp;
    }
}

// Comb Sort
void ordenamientoPeine(int vector[], int n) {
    int distancia = n;
    double reduccion = 1.2;
    int intercambiado = 1;
    
    for (int j = 0; distancia > 1 || intercambiado;j++) {
        distancia = (int)(distancia / reduccion);
        if (distancia < 1) {
            distancia = 1;
        }
        
        intercambiado = 0;
        
        for (int i = 0; i < n - distancia; i++) {
            if (vector[i] > vector[i + distancia]) {
                int temp = vector[i];
                vector[i] = vector[i + distancia];
                vector[i + distancia] = temp;
                intercambiado = 1;
            }
        }
    }
}

int main() {
    int vector[20];
    int n = 20;
    int valorBuscado, opcion;
    
    printf("Ingrese 20 números:\n");
    for (int i = 0; i < n; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &vector[i]);
    }
    
    printf("\nIngrese el valor a buscar: ");
    scanf("%d", &valorBuscado);
    
    printf("\nSeleccione el método de ordenación:\n");
    printf("1. Ordenamiento Burbuja\n");
    printf("2. Ordenamiento por Inserción\n");
    printf("3. Ordenamiento por Selección\n");
    printf("4. Ordenamiento Peine (distancia=1.2)\n");
    printf("Opción: ");
    scanf("%d", &opcion);
    
    printf("\nVector original: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", vector[i]);
    }
    printf("\n");
    
    // Ordenar según la opción seleccionada
    if (opcion == 1) {
        ordenamientoBurbuja(vector, n);
        printf("Vector ordenado con Ordenamiento Burbuja\n");
    } else if (opcion == 2) {
        ordenamientoInsercion(vector, n);
        printf("Vector ordenado con Ordenamiento por Inserción\n");
    } else if (opcion == 3) {
        ordenamientoSeleccion(vector, n);
        printf("Vector ordenado con Ordenamiento por Selección\n");
    } else if (opcion == 4) {
        ordenamientoPeine(vector, n);
        printf("Vector ordenado con Ordenamiento Peine\n");
    } else {
        printf("Opción no válida\n");
        return 1;
    }
    
    printf("Vector ordenado: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", vector[i]);
    }
    printf("\n");
    
    // Buscar el valor usando búsqueda binaria
    int posicion = busquedaBinaria(vector, n, valorBuscado);
    
    if (posicion != -1) {
        printf("El valor %d se encuentra en la posición %d\n", valorBuscado, posicion);
    } else {
        printf("El valor %d no se encuentra en el vector\n", valorBuscado);
    }
    
    return 0;
}
