
//Mount stack and unmount stack
#include <bits/stdc++.h>

using namespace std;

int main() 
{

	int choose;
	int n,i=0;
	int vet[n];
	int avet[n];
	puts("tamanho vet ");
	cin>>n;
	
	do
	{
		puts("1-empilhar");
		puts("2-desempilhar");
		puts("0-fechar");
		printf("sua escolha [ ]\b\b");
		cin>>choose;
		switch(choose)
		{
			case 1:
			{
				
				if(i==n)
				{
					puts("Pilha cheia");
					break;
				}
				else
				{
					for(i=0;i<n;i++)
					{
						cin>>vet[n];
					}					
					break;
				}
			}
			
			case 2:
			{
				int aux=0;
				if(i==0)
				{
					puts("Pilha vazia");
					
				}
				else
				{
					int j;
					for(j=0;j<n;j++)
					{
						cout<<vet[j]<<endl;
						/*avet[aux]=vet[j];
						cout<<avet[aux];
						aux++;
						*/
					}	
					i=0;
				}
				break;
			}	
		}
	}while(choose!=0);
}
