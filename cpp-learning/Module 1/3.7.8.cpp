//Bubble sort algorithm

#include <iostream>

using namespace std;

#define ARRAY_SIZE 10
#define END_COMMA (i == ARRAY_SIZE - 1 ? "" : ", ")

void BubbleSort(int data[], int n);

int main378()
{
	int data[ARRAY_SIZE];
	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		cout << "Please insert an integer (" << i + 1 << "/10):" << endl;
		cin >> data[i];
	}
	cout << "Entered: ";
	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		cout << data[i] << END_COMMA;
	}
	cout << endl << "Sorting..." << endl;
	BubbleSort(data, ARRAY_SIZE);
	cout << "Sorted data: {";
	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		cout << data[i] << END_COMMA;
	}
	cout << "}" << endl;
	return 0;
}

void BubbleSort(int data[], int n)
{
	int subArrayEnd = n - 1;
	int nextEnd;
	while (subArrayEnd > 0)
	{
		nextEnd = 0;
		for (int i = 0; i <= subArrayEnd - 1; i++)
		{
			if (data[i] > data[i + 1])
			{
				int temp = data[i + 1];
				data[i + 1] = data[i];
				data[i] = temp;
				nextEnd = i;
			}
		}
		subArrayEnd = nextEnd;
	}
}