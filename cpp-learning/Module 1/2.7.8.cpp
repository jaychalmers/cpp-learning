//Simple sorting algorithm

#include <iostream>

using namespace std;

int main278()
{
    int inputs[10];
    for (int i = 0; i < 10; i++)
    {
        cout << "Please enter an integer (" << i + 1 << "/10): ";
        cin >> inputs[i];
    }
    for (int i = 0; i < 10; i++)
    {
        cout << inputs[i] << (i == 9 ? "" : ", ");
    }
    cout << endl << "Sorting..." << endl;
    for (int i = 0; i < 10; i++)
    {
        int smallestIndex = i;
        for (int j = i + 1; j < 10; j++)
        {
            if (inputs[j] < inputs[i])
            {
                int temp = inputs[i];
                inputs[i] = inputs[j];
                inputs[j] = temp;
            }
        }
    }
    for (int i = 0; i < 10; i++)
    {
        cout << inputs[i] << (i == 9 ? "" : ", ");
    }
    return 0;
}
