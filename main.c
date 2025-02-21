#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <string.h>
#include <time.h>

void clrscr()
{
  system("cls");
}
void gotoxy(int x, int y)
{
    HANDLE hConsoleOutput;
    COORD dwCursorPosition;
    fflush(stdout);
    dwCursorPosition.X = x;
    dwCursorPosition.Y = y;
    hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(hConsoleOutput,dwCursorPosition);
}


// Fonction pour dessiner la grille
void grille4puissance()
{
    int a=0; int b=0; int newx=0;int collone=0;int compt=0; int col=7;int lon=49; int ligne=0;int l=0;int j=1;int newy=0; int i;int x=8; int y=8; int haut=2;
     gotoxy(x,y); printf("%c",218);
     gotoxy(x+lon,y); printf("%c",191);
   if(ligne==0){
     for (i=1; i<lon;i++)
     {
         gotoxy(x+i,y); printf("%c",196);
         gotoxy(x+i,y+haut); printf("%c",196); compt++;
         if(col==compt)
            {l=l+col;
            gotoxy(x+l,y-1);printf("%d", collone);
            gotoxy(x+i,y); printf("%c",194);
            gotoxy(x+i,y+haut); printf("%c",197);compt=0;     collone++;
            }
     }         l=l+col;
      gotoxy(x+l,y-1);printf("6"); gotoxy(x,y+haut); printf("%c",179);   gotoxy(x+lon,y+haut); printf("%c",179);
      newx=col;compt=0;
         do{
             for (i=1; i<haut;i++){
         gotoxy(x,y+i); printf("%c",179);
         gotoxy(x+newx,y+i); printf("%c",179);
     }
     newx=newx+col;compt++;
          }while  (compt<col) ;}
        do{
            if(ligne>0 && ligne<5){
                newx=col;compt=0;newy=b*haut+y;
         for(compt=0;compt<col;compt++){
             for (i=1; i<haut;i++)
     {
         gotoxy(x,newy+i); printf("%c",179);
         gotoxy(x+newx,newy+i); printf("%c",179);

     }
        newx=newx+col;
          }
        do{
         gotoxy(x+j,newy+haut); printf("%c",196);a++;
                  if(col==a){
                gotoxy(x+j,newy+haut); printf("%c",197); a=0;
         }
         j++;
        }while(j<lon);j=1;a=0;
               gotoxy(x,newy+haut); printf("%c",179); gotoxy(x+lon,newy+haut); printf("%c",179);
        }
        if(ligne<5){printf("%d", ligne);}
        ligne++;b++;
        }while(ligne<7);     newy=5*haut+y;
        if(ligne==7){ compt=0;
        gotoxy(x, newy+haut); printf("%c",192);
        gotoxy(x+lon, newy+haut); printf("%c",217);printf("5");
        for (i=1; i<lon;i++)
     {
         gotoxy(x+i,newy+haut); printf("%c",196); compt++;
         if(col==compt){
            gotoxy(x+i,newy+haut); printf("%c",193);
            compt=0;
         }
     }
     newx=col;compt=0;
         do{
             for (i=1; i<haut;i++)
     {
         gotoxy(x,newy+i); printf("%c",179);
         gotoxy(x+newx,newy+i); printf("%c",179);
     }
     newx=newx+col;
     compt++;
          }while  (compt<col) ;
     }
}



typedef struct Matrice Matrice ;

    struct Matrice {

    char mat[6][7];

    };

typedef struct Joueur Joueur ;

    struct Joueur {

    char joueur[100];
    char symbole;

    };


int main()
{
    printf("Hello world!\n");
   grille4puissance();
   //init_jeu();jouer_colonne();
   gotoxy(6,27);
  //  grille4puissance();jouer_colonne(6,1);gotoxy(6,27);
    return 0;
}
