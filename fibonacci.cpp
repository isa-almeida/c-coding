#include<stdio.h>

int main()
{

int n, f_ant, f_atual, f_aux, cont;
{
	printf("Digite um numero para n: ");
	scanf("%d", &n);
	
	cont=1;
	f_atual=1;
	f_ant=0
	
	while(cont<n)
	{
		printf("%d  ", f_atual); //exibe na tela o f atual
		f_aux=f_atual; //armazena o f atual em aux para que o valor n�o se perca
		
		f_atual=f_atual+f_ant; //a var f_atual recebe o valor antigo dela mesma somado com o valor anterior, que no caso ainda � 0
		f_ant=f_aux; //var f_ant recebe o valor de aux, que nada mais � que o valor anterior da sequencia
		//na volta do la�o o f_ant ter� mudado para que a soma do pr�ximo elemento seja feita
		cont++;
	}
}

}
