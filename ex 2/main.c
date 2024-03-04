#include <stdio.h>

void main() {
    int tab[100],i,n,s=0,p=1;
    float m;
    do {
        printf("Donner la taille");
        scanf("%d",&n);
    } while (n>100||n<=0);
    for (i= 0; i <n; i++) {
        printf("Donner L'element");
        scanf("%d",&tab[i]);}
    for (i= 0;i<n;i++) {
        s=s+tab[i];
                p=p*tab[i];
    }
    m=s/n;
    printf(" les resultats ");
    printf(" la somme est %d , le produit est %d, la moyenne est %f", s,p,n);
    return 0;
}
