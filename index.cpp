#include <iostream>
#include <string>
using namespace std;

int main() {

   float num1, num2;
   int operacao;

   cout << "----CALCULADORA----\n";

   cout << "\nEscreva o primeiro numero: ";
   cin >> num1;

   cout << "\nEscreva o segundo numero: ";
   cin >> num2;

   cout << "\nEscolha a Operacao:\n\n1- Soma\n2- Subtracao\n3- Multiplicacao\n4- Divisao\n\n";
   cin >> operacao;

   switch (operacao) {

   case 1:

    cout << "\nA soma e: " << num1 + num2 << "\n";

    break;

   case 2:

    cout << "\nA subtracao e: " << num1 - num2 << "\n";

    break;

   case 3:

    cout << "\nA multiplicacao e: " << num1 * num2 << "\n";

    break;

   case 4:

     if (num2 != 0) {

       cout << "\nA divisao e: " << num1 / num2 << "\n";

     } else {

       cout << "\nNao e possivel divisao com zero!\n";

     }

    break;

   default:

    cout << "\nOperacao Invalida!\n";

    break;
 }

    cout << "\nFim do programa!!";

    return 0;
}
