#include<iostream>
using namespace std;
int function(int arr[], int index);
int main()
{
	int arr[8] = { 2,4,6,8,9,-5,-6,0 };
	cout << function(arr, 8) << endl;

	system("pause");
	return 0;
}
int function(int arr[], int index) {
	if (index <= 0) {
		return 0;
	}
	return (function(arr, index - 1) + arr[index - 1]);
}
