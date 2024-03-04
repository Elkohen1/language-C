#include <stdio.h>


int main() {
   int Tab[100],i,n,c;
    do{
        printf("donner la taille");
        scanf("%d",&n);
    } while (n>100||n<=0);
    for ( i = 0; i<n; i++) {
        printf("donner l'element");
        scanf("%d",&Tab[i]);
    }
    printf("donner la cible");
    scanf("%d",&c);

    for ( i = 0; i<n && Tab[i]!=c; i++);
        if (i==n)
        {
            printf("l'element n'existe pas");
        }
        else {
            printf("l'element se trouve dans la position %d",i);
        }

    return 0;
}
