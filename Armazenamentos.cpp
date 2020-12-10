#include <iostream>
#include <locale>

using namespace std;

int main() //comando de início do programa
{ 
    setlocale(LC_ALL, "Portuguese");

    int A, B, C, D; //declaração das variáveis do programa
    D = 0; //atribui o valor 0 à variável D
    cout << "Valor de D: " << D; //exibe na tela o valor de D com frase explicativa
    A = 2; //atribui o valor 2 à variável A
    cout << endl << "Valor de A: " << A; //exibe na tela o valor de A com frase explicativa
    B = 3; //atribui o valor 3 à var/iável B
    cout << endl << "Valor de B: " << B; //exibe na tela o valor de B com frase explicativa
    C = 5; //atribui o valor 5 à variável C
    cout << endl << "Valor de C: " << C; //exibe na tela o valor de C com frase explicativa
    C = C + 1; //atualiza a variável C o seu valor anterior acrescido de 1
    cout << endl << "Valor de C: " << C;//exibe na tela o valor de C (atualizado) com frase explicativa
    D = A + C; //atribui à variável D a soma do valor de A com o valor atual de C
    cout << endl << "Valor de D: " << D;//exibe na tela o valor de D (atualizado) com frase explicativa

    return 0; //comando de fim do programa
}