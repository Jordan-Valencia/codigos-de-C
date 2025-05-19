#include <stdio.h>

// Función para imprimir el vector
void imprimirVector(int vector[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", vector[i]);
    }
    printf("\n");
}

// Bubble Sort
void ordenamientoBurbuja(int vector[], int n, int *comparaciones, int *movimientos) {
    *comparaciones = 0;
    *movimientos = 0;
    
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            (*comparaciones)++;
            if (vector[j] > vector[j + 1]) {
                // Intercambio
                int temp = vector[j];
                vector[j] = vector[j + 1];
                vector[j + 1] = temp;
                (*movimientos)++;
                
                printf("Movimiento en Ordenamiento Burbuja: ");
                imprimirVector(vector, n);
            }
        }
    }
}

// Insertion Sort
void ordenamientoInsercion(int vector[], int n, int *comparaciones, int *movimientos) {
    *comparaciones = 0;
    *movimientos = 0;
    
    for (int i = 1; i < n; i++) {
        int clave = vector[i];
        int j = i - 1;
        int posicionFinal = j;
        
        for (; j >= 0; j--) {
            (*comparaciones)++;
            if (vector[j] > clave) {
                vector[j + 1] = vector[j];
                (*movimientos)++;
                posicionFinal = j;
                
                printf("Movimiento en Ordenamiento por Inserción: ");
                imprimirVector(vector, n);
            } else {
                break;
            }
        }
        
        if (posicionFinal != i - 1) {
            vector[posicionFinal] = clave;
            (*movimientos)++;
            
            printf("Movimiento en Ordenamiento por Inserción: ");
            imprimirVector(vector, n);
        }
    }
}

// Selection Sort
void ordenamientoSeleccion(int vector[], int n, int *comparaciones, int *movimientos) {
    *comparaciones = 0;
    *movimientos = 0;
    
    for (int i = 0; i < n - 1; i++) {
        int indiceMinimo = i;
        
        for (int j = i + 1; j < n; j++) {
            (*comparaciones)++;
            if (vector[j] < vector[indiceMinimo]) {
                indiceMinimo = j;
            }
        }
        
        if (indiceMinimo != i) {
            int temp = vector[indiceMinimo];
            vector[indiceMinimo] = vector[i];
            vector[i] = temp;
            (*movimientos)++;
            
            printf("Movimiento en Ordenamiento por Selección: ");
            imprimirVector(vector, n);
        }
    }
}

int main() {
    int mejorCaso[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int peorCaso[] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    int casoPromedio[] = {7, 9, 1, 5, 3, 6, 0, 2, 8, 4};
    int n = 10;
    int opcion;
    int comparaciones, movimientos;
    
    printf("Seleccione el método de ordenación:\n");
    printf("1. Ordenamiento Burbuja\n");
    printf("2. Ordenamiento por Inserción\n");
    printf("3. Ordenamiento por Selección\n");
    printf("Opción: ");
    scanf("%d", &opcion);
    
    // Crear copias de los vectores originales
    int mejorCasoCopia[10], peorCasoCopia[10], casoPromedioCopia[10];
    for (int i = 0; i < n; i++) {
        mejorCasoCopia[i] = mejorCaso[i];
        peorCasoCopia[i] = peorCaso[i];
        casoPromedioCopia[i] = casoPromedio[i];
    }
    
    if (opcion == 1) { // Bubble Sort
        printf("\nORDENAMIENTO BURBUJA: \n");
        
        printf("\nMejor escenario inicial: ");
        imprimirVector(mejorCasoCopia, n);
        ordenamientoBurbuja(mejorCasoCopia, n, &comparaciones, &movimientos);
        printf("Mejor escenario - Comparaciones: %d, Movimientos: %d\n", comparaciones, movimientos);
        
        printf("\nPeor escenario inicial: ");
        imprimirVector(peorCasoCopia, n);
        ordenamientoBurbuja(peorCasoCopia, n, &comparaciones, &movimientos);
        printf("Peor escenario - Comparaciones: %d, Movimientos: %d\n", comparaciones, movimientos);
        
        printf("\nCaso promedio inicial: ");
        imprimirVector(casoPromedioCopia, n);
        ordenamientoBurbuja(casoPromedioCopia, n, &comparaciones, &movimientos);
        printf("Caso promedio - Comparaciones: %d, Movimientos: %d\n", comparaciones, movimientos);
    } else if (opcion == 2) { // Insertion Sort
        printf("\nORDENAMIENTO POR INSERCION: \n");
        
        printf("\nMejor escenario inicial: ");
        imprimirVector(mejorCasoCopia, n);
        ordenamientoInsercion(mejorCasoCopia, n, &comparaciones, &movimientos);
        printf("Mejor escenario - Comparaciones: %d, Movimientos: %d\n", comparaciones, movimientos);
        
        printf("\nPeor escenario inicial: ");
        imprimirVector(peorCasoCopia, n);
        ordenamientoInsercion(peorCasoCopia, n, &comparaciones, &movimientos);
        printf("Peor escenario - Comparaciones: %d, Movimientos: %d\n", comparaciones, movimientos);
        
        printf("\nCaso promedio inicial: ");
        imprimirVector(casoPromedioCopia, n);
        ordenamientoInsercion(casoPromedioCopia, n, &comparaciones, &movimientos);
        printf("Caso promedio - Comparaciones: %d, Movimientos: %d\n", comparaciones, movimientos);
    } else if (opcion == 3) { // Selection Sort
        printf("\nORDENAMIENTO POR SELECCIÓN: \n");
        
        printf("\nMejor escenario inicial: ");
        imprimirVector(mejorCasoCopia, n);
        ordenamientoSeleccion(mejorCasoCopia, n, &comparaciones, &movimientos);
        printf("Mejor escenario - Comparaciones: %d, Movimientos: %d\n", comparaciones, movimientos);
        
        printf("\nPeor escenario inicial: ");
        imprimirVector(peorCasoCopia, n);
        ordenamientoSeleccion(peorCasoCopia, n, &comparaciones, &movimientos);
        printf("Peor escenario - Comparaciones: %d, Movimientos: %d\n", comparaciones, movimientos);
        
        printf("\nCaso promedio inicial: ");
        imprimirVector(casoPromedioCopia, n);
        ordenamientoSeleccion(casoPromedioCopia, n, &comparaciones, &movimientos);
        printf("Caso promedio - Comparaciones: %d, Movimientos: %d\n", comparaciones, movimientos);
    } else {
        printf("Opción no válida\n");
        return 1;
    }
    
    return 0;
}
