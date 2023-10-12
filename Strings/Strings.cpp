// Strings.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int count = 1;
    int i = 0;
    string one = "hello";
    string two;
    string endit = "end";

    while (i == 0) 
    {
        cin >> two;
        if (one.compare(two) == 0) {
            cout << "They are equal\n";
            cout << "This is loop " << count << "\n";
            count++;
        }

        if (one.compare(two) != 0 && endit.compare(two) != 0) {
            cout << "They are not equal\n";
            cout << "This is loop " << count << "\n";
            count++;
        }       

        if (endit.compare(two) == 0) {
            cout << "Bye\n";
            i++;
        }
    }
}
