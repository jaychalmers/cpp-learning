//Binary search according to a specific method signature. Can assume input data is odd cardinality.

#include <iostream>

using namespace std;

int BinSearch(int data[], int numElements, int searchKey);

int main377()
{
	int values[] = { 1,4,5,6,9,14,21,23,28,31,35,42,46,50,53,57,62,63,65,74,79,89,95 };
	int input = 0;
	cout << "Data: {";
	for (int i = 0; i < 23; i++)
	{
		cout << values[i] << ", ";
	}
	cout << "}" << endl;
	while (true)
	{
		cout << "Enter search key" << endl;
		cin >> input;
		int result = BinSearch(values, 23, input);
		if (result == -1)
		{
			cout << input << " not found." << endl;
		}
		else
		{
			cout << input << " in position " << result << endl;
		}
	}
	return 0;
}

int BinSearch(int data[], int numElements, int searchKey)
{
	int middle = numElements / 2;
	int remainingNumbers = numElements;
	while (true)
	{
		if (data[middle] == searchKey) return middle;
		remainingNumbers /= 2;
		if (data[middle] < searchKey)
		{
			//look up
			middle += (remainingNumbers % 2 == 0) ? remainingNumbers / 2 : remainingNumbers / 2 + 1;
		}
		else
		{
			middle -= remainingNumbers / 2 + 1;
		}
		if (remainingNumbers == 0) return -1;
	}
}