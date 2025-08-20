/*
Operador ternario





#include <stdio.h>

int main(){

int temperatura = 25;
int resultado;



resultado = temperatura >= 30 ? 1 : 0;

if (resultado == 1){ 
    printf ("Esta calor!\n");
}
 else {
        printf("Esta frio\n");
 }

}

//
//

*/

#include <stdio.h>

int main(){

    int num1 = 40, num2 = 20;
    int maior;

    num1 > num2 ? (maior = num1) : (maior = num2);

    printf ("O numero maior é: %d\n", maior);



}