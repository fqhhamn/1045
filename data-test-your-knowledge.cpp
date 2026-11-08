#include "splashkit.h"

int main()
{
    string file_path;
    string music_name;
    string user_input;
    double duration;
    double initial_volume;
    double repeat_volume;

    write_line("Welcome to the music play test");
    write_line();

    write("What file would you like to load? Enter path: ");
    file_path = read_line();

    write("What should I call this music? Enter name: ");
    music_name = read_line();
    write_line();

    write_line("Loading " + music_name + " music from " + file_path);
    music my_music = load_music(music_name, file_path);
    write_line();

    write("How long do you want to play it for? Enter seconds: ");
    user_input = read_line();
    duration = to_double(user_input);

    write("At what initial volume? Enter percent (0 to 1): ");
    user_input = read_line();
    initial_volume = to_double(user_input);

    write("At what repeat volume? Enter percent (0 to 1): ");
    user_input = read_line();
    repeat_volume = to_double(user_input);
    write_line();

    write_line("Playing " + music_name + " at " + to_string(initial_volume, 2) + " volume for " + to_string(duration, 2) + " seconds...");
    play_music(my_music, 1, initial_volume);
    delay(duration * 1000);

    write_line("Stopping music");
    stop_music();
    write_line();

    write_line("Playing " + music_name + " at " + to_string(repeat_volume, 2) + " volume for " + to_string(duration, 2) + " seconds...");
    play_music(my_music, 1, repeat_volume);
    delay(duration * 1000);

    write_line("Stopping music");
    stop_music();

    return 0;
}