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
Joueur j1, j2;Matrice m;
void jouer_colonne(int tour, int position){

    int l,col=0;int newy=7;int newx=13;int a=position+1;int y=0;int c=4;
      // Joueur j1;
       char t;   int b=0;

   if(tour==1){
//m.mat[l][position]=j1.symbole;
   while(col!=position){
                newx=newx+7;
                col++;}// if(m.mat[0][position]!='x' || m.mat[0][position]!='o' ){
                  if(m.mat[5][position]!='x' && m.mat[5][position]!='o' ){b=0;//newy=newy+2;
                    //    m.mat[5][position]=j1.symbole;gotoxy(newx-1,19);b=1;printf("%c  ",j1.symbole);
                     //  if(m.mat[5][position]=='x' && m.mat[5][position]=='o' )   {
              for(l=0;l<6;l++){

                if(m.mat[l][position]!='x' && m.mat[l][position]!='o' ){//gotoxy(newx,newy);printf("%c",j1.symbole);
                    newy=newy+2;

                }
                 if(/*m.mat[l][position]=='x' || m.mat[l][position]=='o' ||*/ l==5){

                        m.mat[5][position]=j1.symbole; gotoxy(newx-1,newy);printf("%c",m.mat[l][position]);gotoxy(40+l,22+l);  printf("l- %d %c ",l,m.mat[l][position]);}

                }
                }else{ if(m.mat[0][position]!='x' && m.mat[0][position]!='o'){
                     for(l=0;l<6;l++){

                if(m.mat[l][position]!='x' && m.mat[l][position]!='o' ){//gotoxy(newx,newy);printf("%c",j1.symbole);
                    newy=newy+2;

                }
                 if(m.mat[l][position]=='x' || m.mat[l][position]=='o'  ){
         if(m.mat[l-1][position]!='x' && m.mat[l-1][position]!='o'  ){  m.mat[l-1][position]=j1.symbole; gotoxy(newx-1,newy);printf("%c",m.mat[l-1][position]);gotoxy(8,23);/*printf("cesr%c",m.mat[0][position]);*/}}
                     //   if(m.mat[1][position]=='x' || m.mat[1][position]=='o' && l==0 ){
                      //  m.mat[0][position]=j1.symbole; gotoxy(newx-1,newy-2);printf("%c",m.mat[0][position]);}


             /* gotoxy(40+l,22+l);  printf("l- %d %c  ",l,m.mat[l][position]); */  }
}  }          //  for(l=0;l<6;l++){gotoxy(38+l,23+l);printf("val de %d %c",l,m.mat[l][position]);}

                }


   if(tour==2){
            while(col!=position){newx=newx+7;col++;} //if(m.mat[0][position]!='x' || m.mat[0][position]!='o' ){
                 if(m.mat[5][position]!='x' && m.mat[5][position]!='o' ){

                        //m.mat[5][position]=j2.symbole;gotoxy(newx-1,19);printf("%c ",j2.symbole);
           for(l=0;l<6;l++){
                if(m.mat[l][position]!='x' && m.mat[l][position]!='o' ){//gotoxy(newx,newy);printf("%c",j2.symbole);
                    newy=newy+2;

                }
                   if(/*m.mat[l][position]=='x' || m.mat[l][position]=='o'||*/ l==5 ){

                        m.mat[5][position]=j2.symbole;gotoxy(newx-1,newy);printf("%c",m.mat[l][position]);gotoxy(40+l,22+l);  printf("l- %d %c ",l,m.mat[l][position]);
                }}}
                    else{ if(m.mat[0][position]!='x' && m.mat[0][position]!='o'){
                              for(l=0;l<6;l++){

                if(m.mat[l][position]!='x' && m.mat[l][position]!='o' ){//gotoxy(newx,newy);printf("%c",j2.symbole);
                    newy=newy+2;

                }
                   if(m.mat[l][position]=='x' || m.mat[l][position]=='o'  ){  if(m.mat[l-1][position]!='x' && m.mat[l-1][position]!='o'  ){
                        m.mat[l-1][position]=j2.symbole;gotoxy(newx-1,newy);printf("%c",m.mat[l-1][position]);/*gotoxy(8,23);printf("cesr%c",m.mat[0][position]);*/

                    }}
                  //   if(m.mat[1][position]=='x' || m.mat[1][position]=='o'&& l==0 ){
                       // m.mat[0][position]=j2.symbole; gotoxy(newx-1,newy-2);printf("%c",m.mat[0][position]);}

              //  }
             //}

          //  gotoxy(8,25);printf("%d", l);
              //  }
//gotoxy(40+l,22+l);  printf("l- %d %c ",l,m.mat[l][position]);
            }
//gotoxy(newx,newy);printf("%c",j2.symbole);//printf("%d %d",newx , newy);



   }   }

   }         //   for(l=0;l<6;l++){gotoxy(38+l,23+l);printf("val de %d %c",l,m.mat[l][position]);}
}

   void verif_gain(char symbole , int position){

   int l; int compt=0; int x=38; int y=22; int x2=55; int c=0;int p=0; int d=position;

   for(l=0;l<6;l++){

    if(m.mat[l][position]==symbole ){
        compt++; //gotoxy(49+2*l,y+l);printf("l- %d %c %d ",l,m.mat[l][position], compt);


    }           if(m.mat[l][position]!=symbole){gotoxy(x=x2+1,y);printf("%c", compt);compt=0;gotoxy(x=x+1,y);printf("%d", compt);}
                if(compt==4 && j1.symbole==symbole){gotoxy(38,23);printf("Victoire j1");break;}
                if(compt==4 && j2.symbole==symbole){gotoxy(38,24);printf("Victoirej2");break;}


   }
compt=0;
        for(l=0;l<6;l++){

        for(c=0;c<7;c++){
            if(m.mat[l][c]==symbole ){
                compt++; //gotoxy(49+2*l,y+l);printf("l- %d %c %d ",l,m.mat[l][position], compt);

    }           if(m.mat[l][c]!=symbole){compt=0;/*gotoxy(x=x2+1,y);printf("%c", compt);compt=0;gotoxy(x=x+1,y);printf("%d", compt);*/}
                if(compt==4 && j1.symbole==symbole){gotoxy(38,23);printf("Victoire j1");break;}
                if(compt==4 && j2.symbole==symbole){gotoxy(38,24);printf("Victoirej2");break;}

        }}

        compt=0;

         for(l=0;l<6;l++){

    if(m.mat[l][position]==symbole ){
            p=l;c=position;gotoxy(8,22);/*printf("trouve %d", p);*/ break; }  }gotoxy(8,22);printf("lellow1");
        for(l=p;l<6;l++){gotoxy(9,23);printf("lellow2");

        for(c=position;c>0;c--){gotoxy(10,24);printf("lellow3");
            if(m.mat[l][c]==symbole ){
                compt++;gotoxy(8,22);printf("trouve l%d c%d %d", l , c , compt);position=position-1;break; //gotoxy(49+2*l,y+l);printf("l- %d %c %d ",l,m.mat[l][position], compt);

    }           if(m.mat[l][c]!=symbole){compt=0;/*gotoxy(x=x2+1,y);printf("%c", compt);compt=0;gotoxy(x=x+1,y);printf("%d", compt);*/}


        }
        if(compt==4 && j1.symbole==symbole){gotoxy(38,23);printf("Victoire j1");break;}
                if(compt==4 && j2.symbole==symbole){gotoxy(38,24);printf("Victoirej2");break;}
        }

          compt=0;position=d;

         for(l=0;l<6;l++){

    if(m.mat[l][position]==symbole ){
            p=l;c=position;gotoxy(8,22);/*printf("trouve %d", p);*/ break; }  }gotoxy(8,22);printf("hellow1");
        for(l=p;l<6;l++){gotoxy(9,23);printf("hellow2");

        for(c=position;c<7;c++){gotoxy(10,24);printf("hellow3");
            if(m.mat[l][c]==symbole ){
                compt++;gotoxy(8,22);printf("trouve l%d c%d %d", l , c , compt);position=position+1;break; //gotoxy(49+2*l,y+l);printf("l- %d %c %d ",l,m.mat[l][position], compt);

    }           if(m.mat[l][c]!=symbole){compt=0;/*gotoxy(x=x2+1,y);printf("%c", compt);compt=0;gotoxy(x=x+1,y);printf("%d", compt);*/}


        }
        if(compt==4 && j1.symbole==symbole){gotoxy(38,23);printf("Victoire j1");break;}
                if(compt==4 && j2.symbole==symbole){gotoxy(38,24);printf("Victoirej2");break;}
        }

            compt=0;position=d;

         for(l=0;l<6;l++){

    if(m.mat[l][position]==symbole ){
            p=l;c=position;gotoxy(8,22);/*printf("trouve %d", p);*/ break; }  }gotoxy(8,22);printf("hellow1");
        for(l=p;l>0;l--){gotoxy(9,23);printf("hellow2");

        for(c=position;c<7;c++){gotoxy(10,24);printf("hellow3");
            if(m.mat[l][c]==symbole ){
                compt++;gotoxy(8,22);printf("trouve l%d c%d %d", l , c , compt);position=position+1;break; //gotoxy(49+2*l,y+l);printf("l- %d %c %d ",l,m.mat[l][position], compt);

    }           if(m.mat[l][c]!=symbole){compt=0;/*gotoxy(x=x2+1,y);printf("%c", compt);compt=0;gotoxy(x=x+1,y);printf("%d", compt);*/}


        }
        if(compt==4 && j1.symbole==symbole){gotoxy(38,23);printf("Victoire j1");break;}
                if(compt==4 && j2.symbole==symbole){gotoxy(38,24);printf("Victoirej2");break;}
        }


            compt=0;position=d;

         for(l=0;l<6;l++){

    if(m.mat[l][position]==symbole ){
            p=l;c=position;gotoxy(8,22);/*printf("trouve %d", p);*/ break; }  }gotoxy(8,22);printf("hellow1");
        for(l=p;l>0;l--){gotoxy(9,23);printf("hellow2");

        for(c=position;c>0;c--){gotoxy(10,24);printf("hellow3");
            if(m.mat[l][c]==symbole ){
                compt++;gotoxy(8,22);printf("trouve l%d c%d %d", l , c , compt);position=position-1;break; //gotoxy(49+2*l,y+l);printf("l- %d %c %d ",l,m.mat[l][position], compt);

    }           if(m.mat[l][c]!=symbole){compt=0;/*gotoxy(x=x2+1,y);printf("%c", compt);compt=0;gotoxy(x=x+1,y);printf("%d", compt);*/}


        }
        if(compt==4 && j1.symbole==symbole){gotoxy(38,23);printf("Victoire j1");break;}
                if(compt==4 && j2.symbole==symbole){gotoxy(38,24);printf("Victoirej2");break;}
        }





   }

