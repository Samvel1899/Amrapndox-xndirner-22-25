#include <iostream>

using namespace std;

int main() {

	int SIZE;
	cout << "Yntreq qarakusayin matrici SIZE-y: ";
	cin >> SIZE;

	int** arr = new int* [SIZE];

	cout << "\nlracreq zangvaci tarrery\n";

	for (int i = 0; i < SIZE; ++i)
	{
		arr[i] = new int[SIZE];
		for (int j = 0; j < SIZE; ++j)
		{
			cin >> arr[i][j];
		}
	}

	cout << endl;

	for (int i = 0; i < SIZE; i++)
	{
		cout << "| ";
		for (int j = 0; j < SIZE; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << "|";
		cout << endl;
	}

	cout << "\nGlxavor ev Ojandak ankyunagci tarreri gumary:\n";
	int sum = 0;

	for (int i = 0; i < SIZE; i++)
	{
		sum += (arr[i][i] + arr[i][SIZE - i - 1]);
	}
	cout << sum;

	for (int k = 0; k < SIZE; ++k)
	{
		delete[] arr[k];
	}
	delete[] arr;
	return 0;
}