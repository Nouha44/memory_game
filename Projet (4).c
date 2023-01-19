#include <stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<windows.h>

int saisirL ()
{
    int n;
    printf("donner le nombre de ligne: \n");
    scanf("%d",&n);
    return n;
}
int saisirC ()
{
    int n;
    printf("donner le nombre de colonne: \n");
    scanf("%d",&n);
    return n;
}
char ** allocation(int l,int c)
{
    char **tab;
    int i;
    tab=(char**)malloc(l*sizeof(char*));
    if (!(tab)) exit(-1);
    for (i=0;i<l;i++)
    {
        *(tab+i)=(char*)malloc(c*sizeof(char));
        if(!(*(tab+i))) exit(-2);
            }
            return tab;

}
void remplirfichier(int l,int c)
{
   int i,j,d ;
   int rem[l*c],k,m,b;
   FILE *fichier ;
char **tab1 = malloc (sizeof *tab1 * l);
   if (tab1 != NULL)
   {
         for (i = 0; i < l; i++)
         {
            tab1[i] = malloc (sizeof *tab1[i] * c);}}
    for (i=0;i<l;i++)
        {
            for(j=0;j<c;j++)
        {
            do
            {
            printf("\n donner une Lettre:\n");

            *(*(tab1+i)+j)=getchar();
            while (*(*(tab1+i)+j)=='\n')
            {
                *(*(tab1+i)+j)=getchar();
            }

            }
            while((*(*(tab1+i)+j)!='A')&&(*(*(tab1+i)+j)!='B')&&(*(*(tab1+i)+j)!='C')&&(*(*(tab1+i)+j)!='D')&&(*(*(tab1+i)+j)!='E')&&(*(*(tab1+i)+j)!='F')&&(*(*(tab1+i)+j)!='G')&&(*(*(tab1+i)+j)!='H')&&(*(*(tab1+i)+j)!='I')&&(*(*(tab1+i)+j)!='J')&&(*(*(tab1+i)+j)!='K')&&(*(*(tab1+i)+j)!='L')&&(*(*(tab1+i)+j)!='M')&&(*(*(tab1+i)+j)!='N')&&(*(*(tab1+i)+j)!='O')&&(*(*(tab1+i)+j)!='P')&&(*(*(tab1+i)+j)!='Q')&&(*(*(tab1+i)+j)!='R')&&(*(*(tab1+i)+j)!='S')&&(*(*(tab1+i)+j)!='T')&&(*(*(tab1+i)+j)!='U')&&(*(*(tab1+i)+j)!='V')&&(*(*(tab1+i)+j)!='W')&&(*(*(tab1+i)+j)!='X')&&(*(*(tab1+i)+j)!='Y')&&(*(*(tab1+i)+j)!='Z'));

          }

        }
for (d=0;d<(l*c);d++)
rem[d]=0;
 for (i=0;i<l;i++)
    {
        for(j=0;j<c;j++)
       {   for (d=0;d<(l*c);d++)
               {
               { for (k=0;k<l;k++)
                {
                    for (m=0;m<c;m++)
                    {
                        if (*(*(tab1+i)+j) == *(*(tab1+k)+m) )
                            rem[d]+= 1 ; }}}}}
}
d=0;
if (rem[d]!=(l*c*2) )
{printf("ERREUR !!!! Matrice invalide");
        for (i=0;i<l;i++)
    {
        for(j=0;j<c;j++)
       {
 do
        {
              printf("\n donner une Lettre:\n");
            *(*(tab1+i)+j)=getchar();
            while (*(*(tab1+i)+j)=='\n')
            {
                *(*(tab1+i)+j)=getchar(); }}
while((*(*(tab1+i)+j)!='A')&&(*(*(tab1+i)+j)!='B')&&(*(*(tab1+i)+j)!='B')&&(*(*(tab1+i)+j)!='C')&&(*(*(tab1+i)+j)!='D')&&(*(*(tab1+i)+j)!='E')&&(*(*(tab1+i)+j)!='F')&&(*(*(tab1+i)+j)!='G')&&(*(*(tab1+i)+j)!='H')&&(*(*(tab1+i)+j)!='I')&&(*(*(tab1+i)+j)!='J')&&(*(*(tab1+i)+j)!='K')&&(*(*(tab1+i)+j)!='L')&&(*(*(tab1+i)+j)!='M')&&(*(*(tab1+i)+j)!='N')&&(*(*(tab1+i)+j)!='O')&&(*(*(tab1+i)+j)!='P')&&(*(*(tab1+i)+j)!='Q')&&(*(*(tab1+i)+j)!='R')&&(*(*(tab1+i)+j)!='S')&&(*(*(tab1+i)+j)!='T')&&(*(*(tab1+i)+j)!='U')&&(*(*(tab1+i)+j)!='V')&&(*(*(tab1+i)+j)!='W')&&(*(*(tab1+i)+j)!='X')&&(*(*(tab1+i)+j)!='Y')&&(*(*(tab1+i)+j)!='Z'));
       }}}
       else d++ ;

#define FNAME "test2.txt"
      {
         FILE *fichier = fopen (FNAME, "a" );
         if (fichier == NULL)
         {
            perror (FNAME);
         }
         else
         {
            int i;
            for (i = 0; i < l; i++)
            {
               int j;
               for (j = 0; j <c; j++)
               {
                  fprintf (fichier, "%c ", tab1[i][j]);
               }
            }
            fprintf (fichier, "?" );
         }
      }
}
void remplir_matrice1(FILE* fichier, int l, int c,char ** tab)
{ int i,j ;
#define FNAME "test2.txt"
fichier = fopen(FNAME, "r+");
  if (fichier!= NULL)
{ fseek(fichier, 0, SEEK_SET);
 do
 { for (i = 0;i <l; i++)
            {
               for (j = 0; j <c; j++)
               { tab[i][j] =fgetc(fichier);
               }
            }
 }
 while (fgetc(fichier) !='?') ;
fclose(fichier);}
}
void remplir_matrice2(FILE* fichier, int l, int c,char ** tab)
{ int i,j ;
#define FNAME "test2.txt"
fichier = fopen(FNAME, "r+");
  if (fichier!= NULL)
{ fseek(fichier, 0, SEEK_SET);
 fseek(fichier ,5 * sizeof(char), SEEK_CUR);
 do
 { for (i = 0;i <l; i++)
            {
               for (j = 0; j <c; j++)
               { *(*(tab+i)+j) =fgetc(fichier);
               }
            }
 }
 while (fgetc(fichier) !='?') ;
fclose(fichier);}
}
void remplir_matrice3(FILE* fichier, int l, int c,char ** tab)
{ int i,j ;
#define FNAME "test2.txt"
fichier = fopen(FNAME, "r+");
  if (fichier!= NULL)
{ fseek(fichier, 0, SEEK_SET);
 fseek(fichier ,21 * sizeof(char), SEEK_CUR);
 do
 { for (i = 0;i <l; i++)
            {
               for (j = 0; j <c; j++)
               { tab[i][j] =fgetc(fichier);
               }
            }
 }
 while (fgetc(fichier) !='?') ;
fclose(fichier);}
}
void affiche_matrice(char** tab,int l,int c)
{ int i,j ;
    for (i = 0; i < l; i++)
            {
               for (j =0; j<c; j++)
               {
               printf("%c \t",*(*(tab+i)+j));}
               printf("\n" );
            }
}


