#include <iostream>
using namespace std;

int main() {
    float sugar = 1.5;
    float butter = 1;
    float flour = 2.75;

    int cookies = 48;
    int cookies_wanted;

    cout << "How many cookies do you want to make? ";
    cin >> cookies_wanted;

    float sugar_needed = (cookies_wanted / cookies) * sugar;
    float butter_needed = (cookies_wanted / cookies) * butter;
    float flour_needed = (cookies_wanted / cookies) * flour;

    cout << "You need " << sugar_needed << " cups of sugar, " << butter_needed << " cups of butter, and " << flour_needed << " cups of flour." << endl;

    return 0;
}