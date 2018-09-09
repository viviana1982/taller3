#include <stdlib.h>
#include <stdio.h>

int main(){
	int matriz[3][3]={{0}},i,j;

	printf("\n\n");
	//RELLENAR MATRIZ

	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			printf("Digite un numero matriz [%i][%i]: ",i+1, j+1);
			scanf("%i",&matriz[i][j]);
		}
	}

	printf("\n\n");
	//MOSTRAR MATRIZ
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
	    printf("%i",matriz[i][j]);
       }
       printf("\n");
   }
	return 0;
}
