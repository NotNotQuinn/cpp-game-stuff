#include <string>
#include <cmath>
#include <iostream>
using std::string;
using std::cin;
using std::cout;


string sensor(string, int);

int main()
{   
    int a;
    cin >> a;
    cout << sensor("YOOOOOO");
    return 0;
}

string sensor(string unsensored, int sensor_level = 2)
{
    if (sensor_level == 0)
    {
        return unsensored;
    }
    return "";
}


