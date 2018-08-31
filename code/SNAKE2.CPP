#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<graphics.h>
#include<iostream.h>
#include<string.h>
#include<dos.h>
#define gotoxy(y,x) printf("\033[%d;%dH",(x),(y))
static int x[5]={0,35,50,50,35};
static int y[5]={0,385,385,370,370};
static int xp[5]={0,35,50,50,35};
static int yp[5]={0,385,385,370,370};
void show();
void player(int);
void button(int);
void showplayer();
void show()
{
   /* request auto detection */
//   int gdriver = DETECT, gmode, errorcode;
   int x, y;
//   int radius = 100;

   /* initialize graphics and local variables */
//   initgraph(&gdriver, &gmode, "C:\\TC\\bgi");

   /* read result of initialization */
//   errorcode = graphresult();
//   if (errorcode != grOk)  /* an error occurred */
//   {
//      printf("Graphics error: %s\n", grapherrormsg(errorcode));
 //     printf("Press any key to halt:");
//      getch();
 //     exit(1); /* terminate with an error code */
//   }

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
  // getch();
  // closegraph();
}

/*void show()
{
	int x,y;
	x = getmaxx() ;
	y = getmaxy() ;
	cout<<x<<"=="<<y;
	int i=1,j,ch,c=1;
	int a1=10,b1=380;
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
			outtextxy(a1,b1,msg);
			a1=b1+60;
			c=c++;
		}
		b1=b1-40;
		a1=a1-60;

	}
	if(ch==0)
	{
		for(i=0;i<10;i++)
		{
			sprintf(msg,"%d",c);
			outtextxy(a1,b1,msg);
			a1=a1-60;
			c=c++;
		}
		b1=b1-40;
		a1=a1+60;
       }
       }

       circle(35,385,5);
   /* clean up
   getch();
  // closegraph();
} */
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
void turn1()
{
	int p;
	re:
	for(p=1;p<3;p++)
	{
		button(p);
		player(p);
	}
	goto re;
}
void turn2()
{
	int p;
	re:
	for(p=1;p<3;p++)
	{
		button(p);
		player(p);
	}
	goto re;
}
void turn3()
{
	int p;
	re:
	for(p=1;p<4;p++)
	{
		button(p);
		player(p);
	}
	goto re;
}
void turn4()
{
	int p;
	re:
	for(p=1;p<5;p++)
	{
		button(p);
		player(p);
	}
	goto re;
}
void button(int p)
{
	char f;
	gotoxy(0,32);
	printf("\n\n\t\t\tplayer %d turn",p);
	printf("\n\t\t\tpress any key to throw dice& e to exit");
	f=getch();
	if(f=='e')
	{
		exit(1);
	}
}
void player(int p)
{
	int q,r,z1,z2;
	int max=5;
	static int c[5]={0,0,0,0,0};
	static int div[5]={0,0,0,0,0};
	static int k[5]={0,0,0,0,0};
	randomize();
	r=rand()%6+1;
	if(c[p]+r>100)
	{	goto fe;
	}
	randomize();
	z1=rand()%4;
	randomize();
	z2=rand()%3;
	if(c[p]==0&&k[p]<z2+z1)
	{
		k[p]++;
		goto fe;
	}
	if(c[p]==0&&k[p]>=z1)
	{
		r=6;
	}
	for(q=1;q<=r;q++)
	{
		xp[p]=x[p];
		yp[p]=y[p];
		if(c[p]==0)
		{
			c[p]++;
			goto me;
		}
		if(c[p]%10==0)
		div[p]=c[p]/10;
		if(x[p]<540&&div[p]%2==0)
		{
			if(c[p]%10==0)
			{
			y[p]=y[p]-40;
			c[p]++;
			}
			else
			{
			x[p]=x[p]+60;
			c[p]++;
			}
		}
		else if(x[p]>0&&div[p]%2==1)
		{
			if(c[p]%10==0)
			{
			y[p]=y[p]-40;
			c[p]++;
			}
			else
			{
			x[p]=x[p]-60;
			c[p]++;
			}
		}
		me:
	       //	xp[p]=x[p];
	       //	yp[p]=y[p];
		showplayer();
	}
	fe:
}
void showplayer()
{
       //	cleardevice();
      //	show();
	setcolor(BLACK);
	circle(xp[1],yp[1],5);
	circle(xp[2],yp[2],5);
	circle(xp[3],yp[3],5);
	circle(xp[4],yp[4],5);
	setcolor(WHITE);
	circle(x[1],y[1],5);
	circle(x[2],y[2],5);
	circle(x[3],y[3],5);
	circle(x[4],y[4],5);
	delay(200);
}
void player1()
{

	circle(35,385,5);
}
void player2()
{
	circle(50,385,5);
}
void player3()
{
	circle(50,370,5);
}
void player4()
{
	circle(35,370,5);
}
void main()
{
	clrscr();
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

	show();
	getch();
	showplayer();
	turn1();
	//player1();
       //	player2();
	getch();
2	closegraph();
}