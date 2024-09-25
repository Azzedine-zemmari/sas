#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c, delta = 0;
    double res1 = 0, res2 = 0;
    double realPart, imaginaryPart;

    printf("Entrez l'equation : ex (ax^2 + bx + c)\n");
    scanf("%d x^2 %d x %d", &a, &b, &c);

    delta = (b * b) - (4 * a * c);
    printf("Le delta est : %d\n", delta);

    // two real solutions
    if (delta > 0) {
        res1 = (-b - sqrt(delta)) / (2 * a);
        res2 = (-b + sqrt(delta)) / (2 * a);
        printf("L'equation admet deux solutions reelles :\n");
        printf("x1 = %.2lf\n", res1);
        printf("x2 = %.2lf\n", res2);
    }
    // one real solution
    else if (delta == 0) {
        res1 = -b / (2.0 * a);
        printf("L'equation admet une solution reelle unique :\n");
        printf("x0 = %.2lf\n", res1);
    }
    // two complex solutions
    else {
        realPart = -b / (2.0 * a);
        imaginaryPart = sqrt(-delta) / (2.0 * a);
        printf("Le discriminant Δ est strictement negatif (Δ < 0).\n");
        printf("L'equation n'admet pas de solutions reelles, mais elle admet deux solutions complexes :\n");
        printf("x1 = %.2lf - i%lf\n", realPart, imaginaryPart);
        printf("x2 = %.2lf + i%lf\n", realPart, imaginaryPart);
    }

    return 0;
}
