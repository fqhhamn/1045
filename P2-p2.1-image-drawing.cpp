#include "splashkit.h"

const string IMAGE_NAME = "cat";

int main()
{

    double scale_x, scale_y;
    string user_input;
    bitmap cat;

    write("Enter x scale: ");
    user_input = read_line();
    scale_x = to_double(user_input);
    write_line();

    write("Enter y scale: ");
    user_input = read_line();
    scale_y = to_double(user_input);

    open_window("Image Drawing", 1000, 800);

    cat = load_bitmap(IMAGE_NAME, "cat.png");

    draw_bitmap(cat, 10, 20);
    draw_bitmap(IMAGE_NAME, 220, 20, option_scale_bmp(scale_x, scale_y));

    refresh_screen();
    delay(5000);
}