//Display range of ASCII characters

#include <iostream>

using namespace std;

int main276()
{
    for (int i = 33; i < 256; i++) {
        cout << i << ": " << (char)i << endl;
    }
    return 0;
}
