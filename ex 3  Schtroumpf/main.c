#include <stdio.h>

int main() {
    int tab[100] , tab1[100] , n1,n2, s=0 ;
    do {
        printf("entrer nombres ");
        scanf("%d",&n1);
     } while (n1<=0||n1>100);
        printf("TABLEAU 1");
    for ( int i = 0; i<n1 ; i++)
        scanf("%d",&tab[i]);
    do {
            printf("entrer nombres ");
            scanf("%d",&n2);
        } while (n2<=0||n2>100);
    printf("TABLEAU 2");
    for ( int i = 0; i<n2 ; i++)
            scanf("%d",&tab1[i]);

    for (int i=0; i<n1;i++) {
        for (int k= 0; k<n2; k++) {
            s +=tab[i]*tab1[k];

        }

    }
    printf("Le Schtroumpf est : %d",s);
    return 0;
}