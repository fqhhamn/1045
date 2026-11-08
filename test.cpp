#include "splashkit.h"
int main()
{
    // Add Comment Here
    open_window("Shapes within Shapes", 750, 550);

    // [1] Add Comment Here
    clear_screen(COLOR_BLACK);

    // [2] Add Comment Here
    fill_rectangle(COLOR_WHITE, 350, 100, 300, 300);

    // [3] Add Comment Here
    fill_circle(COLOR_GREEN, 500, 250, 120);

    // [4] Add Comment Here
    fill_ellipse(COLOR_BLUE, 420, 180, 160, 100);

    // [5] Add Comment Here
    fill_circle(COLOR_PINK, 500, 240, 40);

    // [6] Add Comment Here
    fill_triangle(COLOR_RED, 500, 240, 470, 260, 530, 260);

    // Add Comment Here
    refresh_screen();

    // Add Comment Here
    delay(10000);
}
