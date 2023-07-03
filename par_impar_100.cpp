#include <stdio.h>
#include <stdlib.h>

/*
&& operador E;
|| operador ou;
!: operador não;
!= operador diferente;
*/

int main() {
	int a;
	
printf("Digite um numero inteiro: "); 
scanf("%d", &a); 

	if (a % 2 == 0)
	{
		if (a <100)
		printf("PAR E MENOR QUE 100");
	
		else
			
			printf("PAR E MAIOR OU IGUAL A 100");
	}
	
	else
	{
		if (a<100)
	
	printf("IMPAR E MENOR QUE 100");
		
		else
		
		printf("IMPAR E MAIOR OU IGUAL A 100");
	}
}
	

