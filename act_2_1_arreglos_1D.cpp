// Act. 2.1 Algoritmos con Arreglos Unidimensionales (1D)
// Problemas 1 al 10: pseudocodigo en comentarios + implementacion en C++
#include <iostream>
using namespace std;

/* ---------------------------------------------------------------
   PROBLEMA 1: Solicitar 10 enteros, guardarlos e imprimirlos
   en el orden en que fueron ingresados.

   PSEUDOCODIGO
   Inicio
     Declarar A[10] de tipo entero
     Para i = 0 hasta 9
        Leer A[i]
     FinPara
     Para i = 0 hasta 9
        Escribir A[i]
     FinPara
   Fin
   --------------------------------------------------------------- */
void problema1() {
    int a[10];
    for (int i = 0; i < 10; i++) {
        cout << "Numero " << i + 1 << ": ";
        cin >> a[i];
    }
    cout << "En orden de ingreso: ";
    for (int i = 0; i < 10; i++) cout << a[i] << " ";
    cout << endl;
}

/* ---------------------------------------------------------------
   PROBLEMA 2: Leer 8 decimales e imprimirlos en orden inverso.

   PSEUDOCODIGO
   Inicio
     Declarar A[8] de tipo real
     Para i = 0 hasta 7
        Leer A[i]
     FinPara
     Para i = 7 hasta 0 (decrementando)
        Escribir A[i]
     FinPara
   Fin
   --------------------------------------------------------------- */
void problema2() {
    double a[8];
    for (int i = 0; i < 8; i++) {
        cout << "Decimal " << i + 1 << ": ";
        cin >> a[i];
    }
    cout << "En orden inverso: ";
    for (int i = 7; i >= 0; i--) cout << a[i] << " ";
    cout << endl;
}

/* ---------------------------------------------------------------
   PROBLEMA 3: Almacenar 5 numeros y calcular la suma.

   PSEUDOCODIGO
   Inicio
     Declarar A[5], suma = 0
     Para i = 0 hasta 4
        Leer A[i]
        suma = suma + A[i]
     FinPara
     Escribir suma
   Fin
   --------------------------------------------------------------- */
void problema3() {
    double a[5];
    double suma = 0;
    for (int i = 0; i < 5; i++) {
        cout << "Numero " << i + 1 << ": ";
        cin >> a[i];
        suma += a[i];
    }
    cout << "Suma = " << suma << endl;
}

/* ---------------------------------------------------------------
   PROBLEMA 4: Llenar un arreglo de 10 enteros y calcular el promedio.

   PSEUDOCODIGO
   Inicio
     Declarar A[10], suma = 0
     Para i = 0 hasta 9
        Leer A[i]
        suma = suma + A[i]
     FinPara
     promedio = suma / 10
     Escribir promedio
   Fin
   --------------------------------------------------------------- */
void problema4() {
    int a[10];
    int suma = 0;
    for (int i = 0; i < 10; i++) {
        cout << "Entero " << i + 1 << ": ";
        cin >> a[i];
        suma += a[i];
    }
    double promedio = suma / 10.0;  // 10.0 para no perder los decimales
    cout << "Promedio = " << promedio << endl;
}

/* ---------------------------------------------------------------
   PROBLEMA 5: Arreglo de 12 enteros; imprimir el maximo y su posicion.

   PSEUDOCODIGO
   Inicio
     Declarar A[12]
     Para i = 0 hasta 11: Leer A[i]
     max = A[0], pos = 0
     Para i = 1 hasta 11
        Si A[i] > max entonces
           max = A[i]
           pos = i
        FinSi
     FinPara
     Escribir max, pos
   Fin
   --------------------------------------------------------------- */
void problema5() {
    int a[12];
    for (int i = 0; i < 12; i++) {
        cout << "Entero " << i + 1 << ": ";
        cin >> a[i];
    }
    int maximo = a[0], pos = 0;
    for (int i = 1; i < 12; i++) {
        if (a[i] > maximo) {
            maximo = a[i];
            pos = i;
        }
    }
    cout << "Maximo = " << maximo << " en la posicion (indice) " << pos << endl;
}

/* ---------------------------------------------------------------
   PROBLEMA 6: Arreglo de 10 enteros; imprimir el minimo y su indice.

   PSEUDOCODIGO
   Inicio
     Declarar A[10]
     Para i = 0 hasta 9: Leer A[i]
     min = A[0], pos = 0
     Para i = 1 hasta 9
        Si A[i] < min entonces
           min = A[i]
           pos = i
        FinSi
     FinPara
     Escribir min, pos
   Fin
   --------------------------------------------------------------- */
void problema6() {
    int a[10];
    for (int i = 0; i < 10; i++) {
        cout << "Entero " << i + 1 << ": ";
        cin >> a[i];
    }
    int minimo = a[0], pos = 0;
    for (int i = 1; i < 10; i++) {
        if (a[i] < minimo) {
            minimo = a[i];
            pos = i;
        }
    }
    cout << "Minimo = " << minimo << " en el indice " << pos << endl;
}

/* ---------------------------------------------------------------
   PROBLEMA 7: Pedir el tamano N, llenar el arreglo y contar
   cuantos son pares y cuantos impares.

   PSEUDOCODIGO
   Inicio
     Leer N
     Si N <= 0 entonces Escribir "Tamano invalido" y terminar
     Reservar A[N]
     pares = 0, impares = 0
     Para i = 0 hasta N-1
        Leer A[i]
        Si A[i] mod 2 = 0 entonces pares = pares + 1
        Sino impares = impares + 1
     FinPara
     Escribir pares, impares
     Liberar A
   Fin
   --------------------------------------------------------------- */
