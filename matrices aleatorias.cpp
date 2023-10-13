//ejercicio de matrices
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {

	int i,j,n,opc,superior=0;
    srand(time(NULL));    
 

printf("Elija la opcion que desea\n");
printf("1. Suma\n2. Resta\n3. Multiplicacion\n4. Diagonal\n5. Suma triangular superior\n6. Terminar el programa\n");
printf("Opcion: ");
scanf("%d", &opc);


while (opc<6){
	
printf("\nIngrese la longitud de la matriz: ");
scanf("%d", &n);
printf("\n");
	int A[n][n];
	int B[n][n];
	int C[n][n];
	printf("Matriz A:\n");
	for(i=0; i<n; i++){
		for (j=0; j<n; j++){
			A[i][j]=rand() % 10;
			printf("%d ",A[i][j]);
		}
		printf("\n");
	}
	
	printf("\nMatriz B:\n");
	for(i=0; i<n; i++){
		for (j=0; j<n; j++){
			B[i][j]=rand() % 10;
			printf("%d ",B[i][j]);
		}
		printf("\n");
	}
	
	    switch (opc)
    {
	  	
    case 1:
    for (i=0; i<n; i++) 
			for (j=0; j<n; j++)
			C[i][j]=A[i][j]+B[i][j];		
   	printf("\nLa suma de las matrices son: \n");
	for (i=0;i<n;i++)
		for (j=0; j<n; j++)	
		printf("%d ",C[i][j]);
            break;
            
        case 2:
              for (i=0; i<n; i++) 
			for (j=0; j<n; j++)
			C[i][j]=A[i][j]-B[i][j];		
   	printf("\nLa resta de las matrices son: \n");
	for (i=0;i<n;i++)
		for (j=0; j<n; j++)	
		printf("%d ",C[i][j]);
            break;
            
        case 3:
          for (i=0; i<n; i++) 
			for (j=0; j<n; j++)
			C[i][j]=A[i][j]*B[i][j];		
   	printf("\nLa multiplicacion de las matrices son: \n");
	for (i=0;i<n;i++)
		for (j=0; j<n; j++)	
		printf("%d ",C[i][j]);
            break;
            
        case 4:
    for (i=0; i<n; i++) 
	for (j=0; j<n; j++)
	C[i][j]=A[i][j]/B[i][j];		
   	printf("\nLa division de las matrices son: \n");
	for (i=0;i<n;i++)
		for (j=0; j<n; j++)	
			printf("%d ",C[i][j]);
            break;
            
        case 5:
    for (i=0; i<n; i++) 
	for (j=0; j<n; j++)
	if (j<i)
	C[i][j]=A[i][j]+B[i][j];
	
	{
	
	}
	
   	printf("\nLa suma de la diagonal superior de las matrices son: \n");
	for (i=0;i<n;i++)
		for (j=0; j<n; j++)	
		printf("%d ",C[i][j]);
       break;
}
printf("\n\nElija la opcion que desea\n");
printf("1. Suma\n2. Resta\n3. Multiplicacion\n4. Diagonal\n5. Suma triangular superior\n6. Terminar el programa\n");
printf("Opcion: ");
scanf("%d", &opc);
}

return 0;
}