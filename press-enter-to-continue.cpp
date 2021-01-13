#include <iostream>
//#include <optional>

int main()
{
    bool sent = false;
    optional<sent> input;

    do 
    {
        if (!sent) 
        {
            std::cout << "Press a key to continue...";
            sent = true;
        }
    } while (std::cin.get() != '\n');
    return 0;
}

