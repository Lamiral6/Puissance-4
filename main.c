#include <stdio.h>
#include <conio.h>
#include <windows.h>

void gotoxy(float x, float y)
{
    HANDLE hConsoleOutput;
    COORD dwCursorPosition;
    fflush(stdout);
    dwCursorPosition.X = x;
    dwCursorPosition.Y = y;
    hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(hConsoleOutput,dwCursorPosition);
}


// Fonction pour dessiner un rectangle
void rectangle(int x, int y, int haut)
{
    int a=0; int b=0;int c=1; int newx=0;int collone=0;int compt=0; int col=7;int lon=49; int ligne=0;int l=0;int j=1;int newy=0;
   // for(a=0;a<=5;a++){

   // for(b=0;b<=6;b++){

     int i;
     gotoxy(x,y); printf("%c",218);
     gotoxy(x+lon,y); printf("%c",191);
   //  gotoxy(x, y+haut); printf("%c",192);
   //  gotoxy(x+lon, y+haut); printf("%c",217);// printf("c");
   if(ligne==0){
     for (i=1; i<lon;i++)
     {
         gotoxy(x+i,y); printf("%c",196);
         gotoxy(x+i,y+haut); printf("%c",196); compt++;
        // for (l=1; l<lon;l++)
         if(col==compt){l=l+col;
                     gotoxy(x+l,y-1);printf("%d", collone);

            gotoxy(x+i,y); printf("%c",194);
         gotoxy(x+i,y+haut); printf("%c",197);compt=0;     collone++;

         }
     }         l=l+col;        gotoxy(x+l,y-1);printf("6"); gotoxy(x,y+haut); printf("%c",179);         gotoxy(x+lon,y+haut); printf("%c",179);
     newx=col;
     compt=0;
         do{
             for (i=1; i<haut;i++)
     {
         gotoxy(x,y+i); printf("%c",179);
         gotoxy(x+newx,y+i); printf("%c",179);
     }
     newx=newx+col;
     compt++;
          }while  (compt<col) ;printf("0");}
   do{
        if(ligne>0 && ligne<5){
             newx=col;
        compt=0;
        newy=b*haut+y;
         for(compt=0;compt<col;compt++){
             for (i=1; i<haut;i++)
     {
         gotoxy(x,newy+i); printf("%c",179);
         gotoxy(x+newx,newy+i); printf("%c",179);

     }


     newx=newx+col;
    // compt++;
          }//while  (compt<col) ;
        do{
         gotoxy(x+j,newy+haut); printf("%c",196);a++;
                  if(col==a){
                gotoxy(x+j,newy+haut); printf("%c",197); a=0;

         }
         j++;
        }while(j<lon);j=1;a=0;
               gotoxy(x,newy+haut); printf("%c",179);         gotoxy(x+lon,newy+haut); printf("%c",179);
        } if(ligne<5){printf("%d", ligne);}
ligne++;b++;
   }while(ligne<7);     newy=5*haut+y;
  if(ligne==7){ compt=0;
    gotoxy(x, newy+haut); printf("%c",192);
    gotoxy(x+lon, newy+haut); printf("%c",217);printf("5");
      for (i=1; i<lon;i++)
     {
        // gotoxy(x+i,newy+haut); printf("%c",196);
         gotoxy(x+i,newy+haut); printf("%c",196); compt++;
         if(col==compt){
            gotoxy(x+i,newy+haut); printf("%c",193);
      compt=0;
         }
     }
     newx=col;
     compt=0;
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
        //printf("\n");//}
}



typedef struct Matrice Matrice ;

    struct Matrice {

    char mat[6][7];

    };







int main()
{
    printf("Hello world!\n");
    rectangle(3,3,3);gotoxy(6,27);
    return 0;
}
