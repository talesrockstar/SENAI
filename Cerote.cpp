#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float m[10][3], id, qtd, preco;
	int cont=0, op;

	for(int i=0; i<10; i++)
	{
			printf("Digite o ID do %d° produto:", i+1);
			scanf("%f", &m[i][0]);
			printf("Digite o preço do %d° produto:", i+1);
			scanf("%f", &m[i][1]);
			printf("Digite o quantidade do %d° produto:", i+1);
			scanf("%f", &m[i][2]);	
	}


	do
	{
	printf("\n1: Exibir produtos\n2: Vender Produto\n0: Sair do programa\n");
	scanf("%d", &op);
	switch(op)
		{
		case 1:
		for(int i=0; i<10; i++){
		printf("\nProduto %d: ID é: %.0f, O preço é: %.2f, A quantidade é: %.0f",i+1, m[i][0], m[i][1], m[i][2]);
		if(m[i][2] < 3)
		{
			printf("\tEstoque Baixo");
		}
	}
		break;
		case 2:
			int valor;
			float qtdv, valorv;
			printf("Digite o ID do produto que deseja alterar: ");
			scanf("%d", &valor);
			for(int i=0; i<10; i++){
				if(valor == m[i][0])
				{
					printf("O produto foi encontrado!");
					printf("\nDigite a quantidade a ser vendida: ");
					scanf("%f", &qtdv);
						if(m[i][2]>=qtdv)
						{
							valorv = qtdv * m[i][1];
							printf("Venda realizada. Valor total: R$%.2f\n", valorv);
							m[i][2]= m[i][2]-qtdv;
							printf("Quantidade restante do produto %.0f: %.0f",m[i][0], m[i][2]);
						}
						else if (m[i][2]<qtdv && m[i][2]>0)
						{
							printf("Estoque insuficiente");
						}
						else
						{
							printf("Estoque esgotado. Venda não permitida!");
						}
					}
			}
			break;
		case 0:
			printf("\nVocê saiu!");
			break;
			
		default:
		printf("\nOpção inválida!");
		break; 
		}
	}
	while(op!=0);
}
