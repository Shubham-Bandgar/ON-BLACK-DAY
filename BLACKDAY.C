#include<stdio.h>
#include<conio.h>
#include<graphics.h>

#include<dos.h>


void main()
{
int gd,gm;
int x,y;
int color;

int i,j,kk;

detectgraph(&gd,&gm);


initgraph(&gd,&gm,"..\\bgi");



  settextstyle(SMALL_FONT,HORIZ_DIR,9);

 outtextxy(10,20,"ON THE 3RD ANNIVERSARY OF BLACK DAY,WE BOW OUR HEADS  ");
 outtextxy(40,70,"TO THE MARTYRED SOLDIER.");
 outtextxy(20,120,"THEIR SACRIFICE WILL NEVER BE");
 outtextxy(140,170,"FORGOTTEN...");
  settextstyle(BOLD_FONT,HORIZ_DIR,1);
 outtextxy(60,200,"RIP TO OUR REAL HEROES !!!");

getch();
  delay(2000);

cleardevice();




	line(250, 100, 250, 600);
	line(250, 100, 250, 600);
	setfillstyle(SOLID_FILL, WHITE);


	rectangle(225, 600, 275, 610);
	rectangle(200, 610, 300, 620);

	floodfill(227, 608, 15);
	floodfill(202, 618, 15);


	setfillstyle(SOLID_FILL, LIGHTRED);


	rectangle(250, 100, 650, 280);
	line(250, 160, 650, 160);
	floodfill(252, 158, 15);


	setfillstyle(SOLID_FILL, BLUE);

	circle(450, 190, 30);
	floodfill(452, 188, 15);
	setfillstyle(SOLID_FILL, WHITE);


	line(250, 160, 480, 160);
	line(250, 220, 480, 220);
	floodfill(252, 162, 15);


	setfillstyle(SOLID_FILL, WHITE);



	line(480, 160, 650, 160);
	line(480, 220, 650, 220);
	floodfill(482, 162, 15);


	setfillstyle(SOLID_FILL, GREEN);

	line(250, 220, 650, 220);
	floodfill(252, 278, 15);
	setcolor(RED);
	  settextstyle(TRIPLEX_SCR_FONT,HORIZ_DIR,7);
	 outtextxy(300,340,"JAY HIND");
	 setcolor(BROWN);
	     settextstyle(SMALL_FONT,HORIZ_DIR,7);
	outtextxy(480,450,"FAB CODING");
	delay(2000);
	closegraph();
}
