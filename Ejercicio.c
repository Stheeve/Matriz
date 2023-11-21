#include <stdio.h>

int main(){
int n,m;
printf("Coloque los datos de n\n");
scanf("%d", &n);
printf("Coloque los datos de m\n");
scanf("%d", &m);
int matrix[n][m];
for (int i = 0; i < n; i++)
{
    printf("\n");

    for (int j = 0; j < m; j++)
    {           
        if (i==j)
        {
            matrix[i][j]=1;
            printf("%d ", matrix[i][j]);
            
            
        }
                      
        matrix[i][j]=0;
        printf("%d ", matrix[i][j]);
        
        
        
    }
    
    
}
}