void problema7() {
    int n;
    cout << "Tamano del arreglo (N): ";
    cin >> n;
    if (n <= 0) {
        cout << "Tamano invalido." << endl;
        return;
    }
    int* a = new int[n];  // memoria dinamica porque N se conoce en ejecucion
    int pares = 0, impares = 0;
    for (int i = 0; i < n; i++) {
        cout << "Entero " << i + 1 << ": ";
        cin >> a[i];
        if (a[i] % 2 == 0) pares++;
        else impares++;
    }
    cout << "Pares: " << pares << " | Impares: " << impares << endl;
    delete[] a;  // liberar la memoria
}

/* ---------------------------------------------------------------
   PROBLEMA 8: Arreglo de 15 enteros; contar positivos, negativos y ceros.

   PSEUDOCODIGO
   Inicio
     Declarar A[15]
     pos = 0, neg = 0, ceros = 0
     Para i = 0 hasta 14
        Leer A[i]
        Si A[i] > 0 entonces pos = pos + 1
        Sino Si A[i] < 0 entonces neg = neg + 1
        Sino ceros = ceros + 1
     FinPara
     Escribir pos, neg, ceros
   Fin
   --------------------------------------------------------------- */
void problema8() {
    int a[15];
    int positivos = 0, negativos = 0, ceros = 0;
    for (int i = 0; i < 15; i++) {
        cout << "Entero " << i + 1 << ": ";
        cin >> a[i];
        if (a[i] > 0) positivos++;
        else if (a[i] < 0) negativos++;
        else ceros++;
    }
    cout << "Positivos: " << positivos << " | Negativos: " << negativos
         << " | Ceros: " << ceros << endl;
}

/* ---------------------------------------------------------------
   PROBLEMA 9: Llenar un arreglo de 10 enteros y multiplicar cada
   elemento por un escalar ingresado por el usuario.

   PSEUDOCODIGO
   Inicio
     Declarar A[10], R[10]
     Para i = 0 hasta 9: Leer A[i]
     Leer escalar
     Para i = 0 hasta 9
        R[i] = A[i] * escalar
     FinPara
     Escribir R
   Fin
   --------------------------------------------------------------- */
void problema9() {
    int a[10];
    double r[10];
    for (int i = 0; i < 10; i++) {
        cout << "Entero " << i + 1 << ": ";
        cin >> a[i];
    }
    double escalar;
    cout << "Escalar: ";
    cin >> escalar;
    for (int i = 0; i < 10; i++) r[i] = a[i] * escalar;
    cout << "Resultado: ";
    for (int i = 0; i < 10; i++) cout << r[i] << " ";
    cout << endl;
}

/* ---------------------------------------------------------------
   PROBLEMA 10: Busqueda binaria de un valor X en un arreglo
   previamente ordenado.

   PSEUDOCODIGO
   Inicio
     Declarar A[10]
     Para i = 0 hasta 9: Leer A[i]
     Ordenar A de menor a mayor (burbuja)
     Leer X
     izq = 0, der = 9, pos = -1
     Mientras izq <= der Y pos = -1
        medio = izq + (der - izq) / 2
        Si A[medio] = X entonces
           pos = medio
        Sino Si A[medio] < X entonces
           izq = medio + 1      // X esta en la mitad derecha
        Sino
           der = medio - 1      // X esta en la mitad izquierda
        FinSi
     FinMientras
     Si pos <> -1 entonces Escribir "Encontrado en el indice", pos
     Sino Escribir "X no esta en el arreglo"
   Fin
   --------------------------------------------------------------- */
void problema10() {
    const int N = 10;
    int a[N];
    for (int i = 0; i < N; i++) {
        cout << "Entero " << i + 1 << ": ";
        cin >> a[i];
    }

    // La busqueda binaria requiere el arreglo ordenado: burbuja ascendente
    for (int i = 0; i < N - 1; i++) {
        for (int j = 0; j < N - 1 - i; j++) {
            if (a[j] > a[j + 1]) {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    cout << "Arreglo ordenado: ";
    for (int i = 0; i < N; i++) cout << a[i] << " ";
    cout << endl;

    int x;
    cout << "Valor a buscar (X): ";
    cin >> x;

    int izq = 0, der = N - 1, pos = -1;
    while (izq <= der && pos == -1) {
        int medio = izq + (der - izq) / 2;
        if (a[medio] == x) {
            pos = medio;
        } else if (a[medio] < x) {
            izq = medio + 1;
        } else {
            der = medio - 1;
        }
    }

    if (pos != -1) cout << x << " encontrado en el indice " << pos
                        << " (del arreglo ordenado)" << endl;
    else cout << x << " no esta en el arreglo." << endl;
}

int main() {
    int opcion;
    do {
        cout << "\n=== Act. 2.1 Arreglos 1D ===\n";
        cout << "Elige el problema (1-10), 0 para salir: ";
        cin >> opcion;
        switch (opcion) {
            case 1: problema1(); break;
            case 2: problema2(); break;
            case 3: problema3(); break;
            case 4: problema4(); break;
            case 5: problema5(); break;
            case 6: problema6(); break;
            case 7: problema7(); break;
            case 8: problema8(); break;
            case 9: problema9(); break;
            case 10: problema10(); break;
            case 0: cout << "Adios." << endl; break;
            default: cout << "Opcion no valida." << endl;
        }
    } while (opcion != 0);
    return 0;
}
