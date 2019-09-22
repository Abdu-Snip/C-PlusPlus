#include<iostream>
using namespace std;
int main()
{
	int arr[8] = { 2,4,6,8,10,-5,-6,0 };
	for (int i = 0; i < 8; i++) {
		if (arr[i] < 0) {
			cout << arr[i] << endl;
		}
	}

	return 0;
	system("pause");
}

