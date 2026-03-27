#include <iostream>
#include <string>
using namespace std;

int main(){
    
    //tipo nome;
    //tipo nome = valor;

    int vidas;  //10, 25
    //int vidas = 0;
    
    char letra; //'B'
    //char letra = 'B';
    //char letras[20];
    
    double decimal; //2.499999999999
    //double decimal = 2.4999999999999;
    
    float decimal2; //2.5
    //float decimal2 = 2.5;
    
    bool vivo; //true(1) or false(0)
    //bool vivo = true;
    
    string nome; //"Pedro"
    //string nome = "Pedro";

    cout << "Digite o numero de vidas: ";
    cin >> vidas;
    cout << "Digite uma letra: ";
    cin >> letra;
    cout << "Qtd de Dinheiro: ";
    cin >> decimal;
    cout << "Digite o poder do personagem(ex: 2.5): ";
    cin >> decimal2;
    cout << "Digite o nome do personagem: ";
    cin >> nome;
    cout << "O pesonagem é um mago?(true(1) or false(0)): ";
    cin >> vivo;

    cout << vidas << "\n";
    cout << letra << "\n";
    cout << decimal << "\n";
    cout << decimal2 << "\n";
    cout << vivo << "\n";
    cout << nome << "\n";

    //cout << vidas << "\n" << letra << "\n" << decimal << "\n" << decimal2 << "\n" << vivo << "\n" << nome << "\n";

    return 0;
}