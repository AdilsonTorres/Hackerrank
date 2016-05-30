#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main(){

    double d;
    int i,j;
    scanf("%lf",&d);
    scanf("%d",&i);
    scanf("%d",&j);
    printf("The total meal cost is %.0f dollars.\n",d+d*i/100.0+d*j/100.0);
    return 0;
}

