//Ejercicio 3:

#include <stdio.h>

int main(){
	
	int i, j, col, ren;
	
	printf("Tmanno de la matriz ren, col: ");
	scanf("%d, %d", &ren, &col);
	
	int matriz[ren][col];
	int arreglo[ren];
	
	for( i = 0 ; i < ren ; i++){
		
		for( j = 0 ; j < col ; j++){
			
			printf("Valor en %d, %d :" , i , j);
			scanf("%d", &matriz[i][j]);
			
		}
		
	}
	
	printf("\n");
	
	for( i = 0 ; i < ren ; i++){
		
		printf("\nValore en %d.", i);
		scanf("%d", &arreglo[i]);
		
	}
	
	for( i = 0 ; i < ren ; i++){
		
		for( j = 0 ; j < col ; j++){
			
			printf("%d ", matriz[i][j]);
			
		}
		printf("\n");
	}
	
	for( i = 0 ; i < ren ; i++){
		
		printf("%d ", arreglo[i]);
		
	}
	
	printf("\n");
	
	system("pause");
	return 0;
}
