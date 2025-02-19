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
    int a; int b;int c=1; int newx=0;int verif=0;int compt=0; int col=7;int lon=49;
   // for(a=0;a<=5;a++){

   // for(b=0;b<=6;b++){

     int i;
     gotoxy(x,y); printf("%c",218);
     gotoxy(x+lon,y); printf("%c",191);
     gotoxy(x, y+haut); printf("%c",192);
     gotoxy(x+lon, y+haut); printf("%c",217);// printf("c");
     for (i=1; i<lon;i++)
     {
         gotoxy(x+i,y); printf("%c",196);
         gotoxy(x+i,y+haut); printf("%c",196); compt++;
         if(col==compt){
            gotoxy(x+i,y); printf("%c",194);
         gotoxy(x+i,y+haut); printf("%c",193);compt=0;
         }
     }
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
          }while  (compt<col) ;



     } //printf("\n");//}
//}


typedef struct Matrice Matrice ;

    struct Matrice {

    char mat[6][7];

    };







int main()
{
    printf("Hello world!\n");
    rectangle(6,6,3);rectangle(6,9,3);rectangle(6,12,3);rectangle(6,15,3);rectangle(6,18,3);rectangle(6,21,3);gotoxy(6,27);
    return 0;
}
