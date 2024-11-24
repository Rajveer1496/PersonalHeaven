#include <graphics.h>
#include <conio.h>  // for getch() to pause the output

int main() {
    // Initialize graphics mode
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    // Draw a circle with center (200, 200) and radius 50
    circle(200, 200, 50);

    // Keep the window open until a key is pressed
    getch();

    // Close the graphics mode
    closegraph();

    return 0;
}
