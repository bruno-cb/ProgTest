#include <iostream>
#include <string>
using namespace std;

void q1();
void q2(int num);
void q3();
void q4();
void q5();
int fib(int* f1, int* f2);

int main(){
    int num;
    std::cout << "Hello World!\n";
    

    std::cout << "\n Q1:\n";
    q1();

    std::cout << "\n Q2:\n";
    std::cout << " insira um valor:\n";
    std::cin >> num;
    q2(num);

    std::cout << "\n Q3:\n";
    q3();

    std::cout << "\n Q4:\n";
    q4();

    std::cout << "\n Q5:\n";
    q5();

}

void q1() {
    int indice = 13;
    int soma = 0, k = 0;

    while (k < indice) {
        k = k + 1;
        soma = soma + k;
    }
    std::cout << soma;//91
}

void q2(int num) {
    int f1 = 0;
    int f2 = 1;
    int f3 = 0;

    while (num>f3) {
        f3 = fib(&f1, &f2);
    }

    if (num == f3) 
        std::cout << "O numero pertence a sequencia\n";
    else
        std::cout << "O numero nao pertence a sequencia\n";
}

int fib(int* f1, int* f2) {
    int f3 = *f1 + *f2;
    *f1 = *f2;
    *f2 = f3;
    return f3;
}

void q3() {
    std::cout << "a) 9\n";
    std::cout << "b) 128\n";
    std::cout << "c) 49\n";
    std::cout << "d) 100\n";
    std::cout << "e) 13\n";
    std::cout << "f) 20\n";//?
}

void q4() {
    std::cout << "a distancia entre o carro e a cidade, e a distancia entre o caminhao e a cidade sao iguais pois os veiculos estao se cruzando no mesmo lugar\n";
}

void q5() {
    string str="1234567";
    string aux="0";

    int tam = str.size();

    for (int i = 0; i < (tam / 2);i++) {
        aux = str[i];
        str[i] = str[tam - i-1];
        str[tam - i-1] = aux[0];
    }
    std::cout << str<< "\n";
}

/*

1) Observe o trecho de código abaixo:

int INDICE = 13, SOMA = 0, K = 0;

enquanto K < INDICE faça

{

K = K + 1;

SOMA = SOMA + K;

}

imprimir(SOMA);



Ao final do processamento, qual será o valor da variável SOMA?



2) Dado a sequência de Fibonacci, onde se inicia por 0 e 1 e o próximo valor sempre será a soma dos 2 valores anteriores (exemplo: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34...), escreva um programa na linguagem que desejar onde, informado um número, ele calcule a sequência de Fibonacci e retorne uma mensagem avisando se o número informado pertence ou não a sequência.



IMPORTANTE:

Esse número pode ser informado através de qualquer entrada de sua preferência ou pode ser previamente definido no código;



3) Descubra a lógica e complete o próximo elemento:



a) 1, 3, 5, 7, ___

b) 2, 4, 8, 16, 32, 64, ____

c) 0, 1, 4, 9, 16, 25, 36, ____

d) 4, 16, 36, 64, ____

e) 1, 1, 2, 3, 5, 8, ____

f) 2,10, 12, 16, 17, 18, 19, ____



4 - Dois veículos (um carro e um caminhão) saem respectivamente de cidades opostas pela mesma rodovia. O carro de Ribeirão Preto em direção a Franca, a uma velocidade constante de 110 km/h e o caminhão de Franca em direção a Ribeirão Preto a uma velocidade constante de 80 km/h. Quando eles se cruzarem na rodovia, qual estará mais próximo a cidade de Ribeirão Preto?



IMPORTANTE:

a) Considerar a distância de 100km entre a cidade de Ribeirão Preto <-> Franca.

b) Considerar 2 pedágios como obstáculo e que o caminhão leva 5 minutos a mais para passar em cada um deles e o carro possui tag de pedágio (Sem Parar)

c) Explique como chegou no resultado.

 

5) Escreva um programa que inverta os caracteres de um string.



IMPORTANTE:

a) Essa string pode ser informada através de qualquer entrada de sua preferência ou pode ser previamente definida no código;

b) Evite usar funções prontas, como, por exemplo, reverse;

*/