#include <stdio.h>

int main(){
    int i , factoriel = 1 , n ;
    printf("entrer un nombre ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        factoriel *= i ;
    }
    printf("le factorial de %d et %d ",n,factoriel);
    return 0;
}

// Addition : Ajouter deux ou plusieurs nombres.
// Soustraction : Soustraire deux nombres.
// Multiplication : Multiplier deux ou plusieurs nombres.
// Division : Diviser deux nombres, avec gestion de la division par zéro.
// Moyenne : Calculer la moyenne d'une série de nombres.
// Valeur absolue : Calculer la valeur absolue d'un nombre.
// Exponentiation : Calculer un nombre à une certaine puissance.
// Racine carrée : Calculer la racine carrée d'un nombre positif.
