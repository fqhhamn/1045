#include "splashkit.h"
int main()
{
    open_window("Sequence Image Sound", 750, 550);

    draw_bitmap("image.jpg", 175, 100);

    play_sound_effect("sound.ogg");

    refresh_screen();

    delay(4000);
}