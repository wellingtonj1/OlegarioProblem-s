
//Mount Queue and unmount Queue
#include <bits/stdc++.h>

using namespace std;

int main()
{

    int choose,tama,i,j,fim,init;
    i=fim=0;
    init=-1;
    puts("tamanho do vetor");
    cin>>tama;
    int vetor[tama];
    do
    {	
        puts("\n1-emfilar");
        puts("2-desenfilar");
        puts("0-fechar");
        printf("\nsua escolha [ ]\b\b");
        cin>>choose;
        switch(choose)
        {
            case 1:
            {
                if(i==tama)
                {
                    puts("\nfila cheia\n");
                }
                else
                {
					fim++;
					init++;
                    for(i=init;i<fim;i++)
                    {
                        cin>>vetor[i];
                    }
                   
                }
                break;
            }
            case 2:
            {
                if(i==0)
                {
                    puts("\nfila vazia\n");
                }
                else
                {
					int a=1;
                    for(j=0;j<a;j++)
                    {
                        cout<<vetor[j]<<endl;
                    }
                    for(int k=0;k<tama;k++)
					{					
							vetor[k]=vetor[a];
							a++;												
					}
               	 
					fim--;
					init--;
					i=fim;								
                }				
                break;
            }

        }
    }while(choose!=0);
}
