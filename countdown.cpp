// Countdown, by Al Sweigart
// Show a countdown timer animation using a seven - segment display.
// This code is available at https ://nostarch.com/big-book-small-python-programming
// #14 COUNTDOWN

#include <iostream>
#include <string>
#include "sevseg.h"
#include "windows.h"
using namespace std;
int main() {
    int secondsLeft = 30;
    while (true) { // Main program loop.
        // Clear the screen by printing several newlines:
        for (int i = 0; i < 60; ++i)
            cout << '\n';

        // Get the hours / minutes / seconds from secondsLeft :
        // For example : 7265 is 2 hours, 1 minute, 5 seconds.
        // So 7265 / 3600 is 2 hours:
        string hours = to_string(secondsLeft / 3600);
        // And 7265 % 3600 is 65, and 65 / 60 is 1 minute:
        string minutes = to_string((secondsLeft % 3600) / 60);
        // And 7265 % 60 is 5 seconds:
        string seconds = to_string(secondsLeft % 60);

        // Get the digit strings from the sevseg module:
        string up = "", middle = "", down = "";
        getSevSegStr(hours, up, middle, down, 2, "*");
        getSevSegStr(minutes, up, middle, down, 2, "*");
        getSevSegStr(seconds, up, middle, down, 2);

        // Display the digits:
        cout << up << '\n';
        cout << middle << '\n';
        cout << down << '\n';

        if (secondsLeft == 0) {
            cout << "\n    * * * * BOOM * * * *\n";
            break;
        }
        Sleep(1000); // Insert a one - second pause. 
        --secondsLeft;
    }

    return 0;
}