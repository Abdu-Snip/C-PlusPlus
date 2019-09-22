#include<iostream>
using namespace std;
int main()
{
	int *p,*q[5];
	int x = 10, arr[5];
	p = &x;
	cout << "*p = " << *p << endl;
	cout << "&p = " << &p << endl;
	cout << " p = " <<  p << endl<<endl;
	for (int i = 0; i < 5; i++) {
		arr[i] = i;
	}
	for (int i = 0; i < 5; i++) {
		q[i]=&arr[i];
	}
	
	for (int i = 0; i < 5; i++) {
		cout << " q = " << q[i] << endl;
		cout << "*q = " << *q[i] << endl;
	}
	
	system("pause");
	return 0;
}