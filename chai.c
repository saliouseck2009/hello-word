#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	char nom[100] ;
	/*nom[0] ='s' ;
	nom[1] ='e' ;
	nom[2] = 'c';
	nom[3] = 'k';
	nom[4] ='\0';
	printf(" votre nom est : %s",nom);*/ 
    printf(" entrer votre nom :");
    scanf("%s",nom);
    printf("%s",nom); 
    int size = strlen (nom);
    //system("cls");
    system("cls");
    printf("\n %d",size);

	return 0;

}