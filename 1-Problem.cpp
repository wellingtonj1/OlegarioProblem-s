
//Mount stack and unmount stack
#include <bits/stdc++.h>

using namespace std;

int main()
{

    int choose,tama,i,j,topo,inicio;
    i=0;
    inicio=-1;
    topo=0;
    puts("tamanho do vetor");
    cin>>tama;
    int vetor[tama];
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
                if(i==tama)
                {
                    puts("pilha cheia");
                }
                else
                {
					topo++;
                    inicio++;
                    for(i=inicio;i<topo;i++)
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
                    puts("pilha vazia");
                }
                else
                {
                    for(j=topo-1;j>=inicio;j--)
                    {
                        cout<<vetor[j]<<endl;
                    }
                    topo--;
                    inicio--;
					i=topo;
                }
                break;
            }

        }
    }while(choose!=0);
}
