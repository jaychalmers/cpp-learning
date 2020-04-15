//Move token around map

#include <iostream>

using namespace std;

int main272()
{
    int width = 20;
    int x = width / 2;
    int y = width / 2;
    bool quit = false;

    while (!quit)
    {
        char input;
        cin >> input;

        system("CLS");

        switch (input)
        {
            case 'w':
                if (y > 0) y--;
                break;
            case 'a':
                if (x > 0) x--;
                break;
            case 's':
                if (y < width - 1) y++;
                break;
            case 'd':
                if (x < width - 1) x++;
                break;
            default:
                quit = true;
        }
        for (int i = 0; i < width; i++)
        {
            for (int j = 0; j < width; j++)
            {
                if ((i == y) && (j == x))
                {
                    cout << "*";
                }
                else
                {
                    cout << "_";
                }
                if (j == width - 1) cout << endl;
            }
        }
    }
    return 0;
}
