#include <stdio.h>
#include <stdlib.h>
struct eleve{
    char name[30];
    int x ;
}abdo;

int main()
{
   int  w , i=0 , a=0 , y=20 , z=0  ;
   printf(" enterz le nombre d'eleves ; ");
   scanf("%d",&w);
    struct eleve abdo[w] ;
    for(  i ; i < w ; i++){
     printf(" Entrez le nom de l'eleve numéro %d ",i+1);
    scanf("%s", abdo[i].name);
    printf(" entrez la moyenne de l'eleve %s ",abdo[i].name);
    scanf("%d",&abdo[i].x);
    if(abdo[i].x>20 || abdo[i].x<0){
        printf("saisissez une vraie moyenne la prochaine fois ;");
        break ;
    }
    if(z<abdo[i].x){
        z=abdo[i].x;
    }
    if( y > abdo[i].x){
        y = abdo[i].x ;
    }
    a = a+abdo[i].x;

    }
    for( int q=0 ; q < w ; q++){
     if( abdo[q].x==z){
        printf(" la plus haute moyenne est celle d'%s , qui a une moyenne de %d .\n",abdo[q].name , abdo[q].x);
     }
     }
      for( int s=0 ; s < w ; s++){
     if( abdo[s].x==y){
        printf(" la plus basse moyenne est celle de %s , pui ue moyenne %d  .\n",abdo[s].name , abdo[s].x);
     }
     }
     float r = a/w ;
     printf(" la moyenne de la claase de %d ;",r);
}
