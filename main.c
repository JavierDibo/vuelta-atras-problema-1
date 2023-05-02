#include <stdio.h>
#include "ivector.h"

int valor = 0;

void printfSolucion(ivector combinacionParcial, int numeroDados) {
    for (int i = 0; i < numeroDados; ++i) {
        printf("%d, ",combinacionParcial[i]);
    }
    printf("\n");
}

int backtracking(int dadosPuestos, int puntuacionActual, ivector combinacionParcial, int puntuacionObjetivo,
                 int numeroDados) {

    if (dadosPuestos == numeroDados) {
        if (puntuacionActual == puntuacionObjetivo) {
            printfSolucion(combinacionParcial, numeroDados);
            return 1;
        } else
            return 0;
    }

    int numero = 0;
    for (int caraActual = 1; caraActual <= 6; caraActual++) {
        combinacionParcial[dadosPuestos] = caraActual;
        if (puntuacionActual + caraActual <= puntuacionObjetivo)
            numero += backtracking(dadosPuestos + 1, puntuacionActual + caraActual, combinacionParcial, puntuacionObjetivo,
                         numeroDados);
    }

    return numero;
}


int main() {

    int numeroDados = 5;
    int puntuacionObjetivo = 6;
    int numero;

    ivector combinacionParcial = icreavector(numeroDados);

    numero = backtracking(0, 0, combinacionParcial, puntuacionObjetivo, numeroDados);

    printf("\nNumero de combinaciones: %d", numero);

    ifreevector(&combinacionParcial);

    return 0;
}