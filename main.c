#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
typedef struct{
    int cod_postal;
    char RUE[20],ville[20];
}adresse;
typedef struct{
    char nom[20];
    int age;
    adresse add;
}persone;
int main() {
    int n,i;
    printf("Donner le NBr de perssone : ");
    scanf("%d",&n);
    persone p[n];
    for (i=0;i<n;i++){
        printf("les information de pessonne Nr-%d\n",i+1);
        printf("Taper le nom : ");
        scanf("%s",&p[i].nom);
        printf("Taper l'age : ");
        scanf("%d",&p[i].age);
        printf("Taper l'adresse !!\n");
        printf("Tpaer ville :");
        scanf("%s",&p[i].add.ville);
        printf("Tpaer le Rue :");
        scanf("%s",&p[i].add.RUE);
        printf("Tpaer cod postal :");
        scanf("%d",&p[i].add.cod_postal);
         }
    for(i=0;i<n;i++){
        printf("l'affichage des information de la personne N-%d\n",i+1);
        printf("Nom        -> %s\n",p[i].nom);
        printf("l'age      -> %d\n",p[i].age);
        printf("la ville   -> %s\n",p[i].add.ville);
        printf("Rue        -> %s\n",p[i].add.RUE);
        printf("cod postal -> %d\n",p[i].add.cod_postal);
    }

    return 0;
}
