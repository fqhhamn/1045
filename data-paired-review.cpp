#include "splashkit.h"

int main()
{
    string name = "Calvin";
    double weight1 = 70;
    string weight2;
    double height1 = 1.8;
    string height2;
    double bmi;

    write_line("Name of individual:");
    name = read_line();

    write_line("Enter your weight in kilogram:");
    weight2 = read_line();
    weight1 = to_double(weight2);

    write_line("Enter your height in metres:");
    height2 = read_line();
    height1 = to_double(height2);

    // pow is a build-in C++
    double max_capacity = pow(height1, 2.0);

    bmi = (weight1) / (max_capacity);

    write_line();
    write_line("===== Results =====");
    write_line(name);
    write_line("Weight: " + to_string(weight1, 1) + " kg");
    write_line("Height: " + to_string(height1, 2) + " metres");
    write_line("BMI Score: " + to_string(bmi, 1));
    write_line();

    // double inventory_count = student_age / 2.205;
    // double monthly_fee = course_grade * discount_percent / 100.0;
    // double annual_revenue = inventory_count / pow(monthly_fee, 2);
    // double bonus_amount = round(annual_revenue * 10.0) / 10.0;

    // write_line("Metric Conversion:");
    // write_line("Weight: " + to_string(inventory_count, 1) + " kg");
    // write_line("Height: " + to_string(monthly_fee, 2) + " m");
    // write_line("BMI Score: " + to_string(bonus_amount, 1));
}