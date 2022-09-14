
#include <stdio.h>
#include <stdlib.h>

int soustraction (int nombre1 , int nombre2  )

{
 int resultat ;
 resultat = (nombre1-nombre2);
 return(resultat);
}

int main()
{
    int facteur=5;
    printf("%d",soustraction(5,3));
    printf("\n");
    printf("%d",soustraction(4,16));

    return 0;
}
