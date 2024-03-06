#include <stdio.h>

int main() {
int t[100],i;

    printf("donner les lettres dual tableau (-1 pour teminer )");
    for (int i= 0; i <100;i++) {
        printf("t[%d]",i+1);
        scanf("%d",&t[i]);
        if (t[i]==-1)
            break;
        else
            t[i]=t[i]=1;
    }
    printf("tableau augment:");
    for (int j = 0; j <i;j++) {
        printf("%d",t[j]);

    }



    return 0;
}
