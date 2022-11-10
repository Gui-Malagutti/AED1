/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int qtd, i, intervalo;
    
    printf ("defina quantos numeros ");
    scanf ("%d", &qtd);
    
    printf ("intervalo de numeros ");
    scanf ("%d", &intervalo);
    
    for (i = 1;i <= qtd ; i = i + intervalo) {
    
    printf("\n i = %d ", i );
    
    }

    return 0;
}


