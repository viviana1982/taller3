#include <stdlib.h>
#include <stdio.h>

int main(){
	int matriz[3][3]={{0}},i,j;

	printf("\n\n");
	//RELLENAR MATRIZ
	printf("Rellenando Matriz Automaticamente:");
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			matriz[i][j] = rand() % 9;
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
