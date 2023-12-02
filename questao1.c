#include <stdio.h>

double calcularMontante(double aporteMensal, double taxaJuros, int meses) {
    double montante = 0;
    for (int t = 1; t <= meses; t++) {
        montante += aporteMensal * pow(1 + taxaJuros, t - 1) * (1 + taxaJuros);
        printf("Montante ao fim do mes %d: R$ %.2lf\n", t, montante);
    }
    return montante;
}

int main() {
    int meses;
    double aporteMensal, taxaJuros;


    
    scanf("%d", &meses);

    
    scanf("%lf", &aporteMensal);

    
    scanf("%lf", &taxaJuros);


    calcularMontante(aporteMensal, taxaJuros, meses);

    return 0;
}
