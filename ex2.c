#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct cidade {
	
    float salario;
    int idade;
    char sexo;
    int Filhos;
};

int main() {
    struct cidade Cidade;
    float msalariobaixo = 0;
    float somaSalario = 0;
    int somafilhos = 0;
    float maiorSalario = 0;
    int menorIdade = 999;

    int contador = 0;

    while (1) {
    	
        printf("Informe o salario: ");
        scanf("%f", &Cidade.salario);

        if (Cidade.salario == 0) {
            if (contador == 0) {
                printf("Nenhum dado foi informado.\n");
                break;
            } else {
                break;
            }
        }

        printf("Informe a idade: ");
        scanf("%d", &Cidade.idade);

        printf("Informe o sexo (M/F): ");
        scanf(" %c", &Cidade.sexo);

        printf("Informe o numero de filhos: ");
        scanf("%d", &Cidade.Filhos);

        if (Cidade.salario < 300 && Cidade.sexo == 'F') {
            msalariobaixo += Cidade.idade;
        }

        somaSalario += Cidade.salario;
        somafilhos += Cidade.Filhos;

        if (Cidade.salario > maiorSalario) {
            maiorSalario = Cidade.salario;
        }

        if (Cidade.idade < menorIdade) {
            menorIdade = Cidade.idade;
        }

        contador++;
    }

    if (contador > 0) {
    	
        float msalariobaixo = msalariobaixo / contador;
        float mediaSalario = somaSalario / contador;
        float mediaFilhos = (float)somafilhos / contador;

        printf("\nResultados:\n");
        printf("a) A media de idade das mulheres com salario inferior a R$ 300,00: %.0f\n", msalariobaixo);
        printf("b) A media de salario da populacao: %.2f\n", mediaSalario);
        printf("c) A media do numero de filhos: %.0f\n", mediaFilhos);
        printf("d) O maior salario: %.2f\n", maiorSalario);
        printf("e) A menor idade: %d\n", menorIdade);
    }

    return 0;
}
