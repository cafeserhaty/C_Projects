#include <stdio.h>
#include <stdlib.h>
int main()
{
    int alfa,beta ;
    don:
    printf("\nEnter first alfa and then beta \n");
    scanf("%d %d",&alfa,&beta);
    alfa=alfa^beta;
    beta=alfa^beta;
    alfa=alfa^beta;
    printf("beta:%d alfa:%d",alfa,beta);
    goto don;
    return 0;
}
