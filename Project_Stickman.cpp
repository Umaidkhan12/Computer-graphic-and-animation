#include <graphics.h>

int maxx, maxy, i;

int main()
{
    void stickman(int i, int x, int y, int color);
    void ground(int maxx, int maxy);
    void message(int color, int x1, int y1, int x2, int y2, char *str1, char *str2);

    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);
    setbkcolor(0);

    maxx = getmaxx();
    maxy = getmaxy();

    for (i = 0; i < maxx / 2 - 100; i += 5)
    {
        cleardevice();
        ground(maxx, maxy);

        setcolor(WHITE);
        outtextxy(i - 36, maxy / 2 + 90, "STICKMAN 1");
        stickman(i, i, maxy, BLUE);

        setcolor(WHITE);
        outtextxy((maxx - i) - 36, maxy / 2 + 90, "STICKMAN 2");
        stickman(i, maxx - i, maxy, RED);

        delay(100);
    }

    delay(900);
    cleardevice();

    ground(maxx, maxy);
    stickman(1, 215, maxy, BLUE);
    stickman(1, maxx - 215, maxy, RED);
    message(WHITE, 180, maxy - 40, maxx - 230, maxy - 40, "Yo.....?", "...");
    delay(700);
    cleardevice();

    ground(maxx, maxy);
    stickman(1, 215, maxy, BLUE);
    stickman(1, maxx - 215, maxy, RED);
    message(WHITE, 100, maxy - 40, maxx - 230, maxy - 40, "Not talk active,huh?", "...");
    delay(700);
    cleardevice();

    ground(maxx, maxy);
    stickman(1, 215, maxy, BLUE);
    stickman(1, maxx - 215, maxy, RED);
    message(WHITE, 150, maxy - 40, maxx - 240, maxy - 40, "Let's See...", "...?");
    delay(900);

    settextstyle(BOLD_FONT, 0, 6);
    outtextxy(maxx / 2 - 65, maxy / 2 - 20, "FIGHT");
    delay(500);
    cleardevice();

    ground(maxx, maxy);
    stickman(1, 215, maxy, BLUE);
    stickman(1, maxx - 215, maxy, RED);
    message(WHITE, 170, maxy - 40, 0, 0, "Fire ball", "");
    delay(400);
    cleardevice();

    for (i = 200; i <= maxx - 100; i += 8)
    {
        if (i >= maxx - 265)
        {
            ground(maxx, maxy);
            stickman(1, 215, maxy, BLUE);
            stickman(1, maxx - 215, maxy, RED);
            circle(maxx - 215, maxy - 90, 50);
            break;
        }
        else
        {
            ground(maxx, maxy);
            stickman(1, 215, maxy, BLUE);
            stickman(1, maxx - 215, maxy, RED);
            setcolor(RED);
            setfillstyle(SOLID_FILL, COLOR(255, 125, 115));
            fillellipse(i, maxy - 80, 10, 5);
            ellipse(i, maxy - 80, 0, 360, 10, 5);
            delay(10);
            cleardevice();
        }
    }

    ground(maxx, maxy);
    stickman(1, 215, maxy, BLUE);
    stickman(1, maxx - 215, maxy, RED);
    message(WHITE, 130, maxy - 40, maxx - 240, maxy - 40, "Hmm.... Not bad", "You...");
    delay(900);

    for (i = 0; i <= 2; i++)
    {
        ground(maxx, maxy);
        stickman(1, 215, maxy, BLUE);

        if (i % 2 == 0)
        {
            setcolor(WHITE);
            line(maxx - 205, maxy - 100, maxx - 205, maxy - 80);
            line(maxx - 215, maxy - 110, maxx - 215, maxy - 70);
            line(maxx - 225, maxy - 100, maxx - 225, maxy - 80);
        }
        else
        {
            stickman(1, maxx - 215, maxy, RED);
        }
        delay(80);
        cleardevice();
    }

    // cleardevice();
    ground(maxx, maxy);
    stickman(1, 215, maxy, RED);
    stickman(1, maxx - 215, maxy, BLUE);
    message(WHITE, 200, maxy - 40, 0, 0, "DIE.", "");
    delay(400);
    cleardevice();

    ground(maxx, maxy);
    stickman(1, 215, maxy, RED);
    stickman(1, maxx - 215, maxy, BLUE);
    message(WHITE, 0, 0, maxx - 240, maxy - 40, "", "Huh....!");
    delay(400);
    i = maxx - 130;
    while (i >= maxx - 380)
    {
        ground(maxx, maxy);
        stickman(1, 215, maxy, RED);
        stickman(1, maxx - 215, maxy, BLUE);
        setcolor(WHITE);
        line(maxx - 130, 370, i, 370);
        i -= 40;
        delay(1);
        cleardevice();
    }

    ground(maxx, maxy);
    stickman(1, 215, maxy, RED);
    stickman(1, maxx - 215, maxy, BLUE);
    message(WHITE, 0, 0, maxx - 320, maxy - 40, "", "Wh-what!?... H-how?");
    delay(900);
    cleardevice();

    ground(maxx, maxy);
    stickman(1, 215, maxy, RED);
    stickman(1, maxx - 215, maxy, BLUE);
    message(WHITE, maxx - 240, maxy - 40, 200, maxy - 40, "Imp...", "...");
    delay(900);

    for (i = 0; i <= 2; i++)
    {
        ground(maxx, maxy);
        stickman(1, 215, maxy, RED);

        if (i % 2 == 0)
        {
            setcolor(WHITE);
            line(maxx - 205, maxy - 100, maxx - 205, maxy - 80);
            line(maxx - 215, maxy - 110, maxx - 215, maxy - 70);
            line(maxx - 225, maxy - 100, maxx - 225, maxy - 80);
        }
        else
        {
            stickman(1, maxx - 215, maxy, BLUE);
        }
        delay(80);
        cleardevice();
    }

    ground(maxx, maxy);
    stickman(1, 215, maxy, RED);
    delay(400);
    cleardevice();

    for (i = 215; i >= 0; i-= 5)
    {
        ground(maxx, maxy);
        stickman(i, i, maxy, RED);
        delay(100);
        cleardevice();
    }

    setcolor(WHITE);
    settextstyle(BOLD_FONT,0,6);
    outtextxy(maxx / 2 - 50, maxy / 2, "END");

    getch();
    closegraph();
    return 0;
}

void ground(int maxx, int maxy)
{
    setcolor(WHITE);
    line(0, maxy - 48, maxx, maxy - 48);
}

void stickman(int i, int x, int y, int color)
{
    setcolor(color);
    circle(x, y - 120, 10); // Head
    setfillstyle(SOLID_FILL, color);
    floodfill(x, y - 120, color);
    line(x, y - 110, x, y - 80);      // Body
    line(x, y - 105, x - 10, y - 80); // Hand
    line(x, y - 105, x + 10, y - 80); // Hand
    if (i % 4 == 0)
    {
        line(x, y - 80, x, y - 50);
    }
    else
    {
        line(x, y - 80, x - 10, y - 50); // Leg
        line(x, y - 80, x + 10, y - 50); // Leg
        delay(10);
    }
}

void message(int color, int x1, int y1, int x2, int y2, char *str1, char *str2)
{
    settextstyle(DEFAULT_FONT, 0, 0);
    setcolor(color);
    delay(700);
    outtextxy(x1, y1, str1);
    delay(700);
    outtextxy(x2, y2, str2);
}
