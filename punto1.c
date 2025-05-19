#include <stdio.h>

int busquedaBinaria(int vector[], int n, int valor, int *comparaciones, int *movimientos) {
    int izquierda = 0;
    int derecha = n - 1;
    int medio;
    
    *comparaciones = 0;
    *movimientos = 0;
    
    for (int i = 0; izquierda <= derecha; i++) {
        medio = izquierda + (derecha - izquierda) / 2;
        (*comparaciones)++;
        
        if (vector[medio] == valor) {
            return medio;
        }
        
        if (vector[medio] < valor) {
            izquierda = medio + 1;
            (*movimientos)++;
        } else {
            derecha = medio - 1;
            (*movimientos)++;
        }
    }
    
    return -1;
}

int main() {
    int V[] = {2, 3, 4, 5, 6, 8, 13, 17, 19, 23, 25, 26};
    int n = sizeof(V) / sizeof(V[0]);
    int valorBuscado = 17;
    int comparaciones, movimientos;
    
    int posicion = busquedaBinaria(V, n, valorBuscado, &comparaciones, &movimientos);
    
    printf("Vector: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", V[i]);
    }
    printf("\n");
    
    if (posicion != -1) {
        printf("El valor %d se encuentra en la posición %d\n", valorBuscado, posicion);
    } else {
        printf("El valor %d no se encuentra en el vector\n", valorBuscado);
    }
    
    printf("Número de comparaciones: %d\n", comparaciones);
    printf("Número de movimientos: %d\n", movimientos);
    
    return 0;
}
