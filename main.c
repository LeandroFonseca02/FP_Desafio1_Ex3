/*
Ismat - Engenheiria Informática 1º Ano
Fundamentos de Programação - Prof. Fracisco Pereira
Leandro Fonseca
17/11/2020 - 21:38
Resumo: Media ponderada de 3 provas
Inputs: float fltProva1, float fltProva2, float ftProva3
Outputs:
*/
#include <stdio.h>


int main() {

    float fltProva1,fltProva2,fltProva3,fltMedia;

    printf("Nota da Prova 1 (Peso2): ");
    scanf("%f", &fltProva1);

    printf("Nota da Prova 2 (Peso3): ");
    scanf("%f", &fltProva2);

    printf("Nota da Prova 3 (Peso5): ");
    scanf("%f", &fltProva3);

    fltMedia = ((fltProva1*2)+(fltProva2*3)+(fltProva3*5)) / 10;
    printf("Media final: %f", fltMedia);

    return 0;
}
