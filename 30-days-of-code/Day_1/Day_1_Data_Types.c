#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main (){
    int i = 4;
    double d = 4.0;
    char s[]= "HackerRank ";
    int j;
    double e;
    char z[100];
    scanf("%d",&j);
    scanf("%lf",&e);
    getchar();
    fgets(z,sizeof(z),stdin);
    printf("%d\n",i+j);
    printf("%.1f\n",d+e);
    printf("%s",s);
    printf("%s\n",z);
    return 0;
	

}
