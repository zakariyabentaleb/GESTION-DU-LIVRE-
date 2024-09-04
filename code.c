#include<stdio.h>
#include <string.h>
#include <stdlib.h>

struct LIVRE 
{
  char Titre[50];
  char Auteur[50];
  float Prix ;
  int Quantite;
};
struct LIVRE stock [100];
int comp=0;

struct LIVRE ajouter(){
    printf("entrer le titre de livre :")
     scanf(" %[^\n]",stock.Titre);
    printf("entrer auteur de livre :")
      scanf(" %[^\n]",stock.Auteur);
    printf("entrer le prix de livre :")
      scanf("%f",&stock.Prix);
    printf("entrer la quantite de livre :");
      scanf("%d",&stock.Quantite);
       comp++;

}

struct LIVRE afficher(){
    for ( int  i = 0; i < comp; i++) {
    printf("%s\n",stock[i].Titre );
    printf("%s\n",stock[i].Auteur );
    printf("%.f\n",stock[i].Prix );
    printf("%d\n",stock[i].Quantite);
    }
}

struct Livre recherche(){
    char a;
    int test=0 ;
     printf("entrer le titre du livre rechercher");
     scanf(" %[^\n]",a);
    for ( int  i = 0; i < comp; i++) {
     if (strcmp(stock[i].Titre,a)==0)
    printf("%s\n",stock[i].Titre );
    printf("%s\n",stock[i].Auteur );
    printf("%.f\n",stock[i].Prix );
    printf("%s\n",stock[i].Quantite);
    test=1;
  }
  if(test==0){
    printf("livre non trouver");
  }

}


struct Livre update(){
     char a;
    int test=0 ;
    int b;
     printf("entrer le titre du livre Modifier");
     scanf(" %[^\n]",a);
    for ( int  i = 0; i < comp; i++) {
     if (strcmp(stock[i].Titre,a)==0){
        printf("le livre est ready");
        printf("entrer la nouvelle valeur de quantite");
        scanf("%d",&b);
        stock[i].Quantite=b;
        test=1;
 } }
     if(test==0)
     printf("livre introvable");
}

struct Livre suprimer(){
    char nmm;
    printf("enterz le titre du livre suprimer");
    scanf ("%s",&nmm);
    for ( int  i = 0; i < comp; i++){
        if (strcmp(stock[i].Titre,nmm)==0)

        for ( int  j = i; j < comp-1; j++){
            stock[j]=stock[j+1];
            comp--;
         
        }
  }
}
struct LIVRE somme(){
    int s;
    for (int i=0;i<comp;i++){
        s+=stock[i].Quantite;
    }
    printf("%d",s);
}

int main(){
int choix;
do { 
printf("/////////////////////////MENU//////////////////////");
printf("taper 1 pour ajouter un livre : \n");
printf("taper 2 pour afficher tous les livre  :  \n");
printf("taper 3 pour modifier la qualite d un livre :  \n");
printf("taper 4 pour suprimer un livre :  \n");
printf("taper 5 pour afficher le nombre total des livre :  \n");
scanf("%d",&choix);
switch (choix) {
            case 1:
                ajouter( );
                break;
            case 2:
                afficher();
                break;
            case 3:
                afficher();
                break;
            case 4:
                update();
                break;
            case 5:
                suprimer();
                break;
             case 6:
                somme();
                break;
            default:
                printf("choix introvable \n");
        }
        }while(choix!=5)

}