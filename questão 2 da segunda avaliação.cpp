#include <stdio.h>
#include<stdlib.h>
#include <locale.h>
int main(){
	int a;
	printf("Digite um numero: ");
	scanf("%d", &a);
	if (a%3==0)
	{
		for(int b=0; b<=a; b++)
		{
			printf("\n%d", b);
			if(b%3==0)
			{
				printf("\t Divisivel por 3");
			}
		}
	}
	else if (a%3!=0)
	{
		for(int b=0; b<=a; b++)
		{
			printf("\n%d", b);
			if(b%5==0)
			{
				printf("\t Divisivel por 5");
			}
		}
	}
}
