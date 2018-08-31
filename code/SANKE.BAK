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
   int status, button, x, y,a,b,initx,inity,endx,endy,cl=0,cl1=0,cl2=1,linew;
   char array[50];
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
      fp=fopen("sanke1.DAT","w");
	if(fp==NULL)
	{
		puts("cannot open the file !!!");
		exit(1);
	}
      while(!kbhit())
      {
		getmousepos(&button,&x,&y);
		delay(5);
		if(button!=1 && cl1>0)
		{
			initx=0;
			inity=0;
			endx=0;
			endy=0;
			cl1=0; // tell that the continuation of pressing mouse button to draw a line is stop
			cl2=1; //flag telling whether the line button has stop by user
		}
	       else if( button == 1)
		{
			button = -1;
			if( cl2==1)
			{
				initx=x;
				inity=y;
				endx=x;
				endy=y;
				cl2=0;// it tells that one time we hane given value of initial and end point same as x & y
			}
			if(cl2==0)
			{
			if( cl==0)
			{

				initx=x;
				inity=y;
			       cl=1;  // falg tells switching b/w initial point and end point
			}
			else if(cl==1)
			{
				endx=x;
				endy=y;
				cl=0;
			}
			}
		       //	cl++;
		       cl1++;
			line(initx,inity,endx,endy);
			fprintf(fp,"%d\n%d\n%d\n%d\n",initx,inity,endx,endy);
		}
		else if( button == 2 )
		{
			button = -1;
			cleardevice();
			sprintf(array,"Right Button clicked x = %d y = %d",x,y);
			outtext(array);
		}
		//for going to tools bar
	       //	else if( button==1 && x>0 && x<70 && y>0 && y<439)



		//for going to width
	     //	else if( button==1 && x>0 && x<70 && y>0 && y<439)





		}
	}
   getch();
   fclose(fp);
   closegraph();
}
