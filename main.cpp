#include <iostream>
#include <string>

using namespace std;

void um(){
    cout << "1)\n";
    int indice{13};
    int soma{0};
    int k{0};

    while(k < indice){
        k += 1;
        soma += k;
    }

    cout << soma << endl;

    cout << endl;
}

void dois(int numero){
    cout << "2)\n";
    int a{0}, b{1};

    while(b < numero){
        int temp = b;
        b = a+b;
        a = temp;
    }

    if (b == numero){
        cout << "O número pertence a sequencia de Fibonacci.\n";
    }else{
        cout << "O número não pertence a sequencia de Fibonacci.\n";    
    }

    cout << endl;
}

void tres(){
    cout << "3)\n";
    cout << "a) A formação dos elementos é o elemento anterior somado de dois. n = (n-1) + 2. \n"
        <<  "Logo, o próximo elemento será 9, pois 7 + 2 = 9.\n";

    cout << "b) Os elementos são formados pela multiplicação do elemento anterior por 2. n = (n-1) * 2. \n"
         << "Logo, o próximo elemento será 128, pois 64 * 2 = 128.\n";

    cout << "c) Os elementos são formados pelo quadrado do elemento anterior. n = (n-1)^2.\n"
         << "Logo, o próximo elemento será 1296, pois 36^2 = 1296.\n";

    cout << "d) Os elementos foram formados pelo quadrado dos números pares. 4 = 2^2; 16 = 4^2; 36 = 6^2; 64 = 8^2."
         << "Logo, o próximo elemento será 100, pois 10^2 = 100.\n";

    cout << "e) Os elementos são formados pela sequência de fibonacci. n= (n-1) + (n-2).\n"
         << "Logo, o próximo elemento será 13, pois 5 + 8 = 13.\n";

    cout << "f) Os elementos são formados pelos números de começam com a letra 'd'. Dois, Dez, Doze, Dezesseis...\n"
         << "Logo, o próximo elemento será 200, pois se chama Duzentos.\n";

    cout << endl;
}

void quatro(){
    cout << "4)\n";
    cout << "Primeira ida: \n"
         << "Ligue o primeiro interruptor.\n"
         << "Deixe os outros dois interruptores desligados e vá para a sala das lâmpadas.\n"
         << "A lampada ligada está conectada ao primeiro interruptor. Volte a sala dos interruptores.\n"
         << "Segunda ida: \n"
         << "Ligue o segundo e vá para a sala das lâmpadas.\n"
         << "Você já sabe qual lâmpada acesa está conectada ao primero interruptor.\n"
         << "A nova lâmpada acesa está conectada ao segundo interruptor.\n" 
         << "Por eliminação, a lâmpada apagada está conectada ao terceiro interruptor.\n";

    cout << endl;
}

void cinco(string linha){
    
    cout << "5)\n";
    cout << linha << '\n';
    int index = linha.size();
    while(index >= 0){
       
        cout << linha[index];
       
        
        index--;
     }

    
    cout << endl;
}



int main(){

    um();

    //Altere a variaável nnmero para executar a questão dois.
    int numero = 13;

    dois(numero);

    tres();

    quatro();

    //Altere a variavel linha para executar a questão cinco.
    string linha = "Hello, world!";
    cinco(linha);

    return 0;
}