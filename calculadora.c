#include <stdio.h>

void somar(){
    float value1;
    float value2;
    float total;

    printf("\nValor 1: ");
    scanf("%f", &value1);

    printf("\nValor 2: ");
    scanf("%f", &value2);

    total = value1+value2;

    printf("Calculando: %.2f + %.2f = %.2f", value1,value2,total);
}

void subtrair(){
    float value1;
    float value2;
    float total;

    printf("\nValor 1: ");
    scanf("%f", &value1);

    printf("\nValor 2: ");
    scanf("%f", &value2);

    total = value1-value2;

    printf("Calculando: %.2f- %.2f = %.2f", value1,value2,total);
}

void multiplicar(){
    float value1;
    float value2;
    float total;

    printf("\nValor 1: ");
    scanf("%f", &value1);

    printf("\nValor 2: ");
    scanf("%f", &value2);

    total = value1*value2;

    printf("Calculando: %.2f x %.2f = %.2f", value1,value2,total);
}

void dividir(){
    float value1;
    float value2;
    float total;

    printf("\nValor 1: ");
    scanf("%f", &value1);

    printf("\nValor 2: ");
    scanf("%f", &value2);

    total = value1/value2;

    printf("Calculando: %.2f / %.2f = %.2f", value1,value2,total);
}


int main(){
    int op;

    do{ 
    printf("Selecione uma operção:\n 1-Somar;\n 2-Subtrair;\n 3-Multiplicar;\n 4-Dividir.");
    scanf("%d",&op);
    }while (op<0 || op>5 );


    switch (op)
    {
    case 1:
        somar();
        break;
    case 2:
        subtrair();
        break;
    case 3:
        multiplicar();
        break;
    case 4:
        dividir();
        break;
    
    default:
        break;
    }
}
