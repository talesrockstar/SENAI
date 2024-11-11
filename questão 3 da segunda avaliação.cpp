#include <stdio.h>
#include<stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	float a;
	int c=0;
	while(c!=1)
	{
		printf("\n\n 1: Sair\n 2: C -> F\n 3: F -> C\n 4: C -> K\n 5: K -> C\n\nEscolha a conversão que você deseja realizar: ");
      	scanf("%d", &c);

      	switch(c){
      		case 1:
      			printf("Você escolheu sair!");
      		break;
      		
      		case 2:
      			printf("\nEscreva a temperatura que deseja converter: ");
      			scanf("%f", &a);
      			printf("%f -> F = %f",a, (a * 9/5) + 32);
			break;
			
			case 3:
				printf("\nEscreva a temperatura que deseja converter: ");
      			scanf("%f", &a);
				printf("%f -> C = %f",a, (a - 32) * 5/9);
			break;
			
			case 4:
				printf("\nEscreva a temperatura que deseja converter: ");
      			scanf("%f", &a);
      			printf("%f -> K = %f",a, a + 273.15);
			break;
			
			case 5:
				printf("\nEscreva a temperatura que deseja converter: ");
      			scanf("%f", &a);
				printf("%f -> C = %f",a, a - 273.15);
			break;
				
			default:
				printf("\nOpção invalida!");
			}
		}
	}

