#include <stdio.h>

int main()
{
   int i, j;
   int tabuada[10][10];

   for(i=1; i<=10; i++)
   {
     for(j=1; j<=10; j++)
     {
        tabuada[i][j] = i * j;
     
      }
   }
   
   for(i=1; i<=4; i++)
   {
      printf("\n");
    
      for(j=1; j<=10; j++)
      {
        printf("%d x %d = %d", i,j, tabuada[i][j]);
      
      }
   }
    
    return 0;
}

