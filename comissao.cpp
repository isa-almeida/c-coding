#include <stdio.h>
#include <stdlib.h>

int main ()
{
	float valor, comissao;
	
	printf("Digite o valor da transacao: ");
	scanf("%f", &valor);
	
	if(valor<=2500)
	{
		comissao=30+(valor*1.7/100);
		if(comissao<39)
		
			comissao=39;
	}
	
	else if(valor<=6250) comissao=66+(valor*0.66/100);
	else if(valor<=20000) comissao=76+(valor*0.34/100);
	else if(valor<=50000) comissao=100+(valor*0.22/100);
	else if(valor<=500000) comissao=155+(valor*0.11/100);
	else comissao=255+(valor*0.09/100);
				
		printf("Comissao: R$ %.2f", comissao);
	
}
