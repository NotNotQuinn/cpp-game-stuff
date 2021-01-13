#include <string>
#include <iostream>
#include <cmath>

using std::string;

string sensor(string, int);

int main()
{   
    using std::cout;
    using std::cin;
    sensor(" YOOOOOO", 0);
    return 0;
}

string sensor(string unsensored, int sensor_level=2)
{
    if (sensor_level == 0)
    {
        return unsensored;
    }
    return "";
}