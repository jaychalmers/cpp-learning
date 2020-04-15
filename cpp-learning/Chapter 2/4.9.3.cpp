//Create an array of a user-inputted size and fill it with random integers from 1-100.
//The function should have the signature "void RandomArrayFill(int* array, int size)"

#include <iostream>
#include <time.h>

using namespace std;

void RandomArrayFill(int* array, int size)
{
	srand(time(0));
	for (int i = 0; i < size; i++)
	{
		array[i] = rand() % 100 + 1;
	}
}

int main493()
{
	int arrSize;
	cout << "Enter the size of array to create: ";
	cin >> arrSize;
	cout << "Creating array and filling it with random numbers..." << endl;
	int* array = new int[arrSize];
	RandomArrayFill(array, arrSize);
	cout << "Array = {";
	for (int i = 0; i < arrSize; i++)
		cout << array[i] << (i == arrSize - 1 ? "" : ", ");
	cout << "}";
	return 0;
}