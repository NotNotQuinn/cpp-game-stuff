#include <iostream>
using namespace std;  // my intellesence is being dumb

int main()
{
    _setmode(_fileno(std::stdout), _O_U8TEXT);
    cout << "OH NO!! youve been hacked!!" << endl;
    cout << endl << "Here are you options:" << endl;
    cout << endl << "    Press [1] to get hacked." << endl;
    cout << "    Press [2] to not get hacked." << endl;
    unsigned long long a = 0;
    cin >> a;
    cout << endl << "too late bucko, I win." << endl << endl;
    cin >> a;
    cout << "⣿⣿⣿⣿⣿⣿⠟⢉⣤⣴⣶⣶⣦⣬⣙⠻⠛⣉⣥⣤⣤⣬⡙⠿⣿⣿⣿⣿⣿" << endl
         << "⣿⣿⣿⣿⠟⢁⣴⣿⣿⡿⢿⣟⣛⠿⢿⣧⢻⣿⣿⣿⣿⣿⣿⣆⠹⣿⣿⣿⣿" << endl
         << "⣿⣿⣿⠏⣰⣿⣿⣯⣷⣿⣿⣟⣛⣛⡻⠾⣍⢽⣷⣶⣶⠶⣯⡭⢤⣉⠛⢿⣿" << endl
         << "⣿⠟⢛⢰⣿⣿⣿⣿⡿⢿⣛⢝⣢⣭⣭⣭⣭⣓⣁⠊⣉⣒⣤⣤⣤⣴⣃⡀⠙" << endl
         << "⠃⣴⣿⣼⣿⣿⣿⠫⠭⡽⢞⣻⣭⣭⠭⠍⠭⠽⢻⣿⣻⠫⠽⠿⠶⠖⣐⣾⡅" << endl
         << "⣴⣿⣿⣿⣿⣿⣿⣿⣴⡿⠿⣯⣉⣁⠄⠄⢒⣩⠏⠙⠛⠄⠄⠒⠒⠤⡾⠛⢁" << endl
         << "⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠿⠯⠥⠶⠖⠚⠛⢛⣓⣐⣐⣒⣒⡒⠄⠈⠿⣿" << endl
         << "⣿⣿⣿⣿⣿⣿⣿⡟⢻⡇⡶⣪⣭⣿⣿⣷⣶⣶⣦⣶⣦⣿⣿⣿⣾⣿⣿⠆⢸" << endl
         << "⣿⣿⣿⣿⣿⣿⣿⣷⡌⠇⡻⢟⡻⣿⣯⣽⣿⣽⣿⣽⣿⣼⣿⣽⢿⣿⠋⣰⣿" << endl
         << "⣿⣿⣿⣿⣿⡏⢿⣿⣿⣶⣌⢢⣝⠺⠭⠟⠛⠛⠛⠛⠻⠭⠽⢒⠋⠁⣼⣿⣿" << endl
         << "⠙⠻⢿⣿⣿⣿⣶⣤⣿⣿⣿⣿⣿⣿⣷⣶⣶⣶⣶⣶⣶⡶⠚⢁⣤⣴⣿⣿⣿" << endl
         << "⣿⣦⣄⣂⠨⠍⣉⣛⣛⡛⠛⠛⠻⠿⠿⠟⠛⠛⠛⠉⢡⣴⣾⣿⣿⣿⣿⣿⣿" << endl
         << "⣿⣿⣿⣿⣿⣷⣶⣶⣶⣦⣬⣭⣭⣭⣭⣭⣤⣶⣿⣶⣄⡙⢿⣿⣿⣿⣿⣿⣿" << endl;
    cin >> a;
    cin >> a;
}