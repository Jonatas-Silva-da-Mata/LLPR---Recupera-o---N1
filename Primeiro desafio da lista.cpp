#include <stdio.h>
#include <locale.h>
 
int main() {
    setlocale (LC_ALL, "Portuguese_Brazil");
    
    int A, B, C, D;
    printf("Atribua os valores desejados:\n\n");
    
    printf("Digite o valor do primeiro n�mero: ");
    scanf("%d", &A);
    printf("Digite o valor do segundo n�mero: ");
    scanf("%d", &B);
    printf("Digite o valor do terceiro n�mero: ");
    scanf("%d", &C);
    printf("Digite o valor do quarto n�mero: ");
    scanf("%d", &D);
    
    if (B > C && D > A && C + D > A + B && C > 0 && D > 0 && A % 2 == 0 ){
        printf("\nValores aceitos.(:");
    }else{
    	printf("\nValores n�o aceitos.):\n");
	}
    
    
    return 0;
}