void init_jeu(){
     char p1 ; char p2;int verif=0; int taille; int tour;int victoire=0; //Joueur *j1 = (Joueur*)malloc(sizeof(Joueur));
  //  Joueur *j2 = (Joueur*)malloc(sizeof(Joueur));

        gotoxy(8,22);printf("Nom Joueur 1:");
        gotoxy(8,23);printf("Nom Joueur 2:");
        gotoxy(22,22); scanf("%s", j1.joueur);
        gotoxy(22,23);scanf("%s", j2.joueur);
        //clrscr();
                    srand(time(NULL)); int random = 1 + rand() % 2;
        do{

        if(random==1){
        gotoxy(8,25);printf("%s choisi ton symbole (x/o):", j1.joueur);taille = strlen(j1.joueur);
        gotoxy(37+taille,25);scanf(" %c", &j1.symbole);
        } else{
         gotoxy(8,25);printf("%s choisi ton symbole (x/o):", j2.joueur);taille = strlen(j2.joueur);
        gotoxy(37+taille,25);scanf(" %c", &j2.symbole);
        }

        if(j1.symbole!='x' && j1.symbole!='o'&& j2.symbole!='x' && j2.symbole!='o'){
            gotoxy(8,26);printf("Erreur choisi ton symbole (x/o)");
        }else{verif=1;if(j1.symbole=='x'){j2.symbole='o';}if(j1.symbole=='o'){j2.symbole='x';}if(j2.symbole=='x'){j1.symbole='o';}if(j2.symbole=='o'){j1.symbole='x';}}
        }while(verif==0);
        //printf("%c %c", p1 , p2);gotoxy(8,26);printf("Appuyez sur une touche pour continuer");getchar();
        clrscr();grille4puissance();

        gotoxy(80,8);printf("JEU DE PUISSANCE 4");
        gotoxy(80,12);printf("Symbole de %s  : %c" , j1.joueur, j1.symbole);
        gotoxy(80,13);printf("Symbole de %s  : %c" , j2.joueur , j2.symbole);
             if(random==1){   gotoxy(80,17);printf("C'est  %s qui commence.", j1.joueur);}else{gotoxy(80,17);printf("C'est  %s qui commence.", j2.joueur);}


           //  if(random==1){   gotoxy(8,25);printf("C'est  %s qui commence.", j1.joueur);}else{gotoxy(8,25);printf("C'est  %s qui commence.", j2.joueur);}
             tour=random;int position1 ,position2;
            do{
               if(tour==1){    // gotoxy(8,27);printf(" %s Entre une position valide:", j1.joueur); gotoxy(38+taille,27);scanf("%d", &position1);
               do{ gotoxy(8,27);printf("  %s Entre une position valide:", j1.joueur); gotoxy(38+taille,27);scanf("%d", &position1);}while(position1<0 ||position1>6);
               jouer_colonne(tour,position1);verif_gain(j1.symbole,position1);tour=2;}

                if(tour==2){//gotoxy(8,27);printf("%s Entre une position valide:", j2.joueur); gotoxy(38+taille,27);scanf("%d", &position2);
                 do{ gotoxy(8,27);printf("  %s Entre une position valide:", j2.joueur); gotoxy(38+taille,27);scanf("%d", &position2);}while(position2<0 ||position2>6);
                 jouer_colonne(tour,position2);verif_gain(j2.symbole,position2);tour=1;}



             }while(victoire!=1 );



}



int main()
{
    printf("Hello world!\n");
   grille4puissance();init_jeu();   gotoxy(6,27);
//char tab[5];int i;tab[4]='c';// printf("%c\n" , tab[4]);for(i=0;i<5;i++){printf("%d %c\n" ,i, tab[i]);}

   //jouer_colonne();
  //  grille4puissance();jouer_colonne(6,1);gotoxy(6,27);
    return 0;
}
