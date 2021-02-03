#include <iostream>


double mult(double num1, double num2)
{
    return num1 * num2;
}

int main()
{
    int fav_int;
    double rand_num;
    double lucky_num;

    std::cout << "Hello C++ World!" << std::endl << std::endl; // one empty line
    std::cout << "Okay, lets practive a little," << std::endl;
    std::cout << "Lets try to analyse you!" << std::endl;
    std::cout << "First, lets see your favorite whole number: ";

    std::cin >> fav_int;

    if (fav_int == 30) {  // not actually my favorite number, I dont think I have one.
        std::cout << "Very good, very good, " << fav_int << " is also my favorite!" << std::endl << std::endl;
    }
    else {
        std::cout << "Not bad, not bad, " << fav_int << " is a very good number!" << std::endl << std::endl;
    }

    std::cout << "Okay, now any number: ";
    std::cin >> rand_num;

    // std::cout << "Press enter to begin function execution!" << std::endl;

    // std::string temp;              // https://stackoverflow.com/questions/903221/press-enter-to-continue
    // std::getline(std::cin, temp);

    // couldnt get press enter to contue to work

    lucky_num = mult(fav_int, rand_num);

    std::cout << "SYKE! Were making you a lucky number using a function I made." << std::endl;

    if (lucky_num == 7) {
        std::cout << "Your lucky number for this week is " << lucky_num << ", congratulations! Thats a very lucky number." << std::endl;
    }
    else {
        std::cout << "Your lucky number for this week is " << lucky_num << ", I dont think you will find bad luck!" << std::endl;
    }
    std::cout << "Okay thats all for today!! Cya later, hopefully soon." << std::endl;
    return 0;  // optional
}
