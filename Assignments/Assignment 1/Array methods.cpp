#include<iostream>
using namespace std;

	class ArrayUtility {		
	public:
		int findMax(int A[], int from, int to);
		int findMaxPos(int A[], int from, int to);
		int findMin(int A[], int from, int to);
		int findMinPos(int A[], int from, int to);
		void swap(int A[], int number1, int number2);
		void printArray(int A[],int size);
	};
	int ArrayUtility::findMax(int A[], int from, int to)  
	{
		int max, counter = 0, check=0;
		for (int k = from; k < to; k++)
		{
			if (counter == 0)
			{
				max = A[k];						}
			if (max < A[k+1])		
			{
				max = A[k + 1];
			}
			++counter;
		}
			return max;
	}

	int ArrayUtility::findMaxPos(int A[], int from, int to) 
	{
		int max, pos = 0;

		max = A[from];
		for(int i=from;i<to;i++)
		{
			if (max < A[i])
			{
				max = A[i];
				pos = i;
			}
		}
		return pos;
	}

	int ArrayUtility::findMinPos(int A[], int from, int to)
	{
		int min, pos = 0;

		min = A[from];
		for (int i = from; i < to; i++)
		{
			if (min > A[i])
			{
				min = A[i];
				pos = i;
			}
		}
		return pos;
	}

	int ArrayUtility::findMin(int A[], int from, int to)  
	{
		int min, counter = 0, check = 0;
		for (int k = from; k < to; k++)
		{
			if (counter == 0)
			{
				min = A[k];		
			}
			if (A[k]<min)		
			{
				min = A[k ];
			}
			++counter;
		}
		return min;
	}

	void ArrayUtility::printArray(int A[],int size) {
		for (int i = 0; i < size; i++)
		{
			cout <<"Arr["<<i<<"] = "<<A[i] << endl;
		}
	}

	void ArrayUtility::swap(int A[], int number1, int number2)
	{
		A[number1] = A[number1] + A[number2];
		A[number2] = A[number1] - A[number2];
		A[number1] = A[number1] - A[number2];	
	}


int main()
{
	ArrayUtility a;
	int size,arr[10],number1, number2,counter=0;

	do 
	{
		cout << "Enter number of elements you want to enter : ";
		cin >> size;
		if (size <= 0||size>10) 
		{ 
			cout << "Error: Out of Range"<<endl<<"Range: 1-10 (inclusive)" << endl; 
		}
	} while (size <= 0 || size > 10);
	
	for (int i = 0; i < size; i++) 
	{
		cout<<"Arr["<<i<<"] = ";
		cin >> arr[i];
	}

	cout <<endl<<"Maximum number is " << a.findMax(arr, 0, size) <<" at index "<<a.findMaxPos(arr,0,size)<< endl;
	cout <<		 "Minimum number is " << a.findMin(arr, 0, size) <<" at index "<<a.findMinPos(arr,0,size)<<endl << endl;
	
	do {
		if (counter != 0) 
		{ 
			cout << "Error: Out of Range" << endl; 
		}
		cout << "Enter index of numbers to swap: " << endl;
		cout << "Number 1 = ";
		cin >> number1;
		cout << "Number 2 = ";
		cin >> number2;
		counter++;
	} while ((number1<0 || number1>size) || (number2<0 || number2>size));
	

	cout << endl << "Arr[" << number1 << "] = " << arr[number1]<<endl;
	cout << "Arr[" << number2 << "] = " << arr[number2]<<endl;
	a.swap(arr, number1, number2);
	cout << endl;

	a.printArray(arr,size);
	cout << endl;

	system("pause");
	return 0;
}