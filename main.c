#include <stdio.h>

int main()
{
int num1;
int num2;
int num3;

printf("Digite o primeiro número: ");
scanf("%d", &num1);

printf("Digite o segundo número: ");
scanf("%d", &num2);

printf("Digite o terceiro número: ");
scanf("%d", &num3);

if(num1 > num2 && num1 > num3){
     printf("O primeiro número (%d) é o maior e o", num1);
} else if (num2 > num1 && num2 > num3){
     printf("O segundo número (%d) é o maior e o", num2);
} else if (num3 > num1 && num3 > num2){
     printf("O terceiro número (%d) é o maior e o", num3);
} 

if(num1 < num2 && num1 < num3){
     printf(" primeiro número (%d) digitado é o menor!", num1);
} else if (num2 < num1 && num2 < num3){
     printf(" segundo número (%d) digitado é o menor!", num2);
} else if(num3 < num1 && num3 < num2){
printf(" terceiro número (%d) digitado é o menor!", num3);
}

return 0;
}