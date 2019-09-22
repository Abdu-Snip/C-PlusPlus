#include<iostream>
using namespace std;
int main() {
	int arr[50], num, index, no;
	cout << "Enter number of elements: ";
	cin >> no;
	
	for (int i = 0; i < no; i++) {
		cout << "Arr[" << i << "] = ";
		cin >> arr[i];
	}

	cout << "Enter new element: ";
	cin >> num;

	cout << "Enter index: ";
	cin >> index;


	for (int j = no - 1; j >= index - 1; j--)
	{
		arr[j + 1] = arr[j];
	}
	arr[index - 1] = num;

	for (int k = 0; k < no + 1; k++)
		cout << arr[k] <<endl;

	return 0;
}
