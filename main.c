#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int nouvellePartie=1;
    int nombreDeJoueur=1;
    int MAX, MIN = 1;
    int niveauDifficulte;
    int nombreMystere=0;
    srand(time(NULL)); /*generation nb aléatoire*/

    do /*boucle pour plusieurs parties*/
    {
        printf("\t\t Nombre de joueurs :\n \t 1.Mode 1 joueur \n \t 2.Mode 2 joueurs\n");
        printf("\t Quel mode de jeu choisissez vous ?");
        scanf("%d",&nombreDeJoueur);
switch(nombreDeJoueur)//gestion nb mystere en fct du mode choisi//
{
case 1:
    nombreMystere = (rand() % (MAX - MIN + 1)) + MIN; /*si un joueur alors nb aléatoire*/
    break;
case 2:
    printf("Joueur 1, entrez le nombre mystere :"); /*si 2 joueurs nb choisi*/
    scanf("%d",&nombreMystere);
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    break;
default:
    nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;
    break;
}

if(nombreDeJoueur==1)
 {
    printf("\t\t Niveau de difficulte :\n\n"); //choix du niv de difficulté//
    printf("\t 1.Simple (nb compris entre 1 et 50)\n \t 2.Normal (nb compris entre 1 et 100)\n \t 3.Difficile (nb compris entre 1 et 500) \n");
    printf("Choisir un niveau de difficule :");
    scanf("%d",&niveauDifficulte);

    switch(niveauDifficulte) /*gestion de la limite supérieur pour le nb aléatoire*/
    {
    case 1:
        MAX=50;
        break;
    case 2:
        MAX=100;
        break;
    case 3:
        MAX=500;
    break;
    default:
        MAX=10000;
        break;
    }

 }


int nombreJoueur=0, compteur=1;

while(nombreJoueur!=nombreMystere) //boucle de jeu : compare le nb entré et le nb cherché//
{

printf("Quel est le nombre ?", MIN, MAX);
scanf("%d",&nombreJoueur);
if(nombreJoueur>nombreMystere)
{
    printf("C'est moins !\n");
    compteur++;
}
else if(nombreJoueur<nombreMystere)
{
    printf("C'est plus !\n");
    compteur++;
}
else
{
    printf("Bravo, vous avez trouve le nombre mystere en %d coup(s)!!!\n",compteur);
    compteur=1;
    printf("Voulez vous rejouer ?\n 0:non 1: oui "); //gère la possibilité de rejouer une partie//
    scanf("%d", &nouvellePartie);
}
}
    }while(nouvellePartie==1);
    return 0;
}
