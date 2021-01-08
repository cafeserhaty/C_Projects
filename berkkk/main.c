#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char argv[])
{
    int node,i,j;
    int x=0;
    int y=0;
    int rows=3;
    int columns=3;
    int matrix[3][3]={{-2.86,0,2.86},{0,-6,2},{2.86,2,-8.86}};
    int matrix_new1[rows-1][columns-1];
    int matrix_new2[rows-1][columns-1];
    int array1[columns-1];
    int array2[rows-1];
    don:
    printf("Which node do you want to eliminate ?\n");
    scanf("%d",&node);
    for(i=0;i<rows;i++)
        {
            for(j=0;j<columns;j++)
            {
                if(!(i==node-1 || j == node-1))
                {
                    matrix_new1[x][y]=matrix[i][j];
                    y++;
                }
            }
            if(i != node-1)
            {
                x++;
            }
            y=0;
        }
        x=0;
        y=0;
    for(i=0;i<rows;i++)
    {
        for(j=0;j<columns;j++)
        {
            if(!(i==node-1 && j== node-1)&&i==node-1)
            {
                array1[y]=matrix[i][j];
                y++;
            }
            if(!(i==node-1 && j==node-1)&&j==node-1)
            {
                array2[x]=matrix[i][j];
                x++;
            }
        }
    }
    x=0;
    y=0;
    for(i=0;i<rows-1;i++)
    {
        for(j=0;j<columns-1;j++)
        {
            matrix_new2[i][j]=matrix_new1[i][j]-(array1[j]*array2[i])/matrix[node-1][node-1];
        }
    }
    printf("This is your KRON reduced matrix.\n");
    for(i=0;i<rows-1;i++)
    {
        for(j=0;j<columns-1;j++)
        {
            printf("%2d  ",matrix_new2[i][j]);
        }
        printf("\n");
    }
    goto don;
    return 0;
}
