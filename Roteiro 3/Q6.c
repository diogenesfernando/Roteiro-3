#include <stdio.h>

float Percent(int c, int k){
    float f;

    f =((float)c*100)/(float)k;
    return f;
}

int main(){

    int votos[100], i = 0, c = 0, j =0, k, a = 0, maior = 0, indice = 0;
    int camisa[23] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23};
    float f, maiorf = 0;

    printf("Enquete: Quem foi o melhor jogador?\n\n");

    while (1) {
        printf("Numero do jogador (0=fim):\n");
        scanf("%d", &votos[i]);
        if (votos[i] == 0)
            break;

        if(votos[i] < 1 || votos[i] > 23){
            a++;
        }
        i++;
    }

    k = i-a;

    printf("\nResultado da votacao:\n\nForam computados %d votos\nJogador votos\n\n", k);

     for(i = 0; i < 23; i++){
        c = 0;

        for(j=0; j < k; j++){
            if(camisa[i] == votos[j]){
                c++;
            }
        }
        f = Percent(c,k);

        if(c > maior){
            maior = c;
            indice = i;
        }

        if(f > maiorf){
            maiorf = f;
        }

        if(c != 0){
            printf("%d\t %d \t %.2f%%\n", i + 1, c, f);
        }
    }

    printf("\nO melhor jogador foi o numero %d, com %d votos, correspondendo a %.2f%% dos votos.\n", indice + 1, maior, maiorf);

    return 0;
}
