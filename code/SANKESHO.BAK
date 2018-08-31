#include<graphics.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<iostream.h>
#include<dos.h>
#define gotoxy(y,x) printf("\033[%d;%dH",(x),(y))

union REGS i, o;

int initmouse()
{
   i.x.ax = 0;
   int86(0X33,&i,&o);
   return ( o.x.ax );
}

void showmouseptr()
{
   i.x.ax = 1;
   int86(0X33,&i,&o);
}

void getmousepos(int *button, int *x, int *y)
{
   i.x.ax = 3;
   int86(0X33,&i,&o);

   *button = o.x.bx;
   *x = o.x.cx;
   *y = o.x.dx;
}

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
void main()
{
   int status, button, x, y,a,b,initx,inity,endx,endy;
   FILE *fp;
    int g=DETECT,m,i;
   initgraph(&g,&m,"c:\tc\bgi");
   status = initmouse();
   a=getmaxx();
   b=getmaxy();
   show();
   if ( status == 0 )
   printf("Mouse support not available.\n");
   else
   {
      showmouseptr();
      getmousepos(&button,&x,&y);
      fp=fopen("CRDES.DAT","r");
	if(fp==NULL)
	{
		puts("cannot open the file !!!");
		exit(1);
	}
	while(fscanf(fp,"%d%d%d%d",&initx,&inity,&endx,&endy)!=EOF)
	{

		     line(initx,inity,endx,endy);
	}
	fclose(fp);
     getch();
   closegraph();
}
