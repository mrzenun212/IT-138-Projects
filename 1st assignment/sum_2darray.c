#include <stdio.h>

int main () {
    int row, col, num_matrix;
    printf("Enter the number of Matrices: ");
    scanf("%d", &num_matrix);
    printf("Enter the number of Row: ");
    scanf("%d", &row);
    printf("Enter the number of Col: ");
    scanf("%d", &col);


    /* an array with 5 rows and 2 columns*/
    int abc[row][col];
    int xyz[row][col];
    int sum[row][col];
    int i, j, m;

    printf("Enter matrix number 1 ------------ \n");
    for(i=0; i<=row-1; i++)
        {
             /*loop for second dimension of array*/
             for(j=0;j<=col-1;j++)
             {
                 printf("Enter value for abc[%d][%d]:  ", i, j);
                 scanf("%d", &abc[i][j]);
                 sum[i][j] = abc[i][j];
             }
        }

    for(m=2; m<=num_matrix; m++)
    {
         printf("Enter matrix number %d ------------ \n", m);
         /*loop for first dimension*/
         for(i=0; i<=row-1; i++)
         {
            /*loop for second dimension of array*/
            for(j=0;j<=col-1;j++)
            {
                printf("Enter value for abc[%d][%d]:  ", i, j);
                scanf("%d", &xyz[i][j]);
                sum[i][j] = sum[i][j] + xyz[i][j];
            }
         }
     }



    printf("\n\n The sum of %d conform matrices is: ");
    for(i=0; i<=row-1; i++)
    {
         /*loop for second dimension of array which is 4 in this example*/
         for(j=0;j<=col-1;j++)
         {
             printf("%d ", sum[i][j]);
         }
            printf("\n");
    }

   return 0;
}
