# Stickman fight project
This code is excutable in vs code.

# To run in turbo c++ :
- Add #include<conio.h>, #include<dos.h>
- Replace initgraph(&gd,&gm,NULL) to initgraph(&gd,&gm,"PATH OF YOUR BGI DIR")

# Example :
#include<graphics.h>
#include<conio.h>
#include<dos.h> // Optional(Use for handling interrupts, producing sound, date and time functions, etc)

int main() 
{

    int gd = DETECT, gm;
    initgraph(&gd,&gm,"c:\\turboc3\\bgi")

    // YOUR CODE
    
    getch();
    closegraph();
    return 0;
    
}
