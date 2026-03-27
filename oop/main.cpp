#include <iostream>
#include "dominios.hpp"
using namespace std;

//PRIMEIRO METODO
int main(){
    //Criar objeto da classe domínio
    CodigoCliente *cliente;

    // Criar objeto e armazenar o seu identificador (endereço) no ponteiro.
    cliente = new CodigoCliente();

    //Ler valor a partir da entrada padrão.
    int valorDigitado;
    cout << "Digite um codigo: ";
    cin >> valorDigitado;

    //Armazenar valor no objeto.
    //Se o valor for válido, apresentar valor armazenado no objeto.
    //Se o valor for inválido, informar que o valor não foi armazenado.
    if (cliente->setValor(valorDigitado)){
        cout << "Valor validado! O valor armazenado foi: " << cliente->getValor() << "\n";
    } else {
        cout << "Erro! Valor invalido. O valor não foi armazenado.\n";
    }

    // Destruir objeto apontado para liberar a memória
    delete cliente;
    
    return 0;
}
