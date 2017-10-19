//Ejercicio 1:
#include <stdio.h>

int main(){
	
	int matriz[3][3] = {{ 0, 1, 2},
						{ 3, 4, 5},
						{ 6, 7, 8}};
	int ren, col;
	
	for ( ren = 0 ; ren < 3 ; ren++){
		
		for( col = 0 ; col < 3 ; col++){
			
			printf("	%d", matriz[ren][col]);
			
		}
		
		printf("\n");
		
	}					
	
	printf("\n");
	printf("	%d\n", matriz[1][2]);
	
	matriz[2][2] = 20 ;
	printf("	%d\n", matriz[2][2]);
	
	system ("pause");
	return 0 ;
}
