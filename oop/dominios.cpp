#include <iostream>
#include "dominios.hpp"

bool CodigoCliente::validar(int valor){
    // Verifica se o valor é maior que o limite
    if(valor > LIMITE)
        return false;
    return true;
}

bool CodigoCliente::setValor(int valor){
    if(!validar(valor))
        return false;

    this->valor = valor;
    return true;
}

