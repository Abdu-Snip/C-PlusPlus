#include<iostream>
#define SIZE 5
using namespace std;

void insertionSort(int arr[], int n);

int main() {
	int arr[SIZE] = { 6, 2, 4, 5, 9 }, n = SIZE;
	cout << "Unsorted array: " << endl;
	for (int i = 0; i < SIZE; i++) {
		cout<<arr[i]<<endl;
	}
	insertionSort(arr, n);
	cout << "Sorted array: " << endl;
	for (int i = 0; i < SIZE; i++) {
		cout << arr[i] << endl;
	}
	return 0;
}

void insertionSort(int arr[], int n) {
	int i, key, j;
	for (i = 1; i < n; i++) {
		key = arr[i];
		j = i - 1;

		while (j >= 0 && arr[j] > key) {
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = key;
	}
}
