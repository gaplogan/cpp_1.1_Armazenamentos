//Exemplo simples de armazenamento na mem�ria com instru��es sequenciais.
#include <iostream>
#include <locale>

using namespace std;

int main() //comando de in�cio do programa
{ 
    setlocale(LC_ALL, "Portuguese");

    int A, B, C, D; //declara��o das vari�veis do programa
    D = 0; //atribui o valor 0 � vari�vel D
    cout << "Valor de D: " << D; //exibe na tela o valor de D com frase explicativa
    A = 2; //atribui o valor 2 � vari�vel A
    cout << endl << "Valor de A: " << A; //exibe na tela o valor de A com frase explicativa
    B = 3; //atribui o valor 3 � var/i�vel B
    cout << endl << "Valor de B: " << B; //exibe na tela o valor de B com frase explicativa
    C = 5; //atribui o valor 5 � vari�vel C
    cout << endl << "Valor de C: " << C; //exibe na tela o valor de C com frase explicativa
    C = C + 1; //atualiza a vari�vel C o seu valor anterior acrescido de 1
    cout << endl << "Valor de C: " << C;//exibe na tela o valor de C (atualizado) com frase explicativa
    D = A + C; //atribui � vari�vel D a soma do valor de A com o valor atual de C
    cout << endl << "Valor de D: " << D;//exibe na tela o valor de D (atualizado) com frase explicativa

    return 0;
}