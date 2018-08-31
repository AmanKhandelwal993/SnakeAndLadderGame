#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<graphics.h>
#include<iostream.h>
#include<string.h>
#define gotoxy(y,x) printf("\033[%d;%dH",(x),(y))
void show();
void show()
{
   /* request auto detection */
   int gdriver = DETECT, gmode, errorcode;
   int x, y;
   int radius = 100;

   /* initialize graphics and local variables */
   initgraph(&gdriver, &gmode, "C:\\TC\\bgi");

   /* read result of initialization */
   errorcode = graphresult();
   if (errorcode != grOk)  /* an error occurred */
   {
      printf("Graphics error: %s\n", grapherrormsg(errorcode));
      printf("Press any key to halt:");
      getch();
      exit(1); /* terminate with an error code */
   }

   x = getmaxx() ;
   y = getmaxy() ;
   cout<<x<<"=="<<y;
	int i=1,j,ch,c=1,a=0;
	int x1=10,y1=380;
	char msg[50];
	for(i=0;i<660;i=i+60)
	{
		line(i,0,i,400);

	}

	for(i=0;i<440;i=i+40)
	{
		line(0,i,600,i);

	}

       //outtextxy(10,400,msg);
       for(j=1;j<11;j++)
       {
	ch=j%2;
	if(ch==1)
	{
		for(i=0;i<10;i++)
		{
			sprintf(msg,"%d",c);
			outtextxy(x1,y1,msg);
			x1=x1+60;
			c=c++;
		}
		y1=y1-40;
		x1=x1-60;

	}
	if(ch==0)
	{
		for(i=0;i<10;i++)
		{
			sprintf(msg,"%d",c);
			outtextxy(x1,y1,msg);
			x1=x1-60;
			c=c++;
		}
		y1=y1-40;
		x1=x1+60;
       }
       }
       circle(35,385,5);
   /* clean up */
   getch();
  // closegraph();
}
void show1()
{
	int i=0;
	for(i=0;i<20;i++)
	{
		gotoxy(0,i);
		printf("_");
	}
	for(i=0;i<70;i=i+7)
	{
		gotoxy(i,0);
		printf("_");
	}
}
void show3()
{

	circle(380,30,5);
}


void main()
{
	clrscr();
	show();
	show1();
	getch();
	show3();
}