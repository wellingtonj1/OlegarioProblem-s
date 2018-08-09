
//Mount stack and unmount stack
#include <bits/stdc++.h>

using namespace std;

int main()
{

    int choose,tama,i,j,k;
    i=0;
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
                    for(i=0;i<tama;i++)
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
                    for(j=tama-1;j>=0;j--)
                    {
                        cout<<vetor[j]<<endl;
                    }
                    i=0;
                }
                break;
            }

        }
    }while(choose!=0);
}
