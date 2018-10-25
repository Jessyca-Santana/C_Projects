#include <stdio.h>
int suc(int n) { return n+1; } 
int pred(int n) { return n-1; } 

int soma(int a, int b){
	if(b==0) return a;
	soma(suc(a), pred(b));
}

int subtrai(int a, int b){
	if(b == 0) return a;
	subtrai(pred(a), pred(b));
}

int dobra(int a){
	if(a == 0) return;
	int resp = soma(dobra(pred(a)), 2);
}

int meio(int a){
	if(a <= 0) return;
	int resp = suc(meio(subtrai(a,2)));
}

int min(int a, int b){
	if(a == 0) return a;
	if (b == 0) return b;
	int resp = suc(min(pred(a), pred(b)));
}

int max(int a, int b){
	if(a == 0) return b;
	if(b == 0) return a;
	int resp = suc(max(pred(a), pred(b)));
}

int par(int a){
	if(a < 0) return 0;
	if(a == 0) return 1;
	par(subtrai(a, 2));
}

int impar(int a){
	if(a < 0) return 1;
	if(a == 0) return 0;
	impar(subtrai(a, 2)); 
}

int mult(int a, int b){
	if(b == 0) return;
	soma(a, mult(a, subtrai(b, 1)));
}

int quoc(int a, int b){
	if(a <= 0) return;
	soma(quoc(a - b, b), 1);
}

int mod(int a, int b){
	if(a < b) return;
	mod(subtrai(a,b), b);
}

int pot(int a, int b){
	if(b == 0) return 1;
	mult(a, pot(a, subtrai(b, 1)));
}

int sqr(int a){
	if(a == 1) return;
	a = soma(sqr(subtrai(a, 1)), subtrai(dobra(a), 1));
}

int main(void){ 
	int opc, a, b;
	printf("\n\nCALCULADORA RECUSRIVA\n\n");
	do{
		printf("ESCOLHA UMA OPCAO \n1 - SOMAR 2 NUM\n2 - SUBTRAIR 2 NUM\n3 - DOBRAR 1 NUM\n4 - ACHAR A METADE DE 1 NUM\n5 - ACHAR O MENOR VALOR ENTRE 2 NUM\n6 - ACHAR O MAIOR VALOR ENTRE 2 NUM\n7 - DESCOBRIR SE 1 NUM EH PAR\n8 - DESCOBRIR SE 1 NUM EH IMPAR\n9 - MULTIPLICAR 2 NUM\n10 - DIVIDIR 2 NUM INTEIROS\n11 - ACHAR O RESTO DA DIVISAO DE 2 NUM INTEIROS\n12 - ACHAR A POTENCIA DE 2 NUM\n13 - ACHAR O QUADRADO DE 1 NUM\n14 - SAIR\n");
		scanf("%d", &opc);
		switch(opc){
			case 1:
				printf("Informe um valor: ");
				scanf("%d", &a);
				printf("Informe outro valor: ");
				scanf("%d", &b);
				printf("\nO valor da soma eh: %d\n\n", soma(a, b));
				break;
			case 2:
				printf("Informe um valor: ");
				scanf("%d", &a);
				printf("Informe outro valor: ");
				scanf("%d", &b);
				printf("\nO valor da subtracao eh: %d\n\n", subtrai(a, b));
				break;
			case 3:
				printf("Informe um valor: ");
				scanf("%d", &a);
				printf("\nO valor do dobro eh: %d\n\n", dobra(a));
				break;
			case 4:
				printf("Informe um valor: ");
				scanf("%d", &a);
				printf("\nO valor da metade eh: %d\n\n", meio(a));
				break;
			case 5:
				printf("Informe um valor: ");
				scanf("%d", &a);
				printf("Informe outro valor: ");
				scanf("%d", &b);
				printf("\nO menor valor eh: %d\n\n", min(a, b));
				break;
			case 6:
				printf("Informe um valor: ");
				scanf("%d", &a);
				printf("Informe outro valor: ");
				scanf("%d", &b);
				printf("\nO maior valor eh: %d\n\n", max(a, b));
				break;
			case 7:
				printf("Informe um valor: ");
				scanf("%d", &a);
				if(par(a)) printf("\nEh par\n\n");
				else printf("\nNao eh par\n\n");
				break;
			case 8:
				printf("Informe um valor: ");
				scanf("%d", &a);
				if(impar(a)) printf("\nEh impar\n\n");
				else printf("\nNao eh impar\n\n");
				break;
			case 9:
				printf("Informe um valor: ");
				scanf("%d", &a);
				printf("Informe outro valor: ");
				scanf("%d", &b);
				printf("\nO valor da multiplicacao eh: %d\n\n", mult(a, b));
				break;
			case 10:
				printf("Informe um valor: ");
				scanf("%d", &a);
				printf("Informe outro valor: ");
				scanf("%d", &b);
				printf("\nO valor da divisao inteira eh: %d\n\n", quoc(a, b));
				break;
			case 11:
				printf("Informe um valor: ");
				scanf("%d", &a);
				printf("Informe outro valor: ");
				scanf("%d", &b);
				printf("\nO valor do resto da divisao inteira eh: %d\n\n", mod(a, b));
				break;
			case 12:
				printf("Informe um valor: ");
				scanf("%d", &a);
				printf("Informe outro valor: ");
				scanf("%d", &b);
				printf("\nO valor da potencia eh: %d\n\n", pot(a, b));
				break;	
			case 13:
				printf("Informe um valor: ");
				scanf("%d", &a);
				printf("\nO valor do quadrado eh: %d\n\n", sqr(a));
				break;
			case 14:
				printf("\nFIM DO PROGRAMA!\n");
				break;
			default: 
				printf("\nOPCAO INVALIDA!\n");
		}
	}while(opc != 14);
	return 0;
}
