#include <graphics.h>
#include <conio.h>
#include <dos.h>
#include <stdlib.h>
#include <iostream.h>

int maxx, maxy;

void road()
{
   line(0, maxy - 50, maxx, maxy - 50);
   line(0, maxy - 200, maxx, maxy - 200);

   /* line(0,maxy - 100,10,maxy - 100);
   line(40,maxy - 100,50,maxy - 100); */

   for (int i = 10; i <= maxx; i += 40)
   {
      line(i, maxy - 125, i + 10, maxy - 125);
   }
}

class Car
{
public:
   void car1(int x, int y)
   {
      line(x, maxy - y, x + 40, maxy - y);
      line(x, maxy - y, x - 15, maxy - (y - 10));
      line(x + 40, maxy - y, x + 55, maxy - (y - 15));
      line(x - 15, maxy - (y - 10), x - 15, maxy - (y - 25));
      line(x + 55, maxy - (y - 15), x + 65, maxy - (y - 15));
      line(x + 65, maxy - (y - 15), x + 65, maxy - (y - 25));
      line(x + 65, maxy - (y - 25), x + 45, maxy - (y - 25));
      line(x - 15, maxy - (y - 25), x - 5, maxy - (y - 25));
      ellipse(x + 38, maxy - (y - 25), 0, 180, 7, 7);
      circle(x + 38, maxy - (y - 25), 5);
      line(x + 30, maxy - (y - 25), x + 10, maxy - (y - 25));
      ellipse(x + 2, maxy - (y - 25), 0, 180, 7, 7);
      circle(x + 2, maxy - (y - 25), 5);
      line(x + 5, maxy - (y - 5), x + 15, maxy - (y - 5));
      line(x + 5, maxy - (y - 5), x - 5, maxy - (y - 11));
      line(x + 15, maxy - (y - 5), x + 15, maxy - (y - 11));
      line(x - 5, maxy - (y - 11), x + 15, maxy - (y - 11));
      line(x + 25, maxy - (y - 5), x + 38, maxy - (y - 5));
      line(x + 38, maxy - (y - 5), x + 45, maxy - (y - 12));
      line(x + 25, maxy - (y - 5), x + 25, maxy - (y - 12));
      line(x + 25, maxy - (y - 12), x + 45, maxy - (y - 12));
   }

   void car2(int x, int y)
   {
      line(x, maxy - y, x + 40, maxy - y);
      line(x, maxy - y, x - 15, maxy - (y - 15));
      line(x + 40, maxy - y, x + 50, maxy - (y - 10));
      line(x - 15, maxy - (y - 15), x - 25, maxy - (y - 15));
      line(x + 50, maxy - (y - 10), x + 50, maxy - (y - 25));
      line(x - 25, maxy - (y - 15), x - 25, maxy - (y - 25));
      line(x - 25, maxy - (y - 25), x - 5, maxy - (y - 25));
      line(x + 50, maxy - (y - 25), x + 40, maxy - (y - 25));
      ellipse(x + 33, maxy - (y - 25), 0, 180, 7, 7);
      circle(x + 33, maxy - (y - 25), 5);
      line(x + 25, maxy - (y - 25), x + 10, maxy - (y - 25));
      ellipse(x + 2, maxy - (y - 25), 0, 180, 7, 7);
      circle(x + 2, maxy - (y - 25), 5);
      line(x + 5, maxy - (y - 5), x + 20, maxy - (y - 5));
      line(x + 5, maxy - (y - 5), x - 5, maxy - (y - 12));
      line(x + 20, maxy - (y - 5), x + 20, maxy - (y - 12));
      line(x - 5, maxy - (y - 12), x + 20, maxy - (y - 12));
      line(x + 25, maxy - (y - 5), x + 38, maxy - (y - 5));
      line(x + 38, maxy - (y - 5), x + 45, maxy - (y - 12));
      line(x + 25, maxy - (y - 5), x + 25, maxy - (y - 12));
      line(x + 25, maxy - (y - 12), x + 45, maxy - (y - 12));
   }
};

void stickman(int i, int x, int y, int color)
{
   setcolor(color);
   circle(x, y - 98, 7); // Head
   setfillstyle(SOLID_FILL, color);
   floodfill(x, y - 98, color);
   line(x, y - 90, x, y - 70);      // Body
   line(x, y - 90, x - 10, y - 75); // Hand
   line(x, y - 90, x + 10, y - 75); // Hand
   if (i % 4 == 0)
   {
      line(x, y - 70, x, y - 50);
   }
   else
   {
      line(x, y - 70, x - 10, y - 50); // Leg
      line(x, y - 70, x + 10, y - 50); // Leg
      delay(10);
   }
}

void signal(int place, int color)
{
   /*line(maxx/2 - 10,maxy - 200,maxx/2 - 10,maxy - 300);
   line(maxx/2,maxy - 200,maxx/2,maxy - 300);*/
   rectangle(maxx / 2 - 10, maxy - 320, maxx / 2, maxy - 200);
   rectangle(maxx / 2, maxy - 320, maxx / 2 + 30, maxy - 260);
   setfillstyle(SOLID_FILL, color);
   circle(maxx / 2 + 15, maxy - 310, 7);
   circle(maxx / 2 + 15, maxy - 290, 7);
   circle(maxx / 2 + 15, maxy - 270, 7);
   floodfill(maxx / 2 + 15, maxy - place, WHITE);
}

int main()
{
   Car newCar;

   int gd = DETECT, gm;
   initgraph(&gd, &gm, "c:\\turboc3\\bgi");

   maxx = getmaxx();
   maxy = getmaxy();
   int c;

   while (!kbhit())
   {
      for (int i = 0; i <= 200; i += 10)
      {
	 c = i;
	 road();
	 signal(310,GREEN);

	 newCar.car1(i - 600, 180);
	 newCar.car1(i - 300, 180);
	 newCar.car1(i, 180);
	 newCar.car1(i + 300, 180);
	 newCar.car1(i + 600, 180);
	 newCar.car2(maxx - (i - 600), 105);
	 newCar.car2(maxx - (i - 300), 105);
	 newCar.car2(maxx - i, 105);
	 newCar.car2(maxx - (i + 300), 105);
	 newCar.car2(maxx - (i + 600), 105);
	 stickman(i, i, 300, WHITE);
	 stickman(i, (maxx - i), 310, WHITE);
	 delay(100);
	 cleardevice();
      }
      for (i = 200; i <= 480; i += 10)
      {
	 c = i;
	 road();
	 signal(290,YELLOW);
	 newCar.car1(i - 600, 180);
	 newCar.car1(i - 300, 180);
	 newCar.car1(i, 180);
	 newCar.car1(i + 300, 180);
	 //newCar.car1(i + 600, 180);
	 newCar.car2(maxx - (i - 600), 105);
	 newCar.car2(maxx - (i - 300), 105);
	 newCar.car2(maxx - i, 105);
	 newCar.car2(maxx - (i + 300), 105);
	 //newCar.car2(maxx - (i + 600), 105);
	 stickman(i, i, 300, WHITE);
	 stickman(i, (maxx - i), 310, WHITE);
	 delay(100);
	 cleardevice();
      }
      for(i = c;i <=700;i+=10)
      {
      road();
      signal(270,RED);
      newCar.car1(i,180);
      newCar.car1(c - 300,180);
      newCar.car2(maxx - i,105);
      newCar.car2(maxx - (c - 300),105);
      stickman(i,i,300,WHITE);
      stickman(i,(maxx - i),310,WHITE);
      delay(100);
      cleardevice();
      }
   }

   getch();
   closegraph();
   return 0;
}
