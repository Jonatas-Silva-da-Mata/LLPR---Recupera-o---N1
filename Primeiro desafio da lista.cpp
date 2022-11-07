#include <stdio.h>
#include <locale.h>
 
int main() {
    setlocale (LC_ALL, "Portuguese_Brazil");
    
    int A, B, C, D;
    printf("Atribua os valores desejados:\n\n");
    
    printf("Digite o valor do primeiro número: ");
    scanf("%d", &A);
    printf("Digite o valor do segundo número: ");
    scanf("%d", &B);
    printf("Digite o valor do terceiro número: ");
    scanf("%d", &C);
    printf("Digite o valor do quarto número: ");
    scanf("%d", &D);
    
    if (B > C && D > A && C + D > A + B && C > 0 && D > 0 && A % 2 == 0 ){
        printf("\nValores aceitos.(:");
    }else{
    	printf("\nValores não aceitos.):\n");
	}
    
    
    return 0;
}
