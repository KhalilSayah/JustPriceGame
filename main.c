#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int nombre=0,sa=0,conteur=0,replay=0,r=0;
    int niveau=0;
    printf("     _____   ______\n");
    printf("    | __  | | ____ |\n");
    printf("    |_| | | ||____||\n");
    printf("        | | | _____|\n");
    printf("        | | | |\n");
    printf("     _  | | | |\n");
    printf("    | \\_| | | | \n");
    printf("     \\____/ |_|        just price game  \n");
    printf("*************************************\n");
    printf("avant de commancer choisissez un niveau de jeu :\n");
    printf("----------------NIVEAUX-------------\n");
    printf("---------------1)facile -------------\n");
    printf("---------------2)moyen -------------\n");
    printf("---------------3)difficile -------------\n");
    printf("votre choix : \n");
    scanf("%d",&niveau);

    switch(niveau)
    {
    case 1:
        {
            do {
    //***********************nombre aleatoire************************
    srand(time(NULL));
   nombre = rand()%100;
   if (nombre == 0)
    nombre = rand()%100;
   //****************************************************************
   printf("je vien de choisir un nombre entre 1 et 100 esseye de le deviner : \n");
   do
   {
       scanf("%d",&sa);
       if (sa < nombre)
        printf("c est plus !\t");
       else if (sa > nombre)
        printf(" c est moin ! \t");
       else if (sa<1 || sa>100)
        printf("verifiez votre nombre ! \t");
        else if (sa == nombre){
            printf("BRAVO ! vous avez trouvez le nombre exact en %d essais !\n",conteur+1);
            printf("entrez ---> 0 pour rejouer sinon ----> 1 pour arreter ! \n");
            scanf("%d",&replay);
            conteur =-1;
            if (replay == 0)
                r = 1;
            else
                r = 0;
        }


        conteur++;
        printf("nombre d'essais : %d\n",conteur);

} while (sa != nombre);
}while(r == 1);
break;
        }
    case 2 :
        {
            do {
    //***********************nombre aleatoire************************
    srand(time(NULL));
   nombre = rand()%1000;
   if (nombre == 0)
    nombre = rand()%1000;
   //****************************************************************
   printf("je vien de choisir un nombre entre 1 et 1000 esseye de le deviner : \n");
   do
   {
       scanf("%d",&sa);
       if (sa < nombre)
        printf("c est plus !\t");
       else if (sa > nombre)
        printf(" c est moin ! \t");
       else if (sa<1 || sa>1000)
        printf("verifiez votre nombre ! \t");
        else if (sa == nombre){
            printf("BRAVO ! vous avez trouvez le nombre exact en %d essais !\n",conteur+1);
            printf("entrez ---> 0 pour rejouer sinon ----> 1 pour arreter ! \n");
            scanf("%d",&replay);
            conteur =-1;
            if (replay == 0)
                r = 1;
            else
                r = 0;
        }


        conteur++;
        printf("nombre d'essais : %d\n",conteur);

} while (sa != nombre);
}while(r == 1);
break;
        }
    case 3 :
        {
            do {
    //***********************nombre aleatoire************************
    srand(time(NULL));
   nombre = rand()%5000;
   if (nombre == 0)
    nombre = rand()%5000;
   //****************************************************************
   printf("je vien de choisir un nombre entre 1 et 5000 esseye de le deviner : \n");
   do
   {
       scanf("%d",&sa);
       if (sa < nombre)
        printf("c est plus !\t");
       else if (sa > nombre)
        printf(" c est moin ! \t");
       else if (sa<1 || sa>5000)
        printf("verifiez votre nombre ! \t");
        else if (sa == nombre){
            printf("BRAVO ! vous avez trouvez le nombre exact en %d essais !\n",conteur+1);
            printf("entrez ---> 0 pour rejouer sinon ----> 1 pour arreter ! \n");
            scanf("%d",&replay);
            conteur =-1;
            if (replay == 0)
                r = 1;
            else
                r = 0;
        }


        conteur++;

        printf("nombre d'essais : %d\n",conteur);

                           } while (sa != nombre);
                                     }while(r == 1);
                                                break;}

    default :
        {
           printf("veuillez introduire le numero correspendant au niveau !");
           break ;
        }
    }



}
