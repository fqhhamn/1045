#include "splashkit.h"
int main()
{
    open_window("P2 Part 1 Sequence: House Drawing", 1000, 800);

    fill_rectangle(COLOR_GREEN, 0, 600, 1000, 200);

    fill_rectangle(COLOR_SKY_BLUE, 0, 0, 1000, 600);

    fill_rectangle(COLOR_PINK, 200, 300, 500, 300);

    fill_rectangle(COLOR_BROWN, 800, 450, 40, 150);

    fill_triangle(COLOR_BROWN, 450, 180, 170, 300, 730, 300);

    fill_rectangle(COLOR_LINEN, 270, 360, 80, 100);

    fill_rectangle(COLOR_LINEN, 550, 360, 80, 100);

    fill_rectangle(COLOR_INDIAN_RED, 410, 450, 40, 150);
    fill_rectangle(COLOR_INDIAN_RED, 450, 450, 40, 150);

    fill_circle(COLOR_ROSY_BROWN, 425, 530, 10);

    fill_circle(COLOR_YELLOW, 0, 0, 120);

    fill_circle(COLOR_GREEN, 820, 400, 75);

    refresh_screen();

    delay(20000);
}