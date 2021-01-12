#include <iostream>

int main()
{
    bool pressed = false;
    unsigned char a;  // cant really type it..
    std::cout << "Press Enter to continue..." << std::flush;
    while(true)
    {
        std::cin >> a;
        if(a != 200 && pressed)
        {
            return 0;
        }
    }

}

