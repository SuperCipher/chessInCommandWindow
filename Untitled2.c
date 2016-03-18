#include<stdio.h>
#include <string.h>
#define nul '\0'

typedef struct
{
    int rowch,row,player;
    char collumch,collum,*order[1];
}CM;

typedef struct
{
 char * vg;
 int player;
}VG;

int CMcheck(char, char, char , int, int);




int main()

{
    //init
    int erre_ch,a,b,i=1,z,x,q,w,u;
    CM c;
    VG g[9][9];                                                               /*[collum][row]*/
    char Grid[80][60],*y;




                                                                        /*VG initialize*/




g[1][1].vg="rook";          g[1][1].player=2;                             /* collum a */
g[1][2].vg='\0';            g[1][2].player=0;
g[1][3].vg="pawn";          g[1][3].player=2;
g[1][4].vg='\0';            g[1][4].player=0;
g[1][5].vg='\0';            g[1][5].player=0;
g[1][6].vg="pawn";          g[1][6].player=1;
g[1][7].vg='\0';            g[1][7].player=0;
g[1][8].vg="rook";          g[1][8].player=1;



g[2][1].vg="knight";                                                      /* collum b */
g[2][2].vg='\0';
g[2][3].vg="pawn";
g[2][4].vg='\0';
g[2][5].vg='\0';
g[2][6].vg="pawn";
g[2][7].vg='\0';
g[2][8].vg="knight";

g[2][1].player=2;
g[2][2].player=0;
g[2][3].player=2;
g[2][4].player=0;
g[2][5].player=0;
g[2][6].player=1;
g[2][7].player=0;
g[2][8].player=1;




g[3][1].vg="bishop";                                                    /* collum c*/
g[3][2].vg='\0';
g[3][3].vg="pawn";
g[3][4].vg='\0';
g[3][5].vg='\0';
g[3][6].vg="pawn";
g[3][7].vg='\0';
g[3][8].vg="bishop";

g[3][1].player=2;
g[3][2].player=0;
g[3][3].player=2;
g[3][4].player=0;
g[3][5].player=0;
g[3][6].player=1;
g[3][7].player=0;
g[3][8].player=1;




g[4][1].vg="king";                                                     /* collum d */
g[4][2].vg='\0';
g[4][3].vg="pawn";
g[4][4].vg='\0';
g[4][5].vg='\0';
g[4][6].vg="pawn";
g[4][7].vg='\0';
g[4][8].vg="queen";

g[4][1].player=2;
g[4][2].player=0;
g[4][3].player=2;
g[4][4].player=0;
g[4][5].player=0;
g[4][6].player=1;
g[4][7].player=0;
g[4][8].player=1;



g[5][1].vg="queen";                                                     /* collum e */
g[5][2].vg='\0';
g[5][3].vg="pawn";
g[5][4].vg='\0';
g[5][5].vg='\0';
g[5][6].vg="pawn";
g[5][7].vg='\0';
g[5][8].vg="king";


g[5][1].player=2;
g[5][2].player=0;
g[5][3].player=2;
g[5][4].player=0;
g[5][5].player=0;
g[5][6].player=1;
g[5][7].player=0;
g[5][8].player=1;




g[6][1].vg="bishop";                                                     /* collum f */
g[6][2].vg='\0';
g[6][3].vg="pawn";
g[6][4].vg='\0';
g[6][5].vg='\0';
g[6][6].vg="pawn";
g[6][7].vg='\0';
g[6][8].vg="bishop";


g[6][1].player=2;
g[6][2].player=0;
g[6][3].player=2;
g[6][4].player=0;
g[6][5].player=0;
g[6][6].player=1;
g[6][7].player=0;
g[6][8].player=1;





g[7][1].vg="knight";                                                     /* collum g */
g[7][2].vg='\0';
g[7][3].vg="pawn";
g[7][4].vg='\0';
g[7][5].vg='\0';
g[7][6].vg="pawn";
g[7][7].vg='\0';
g[7][8].vg="knight";


g[7][1].player=2;
g[7][2].player=0;
g[7][3].player=2;
g[7][4].player=0;
g[7][5].player=0;
g[7][6].player=1;
g[7][7].player=0;
g[7][8].player=1;



g[8][1].vg="rook";                                                     /* collum h */
g[8][2].vg='\0';
g[8][3].vg="pawn";
g[8][4].vg='\0';
g[8][5].vg='\0';
g[8][6].vg="pawn";
g[8][7].vg='\0';
g[8][8].vg="rook";


g[8][1].player=2;
g[8][2].player=0;
g[8][3].player=2;
g[8][4].player=0;
g[8][5].player=0;
g[8][6].player=1;
g[8][7].player=0;
g[8][8].player=1;





while(c.order!='\0')
{





    for(w=0 ; w<57 ; w++)
    {
    for(q=0 ; q<80 ; q++)
    {
          Grid[q][w]=' ';
    }
    }

        for(w=0 ; w<57 ; w=w+7)
    {
    for(q=0 ; q<80 ; q++)
    {
        Grid[q][w]='-';
    }
    }



    for(w=0 ; w<57 ; w++)
    {
    for(q=0 ; q<80 ; q=q+10)
    {
        Grid[q][w]='|';
    }
    }

for (x=0 ; x<8 ; x++)
{
    for(z=0 ; z<8 ; z++)
    {
        if(g[z+1][x+1].vg == "king" && g[z+1][x+1].player==1)
        {
            Grid[10*x+3][z*7+3]='k';
            Grid[10*x+4][z*7+3]='i';
            Grid[10*x+5][z*7+3]='n';
            Grid[10*x+6][z*7+3]='g';
            Grid[10*x+5][z*7+4]='1';

        }
        if(g[z+1][x+1].vg == "queen" && g[z+1][x+1].player==1)
        {
            Grid[10*x+3][z*7+3]='q';
            Grid[10*x+4][z*7+3]='u';
            Grid[10*x+5][z*7+3]='e';
            Grid[10*x+6][z*7+3]='e';
            Grid[10*x+7][z*7+3]='n';
            Grid[10*x+5][z*7+4]='1';

        }
        if(g[z+1][x+1].vg == "bishop" && g[z+1][x+1].player==1)
        {
            Grid[10*x+3][z*7+3]='b';
            Grid[10*x+4][z*7+3]='i';
            Grid[10*x+5][z*7+3]='s';
            Grid[10*x+6][z*7+3]='h';
            Grid[10*x+7][z*7+3]='o';
            Grid[10*x+8][z*7+3]='p';
            Grid[10*x+5][z*7+4]='1';

        }
        if(g[z+1][x+1].vg == "knight" && g[z+1][x+1].player==1)
        {
            Grid[10*x+3][z*7+3]='k';
            Grid[10*x+4][z*7+3]='n';
            Grid[10*x+5][z*7+3]='i';
            Grid[10*x+6][z*7+3]='g';
            Grid[10*x+7][z*7+3]='h';
            Grid[10*x+8][z*7+3]='t';
            Grid[10*x+5][z*7+4]='1';

        }
        if(g[z+1][x+1].vg == "pawn" && g[z+1][x+1].player==1)
        {
            Grid[10*x+3][z*7+3]='p';
            Grid[10*x+4][z*7+3]='a';
            Grid[10*x+5][z*7+3]='w';
            Grid[10*x+6][z*7+3]='n';
            Grid[10*x+5][z*7+4]='1';

        }
        if(g[z+1][x+1].vg == "rook" && g[z+1][x+1].player==1)
        {
            Grid[10*x+3][z*7+3]='r';
            Grid[10*x+4][z*7+3]='o';
            Grid[10*x+5][z*7+3]='o';
            Grid[10*x+6][z*7+3]='k';
            Grid[10*x+5][z*7+4]='1';

        }
        if(g[z+1][x+1].vg == "king" && g[z+1][x+1].player==2)
        {
            Grid[10*x+3][z*7+3]='k';
            Grid[10*x+4][z*7+3]='i';
            Grid[10*x+5][z*7+3]='n';
            Grid[10*x+6][z*7+3]='g';
            Grid[10*x+5][z*7+4]='2';

        }
        if(g[z+1][x+1].vg == "queen" && g[z+1][x+1].player==2)
        {
            Grid[10*x+3][z*7+3]='q';
            Grid[10*x+4][z*7+3]='u';
            Grid[10*x+5][z*7+3]='e';
            Grid[10*x+6][z*7+3]='e';
            Grid[10*x+7][z*7+3]='n';
            Grid[10*x+5][z*7+4]='2';

        }
        if(g[z+1][x+1].vg == "bishop" && g[z+1][x+1].player==2)
        {
            Grid[10*x+3][z*7+3]='b';
            Grid[10*x+4][z*7+3]='i';
            Grid[10*x+5][z*7+3]='s';
            Grid[10*x+6][z*7+3]='h';
            Grid[10*x+7][z*7+3]='o';
            Grid[10*x+8][z*7+3]='p';
            Grid[10*x+5][z*7+4]='2';

        }
        if(g[z+1][x+1].vg == "knight" && g[z+1][x+1].player==2)
        {
            Grid[10*x+3][z*7+3]='k';
            Grid[10*x+4][z*7+3]='n';
            Grid[10*x+5][z*7+3]='i';
            Grid[10*x+6][z*7+3]='g';
            Grid[10*x+7][z*7+3]='h';
            Grid[10*x+8][z*7+3]='t';
            Grid[10*x+5][z*7+4]='2';

        }
        if(g[z+1][x+1].vg == "pawn" && g[z+1][x+1].player==2)
        {
            Grid[10*x+3][z*7+3]='p';
            Grid[10*x+4][z*7+3]='a';
            Grid[10*x+5][z*7+3]='w';
            Grid[10*x+6][z*7+3]='n';
            Grid[10*x+5][z*7+4]='2';

        }
        if(g[z+1][x+1].vg == "rook" && g[z+1][x+1].player==2)
        {
            Grid[10*x+3][z*7+3]='r';
            Grid[10*x+4][z*7+3]='o';
            Grid[10*x+5][z*7+3]='o';
            Grid[10*x+6][z*7+3]='k';
            Grid[10*x+5][z*7+4]='2';

        }
    }
}


    for(w=0 ; w<57 ; w++)                                                       /*printf all*/
    {
    for(q=0 ; q<80 ; q++)
    {
            printf("%c",Grid[q][w]);

    }
    }



scanf("%c %d %s %d %c %d",&c.collumch,&c.rowch,&c.order,&c.player,&c.collum,&c.row);    /*printf("%c %d %s %c %d \n",c.collumch,c.rowch,c.order,c.collum,c.row);*/
fflush(stdin);
erre_ch=CMcheck(c.collumch ,c.collum ,c.order ,c.rowch ,c.row);            /*check input value*/

a=c.collumch;                                                              /*convert string into ascii*/
a=a-96;
b=c.collum;
b=b-96;

if(c.player==g[b][c.row].player)
{
   printf("invalid move\n");
   erre_ch=1;
}

if (strcmp(g[a][c.rowch].vg, c.order) == 0)                                /*check for wrong pick*/
{
   printf("invalid choose\n");
   erre_ch=1;
}



if(strcmp(c.order,"king") == 0)
{

    if(b!=a+1  )                                    /*check for wrong move*/
    {
        if( b!=a-1)
        {
            if(b!=a)
            {
                if(c.row!=c.rowch+1)
                {
                    if(c.row !=c.rowch-1)
                    {
                        if(c.row!=c.rowch)
                        {
                        printf("hello");

                        printf("invalid move \n");
                        erre_ch=1;
                        }
                    }
                }
            }
        }
    }
}
else if(strcmp(c.order,"rook") == 0 )
{
    if(a==b && c.rowch > c.row)
    {
        for(i=c.rowch ; g[a][i].vg != nul ; i--)
        {
        }
        if(i-1 >= c.row)
        {
            printf("invalid move \n");
            erre_ch=1;
        }
    }

   if(a==b && c.rowch < c.row)
    {
        for(i=c.rowch ; g[a][i].vg != nul ; i++)
        {
        }

        if(i+1<=c.row)
        {
            printf("invalid move \n");
            erre_ch=1;
        }
    }

     if(a<b && c.rowch == c.row)
    {
        }
        for(i=c.rowch ; g[i][c.row].vg != nul ; i++)
        {
        if(i<=b)
        {
            printf("invalid move \n");
            erre_ch=1;
        }
    }

     if(a>b && c.rowch == c.row)
    {
        for(i=c.rowch ; g[i][c.row].vg != nul ; i--)
        {
        }
        if(i>=b)
        {
            printf("invalid move \n");
            erre_ch=1;
        }
    }
}

else if(strcmp(c.order,"bishop") == 0 && c.player==1 )
{
    if(c.rowch<c.row)
    {

        if(c.rowch+1 !=c.row || b != a-1)
        {
            if(c.rowch+1 !=c.row || b != a+1)
            {
                printf("invalid move \n");
                erre_ch=1;
            }
        }
    }
    if(c.rowch>c.row)
    {
        if(c.rowch-1!=c.row || b != a-1)
        {
            if(c.rowch-1!=c.row || b != a)
            {
                if(c.rowch-1!=c.row || b != a+1)
                {
                    printf("invalid move \n");
                    erre_ch=1;
                }
            }
        }
    }
}

else if(strcmp(c.order,"bishop") == 0  && c.player==2 )
{
    if(c.rowch<c.row)
    {

        if(c.rowch+1 !=c.row || b != a-1)
        {
            if(c.rowch+1 !=c.row || b != a)
            {

                if(c.rowch+1 !=c.row || b != a+1)
                {
                    printf("invalid move \n");
                    erre_ch=1;
                }
            }
        }
    }
    if(c.rowch>c.row)
    {
        if(c.rowch-1!=c.row || b != a-1)
        {

            if(c.rowch-1!=c.row || b != a+1)
            {
                printf("invalid move \n");
                erre_ch=1;
            }

        }
    }
}

if(strcmp(c.order,"queen") == 0 )
{
    if(c.rowch+1 != c.row && a+1 != b)
    {
        printf("invalid move \n");
        erre_ch=1;
    }
    if(erre_ch==0)
    {

        if(c.rowch-1 != c.row && a+1 != b)
        {
            printf("invalid move \n");
            erre_ch=1;
        }
    }
    if(erre_ch==0)
    {
        if(c.rowch+1 != c.row && a-1 != b)
        {
            printf("invalid move \n");
            erre_ch=1;
        }
    }
    if(erre_ch==0)
    {
        if(c.rowch-1 != c.row && a-1 != b)
        {
            printf("invalid move \n");
            erre_ch=1;
        }
    }
}

if(strcmp(c.order,"knight") == 0 )
{
erre_ch=1;

    if(c.rowch+2 == c.row && a-1 == b)
    {
        erre_ch=0;
    }
    if(erre_ch==1)
    {
        if(c.rowch+2 == c.row && a+1 == b)
        {
            erre_ch=0;
        }
    }
    if(erre_ch==1)
    {
        if(c.rowch+1 == c.row && a-2 == b)
        {
            erre_ch=0;
        }
    }
    if(erre_ch==1)
    {
        if(c.rowch+1 == c.row && a+2 == b)
        {
            erre_ch=0;
        }
    }
      if(erre_ch==1)
    {
        if(c.rowch-1 == c.row && a-2 == b)
        {
            erre_ch=0;
        }
    }
     if(erre_ch==1)
    {
        if(c.rowch-1 == c.row && a-2 == b)
        {
            erre_ch=0;
        }
    }
    if(erre_ch==1)
    {
        if(c.rowch-1 == c.row && a+2 == b)
        {
            erre_ch=0;
        }
    }
    if(erre_ch==1)
    {
        if(c.rowch-2 == c.row && a-1 == b)
        {
            erre_ch=0;
        }
    }
    if(erre_ch==1)
    {
        if(c.rowch-2 == c.row && a+1 == b)
        {
            erre_ch=0;
        }
    }

    if (erre_ch==1)
    {
        printf("invalid move \n");
    }

}
else if(strcmp(c.order,"pawn") == 0  && c.player==1 )
{
erre_ch=1;

    if(g[b][c.row].vg == nul)
    {
        if(c.rowch-1==c.row && a==b)
        {
            erre_ch=0;
        }
    }
    if(c.rowch-1==c.row && a+1==b)
    {
         if(g[b][c.row].vg != nul)
        {
            erre_ch=0;
        }
    }
    if(c.rowch-1==c.row && a-1==b)
    {
        if(g[b][c.row].vg != nul)
        {
            erre_ch=0;
        }
    }


    if (erre_ch==1)
    {
        printf("invalid move \n");
    }
}

else if(strcmp(c.order,"pawn") == 0  && c.player==2 )
{
erre_ch=1;

    if(g[b][c.row].vg == nul)
    {
        if(c.rowch+1==c.row && a==b)
        {
            erre_ch=0;
        }
    }
    if(c.rowch+1==c.row && a+1==b)
    {
         if(g[b][c.row].vg != nul)
        {
            erre_ch=0;
        }
    }
    if(c.rowch+1==c.row && a-1==b)
    {
        if(g[b][c.row].vg != nul)
        {
            erre_ch=0;
        }
    }


    if (erre_ch==1)
    {
        printf("invalid move \n");
    }
}

if(erre_ch==0)                                                                   /*make a move*/
{

g[b][c.row].vg=g[a][c.rowch].vg;
g[a][c.rowch].vg='nul';
g[b][c.row].player=g[a][c.rowch].player;
g[a][c.rowch].player=0;
}



}


return 0;
}






int CMcheck(char collumch , char collum , char order , int rowch , int row)
{
    int x=0;

        switch (collumch)
    {
        case 'a': break;
        case 'b': break;
        case 'c': break;
        case 'd': break;
        case 'e': break;
        case 'f': break;
        case 'g': break;
        case 'h': break;

        default : {printf("invalid collum 1 \n");break;x=1;}
    }

    switch (collum)
    {
        case 'a': break;
        case 'b': break;
        case 'c': break;
        case 'd': break;
        case 'e': break;
        case 'f': break;
        case 'g': break;
        case 'h': break;

        default : {printf("invalid collum 2 \n");break;x=1;}
    }

    if(rowch < 1 || rowch > 8)
    {
        printf("row must be between 1-8\n"); x=1;
    }
    if(order=="king" || order=="rook" || order=="bishop" || order=="queen" || order=="knight" || order=="pawn")
    {
        printf("invalid order \n");x=1;
    }

    return x;
}