void Mettre_a_zero (char**tabs ,int l,int c)
{
    int i,j;
for ( i=0 ; i< l;i++)
    {
        for ( j=0; j< c;j++)
         {
              *(*(tabs+i)+j) = '0' ;
             }
             }
    }
void niveau (char** tab,int l,int c,FILE* fichier)
{
    if((l*c)==4)
{
printf("\n********niveau facile********\n");
printf("\n********LEVEL2********\n");
printf("VOUS AVEZ 5 SECONDES POUR MEMORISEZ \n");
    remplir_matrice1(fichier,l,c,tab) ;
    affiche_matrice(tab,l,c) ;
    Sleep(5000);
system("cls");
}
if(((l*c)==6)||((l*c)==8))
{ printf("\n************niveau moyen ********\n");
    printf("VOUS AVEZ 10 SECONDES POUR MEMORISEZ \n");
   remplir_matrice2(fichier,l,c,tab) ;
       affiche_matrice(tab,l,c) ;
     Sleep(10000);
system("cls");
}
if(((l*c)==10)||(((l*c))==12))
{   printf("\n*************niveau difficile********\n");
    printf("VOUS AVEZ 15 SECONDES POUR MEMORISEZ \n");
    remplir_matrice3(fichier,l,c,tab) ;
    affiche_matrice(tab,l,c) ;
    Sleep(15000);
system("cls");
 }}
