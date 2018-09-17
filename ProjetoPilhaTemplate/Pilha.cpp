/*#include "Pilha.h"

namespace TP2{
Pilha::Pilha(int tamanho):
    tamanho(0),
    array(0),
    topo(-1)
{
    if(tamanho <= 0) throw QString("tamanho fora do intervalo válido");
    try{
        array = new int[tamanho];
        this->tamanho = tamanho;
    }catch(std::bad_alloc&){
        throw QString("falta espaço na memória");
    }
}
void Pilha::push(TP2::tipo elemento){
    if(topo == tamanho-1) throw QString("Pilha cheia");
    topo++;
    array[topo] = elemento;
}
void Pilha::pop(){
    if(this->empty()) throw QString("Pilha vazia");
    topo--;
}
TP2::tipo Pilha::top()const{
    if(this->empty()) throw QString("Pilha vazia");
    return this->array[topo];
}

}
*/
