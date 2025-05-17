#include <stdio.h>

// Función para imprimir el vector
void imprimirVector(int vector[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", vector[i]);
    }
    printf("\n");
}

// Comb Sort
void ordenamientoPeine(int vector[], int n, double reduccion, int distanciaInicial, int *comparaciones, int *movimientos) {
    *comparaciones = 0;
    *movimientos = 0;
    
    int distancia;
    if (distanciaInicial == 0) {
        distancia = n;
    } else {
        distancia = distanciaInicial;
    }
    
    int intercambiado = 1;
    
    for (; distancia > 1 || intercambiado;) {
        // Actualizar la distancia
        if (distancia > 1) {
            distancia = (int)(distancia / reduccion);
            if (distancia < 1) {
                distancia = 1;
            }
        }
        
        intercambiado = 0;
        
        // Comparar elementos con la distancia actual
        for (int i = 0; i < n - distancia; i++) {
            (*comparaciones)++;
            if (vector[i] > vector[i + distancia]) {
                // Intercambio
                int temp = vector[i];
                vector[i] = vector[i + distancia];
                vector[i + distancia] = temp;
                (*movimientos)++;
                intercambiado = 1;
                
                printf("Movimiento (distancia=%d): ", distancia);
                imprimirVector(vector, n);
            }
        }
    }
}

int main() {
    int mejorCaso[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int peorCaso[] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    int casoPromedio[] = {7, 9, 1, 5, 3, 6, 0, 2, 8, 4};
    int n = 10;
    int opcion, distanciaInicial = 0;
    double reduccion;
    int comparaciones, movimientos;
    
    printf("Seleccione el factor de reducción:\n");
    printf("1. 1.3\n");
    printf("2. 1.2\n");
    printf("3. 1.5\n");
    printf("4. 1.0 (con distancia inicial personalizada)\n");
    printf("Opción: ");
    scanf("%d", &opcion);
    
    if (opcion == 1) {
        reduccion = 1.3;
    } else if (opcion == 2) {
        reduccion = 1.2;
    } else if (opcion == 3) {
        reduccion = 1.5;
    } else if (opcion == 4) {
        reduccion = 1.0;
        printf("\nSeleccione la distancia inicial:\n");
        printf("1. 7\n");
        printf("2. 6\n");
        printf("3. 5\n");
        printf("4. 4\n");
        printf("Opción: ");
        int opcionDistancia;
        scanf("%d", &opcionDistancia);
        
        if (opcionDistancia == 1) {
            distanciaInicial = 7;
        } else if (opcionDistancia == 2) {
            distanciaInicial = 6;
        } else if (opcionDistancia == 3) {
            distanciaInicial = 5;
        } else if (opcionDistancia == 4) {
            distanciaInicial = 4;
        } else {
            printf("Opción no válida\n");
            return 1;
        }
    } else {
        printf("Opción no válida\n");
        return 1;
    }
    
    // Crear copias de los vectores originales
    int mejorCasoCopia[10], peorCasoCopia[10], casoPromedioCopia[10];
    
    if (distanciaInicial == 0) {
        printf("\n--- ORDENAMIENTO PEINE (reduccion=%.1f, distancia inicial=%d) ---\n", 
               reduccion, n);
    } else {
        printf("\n--- ORDENAMIENTO PEINE (reduccion=%.1f, distancia inicial=%d) ---\n", 
               reduccion, distanciaInicial);
    }
    
    // Mejor escenario
    for (int i = 0; i < n; i++) {
        mejorCasoCopia[i] = mejorCaso[i];
    }
    printf("\nMejor escenario inicial: ");
    imprimirVector(mejorCasoCopia, n);
    ordenamientoPeine(mejorCasoCopia, n, reduccion, distanciaInicial, &comparaciones, &movimientos);
    printf("Mejor escenario - Comparaciones: %d, Movimientos: %d\n", comparaciones, movimientos);
    
    // Peor escenario
    for (int i = 0; i < n; i++) {
        peorCasoCopia[i] = peorCaso[i];
    }
    printf("\nPeor escenario inicial: ");
    imprimirVector(peorCasoCopia, n);
    ordenamientoPeine(peorCasoCopia, n, reduccion, distanciaInicial, &comparaciones, &movimientos);
    printf("Peor escenario - Comparaciones: %d, Movimientos: %d\n", comparaciones, movimientos);
    
    // Caso promedio
    for (int i = 0; i < n; i++) {
        casoPromedioCopia[i] = casoPromedio[i];
    }
    printf("\nCaso promedio inicial: ");
    imprimirVector(casoPromedioCopia, n);
    ordenamientoPeine(casoPromedioCopia, n, reduccion, distanciaInicial, &comparaciones, &movimientos);
    printf("Caso promedio - Comparaciones: %d, Movimientos: %d\n", comparaciones, movimientos);
    
    return 0;
}