void jouer (char**tab,char**tabs ,int l,int c)
{ int nb,sc[6],i,j,m,w,l1,l2,c1,c2 ;
    do
        {
            printf("Entrer le nombre de joueurs :\n");
            scanf("%d",&nb);
        }
 while(nb>((l*c)/2));

        for (i=0;i<nb;i++)
            sc[i]=0;
printf("\n  Jouer maintenant ! \n") ;
for ( i=0 ; i< l;i++)
    { for ( j=0; j< c;j++)
         {
             printf("%c \t", *(*(tabs+i)+j));
             }
         printf("\n") ;
         }
w=l*c;
    while (w>0)
    {
        for (m=0;m<nb;m++)
     {
            printf("\n C'est le tour de  joueur  %d \n",m+1);
            printf("\n Donner la ligne et le colonne de la case : \n");
            scanf("%d%d",&l1,&c1);
            printf("\n Donner la ligne et le colonne de la case : \n");
            scanf("%d%d",&l2,&c2);
            if ((*(*(tabs+l1)+c1)=='0')&&(*(*(tabs+l2)+c2)=='0'))
            {
                           if (*(*(tab+l1)+c1)==*(*(tab+l2)+c2) && ((l1!=l2)||(c1!=c2)) )
                { w=w-2;
                sc[m]+=1;
                    printf("bravo!!! votre score  = %d  \n", sc[m]);
                    for (i=0;i<l;i++)
                       { for (j=0;j<c;j++)
                            { if (((i==l1)&&(j==c1))||((i==l2)&&(j==c2)))
                               {*(*(tabs+l1)+c1)=*(*(tab+l1)+c1) ;
                                *(*(tabs+l2)+c2)=*(*(tab+l2)+c2) ;}}}
                    for (i=0;i<l;i++)
                        {
                            for (j=0;j<c;j++)
                            printf("%c \t",*(*(tabs+i)+j));
                    printf("\n");}
                    }
 else
                {
                    printf("les deux lettres ne se correspondent pas \n");
printf("le score du joueur  est %d \n",sc[m]);
 for (i=0;i<l;i++)
                        {
                            for (j=0;j<c;j++)
                            printf("%c \t",*(*(tabs+i)+j));
                    printf("\n");
                    }
                    }
            }
        else
                        printf ("Attention tu as choisi une case deja utilisees!!!!");



                }
                }
for (i=0;i< nb;i++)
    {printf("\n le score de joueur numero %d = %d \n",i+1,sc[i]);}
    printf("\n************ Vous avez terminer !!! ************\n");
}
int Menu()
{int choix;
printf("\n Bienvenue dans le jeu Memory ! \n") ;
printf("\n *** MENU : *** \n 1.Administrateur: \n 2.Joueur : \n 3.Quitter") ;
do
{
    printf("\n Choisissez 1,2 ou 3 : \n");
    scanf("%d",&choix);
    system("cls");
}
while (choix !=1 && choix!=2 && choix!=3);
return choix;
}
void administrateur(char** tab,char **tabs,int l,int c ,FILE *fichier)
{ int choix ;
do
{
    l=saisirL ();
    c=saisirC ();
    if((l*c)%2 != 0 || (l*c==0))
        printf("matrice invalide!!!\n");
}
     while ((l*c)%2 != 0 ||(l*c==0)) ;
   tab=allocation(l,c);
    remplirfichier(l,c);
choix= Menu() ;
if (choix==3)
    return 0 ;
else if ( choix==1)
    administrateur(tab,tabs,l,c,fichier) ;
else
    {
    tabs=allocation(l,c);
    Mettre_a_zero (tabs,l,c);
    niveau(tab,l,c,fichier);
    jouer (tab,tabs ,l,c);

}

}
#define FNAME "test2.txt"
int main( )
{
     int i,n,j,l,c,k,m, l1,l2,c1,c2,nb, nbr,sc[5],w,choix;
     FILE*fichier ;
      char**tab ;
    char**tabs ;

choix=Menu();
if (choix==3)
    return 0 ;
else if ( choix==1)
    #define FNAME "test2.txt"
    administrateur(tab,tabs,l,c,fichier) ;
else
{ do
{
    l=saisirL ();
    c=saisirC ();
    if((l*c)%2 != 0 || (l*c==0))
        printf("matrice invalide!!!\n");
}
     while ((l*c)%2 != 0 ||(l*c==0)) ;
        tab=allocation(l,c);
      niveau(tab,l,c,fichier);
      tabs=allocation(l,c);
    Mettre_a_zero (tabs,l,c);
    jouer (tab,tabs ,l,c);

}
}
