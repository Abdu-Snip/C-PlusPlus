#include<iostream>
using namespace std;
const int ROWS = 2, COLUMNS = 3, ARRAY = 2;
int main();
int add_row(int x[ROWS][COLUMNS][ARRAY]);
int add_column(int x[ROWS][COLUMNS][ARRAY]);
int main() {
	int x[2][3][2],sum1=0,sum2=0,sum3=0,sum4=0,sum5=0,sum6=0,sum7=0,sum8=0,sum9=0,sum10=0; 

	for (int i = 0; i < 2; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			for (int k = 0; k < 2; ++k)
			{
				cout << "x[" << i << "][" << j << "][" << k << "] = ";
				cin >> x[i][j][k];
			}
		}
	}

	cout << endl;

	for (int i = 0; i < 2; ++i) 
	{
		for (int j = 0; j < 3; ++j)
		{
			for (int k = 0; k < 2; ++k)
			{
				cout << "Element at x[" << i << "][" << j << "][" << k << "] = " << x[i][j][k]<<endl;
			}
		}
	}
	cout << endl<<endl;
	cout << "Sum of Row 1 and Row 2 = " << add_row(x)<<endl<<endl;
	cout << "Sum of Column 1 and Column 2 = " << add_column(x)<<endl;
	
	system("pause");
	return 0;
}

int add_row(int x[ROWS][COLUMNS][ARRAY])
{
	int sum1=0, sum2=0;
	for (int i = 0; i < 3; i++)
	{
		cout << "arr[0][" << i << "][0] = " << x[0][i][0] << endl;
		sum1 += x[0][i][0];
	}
	
	for (int i = 0; i < 3; i++)
	{
		cout << "arr[1][" << i << "][0] = " << x[1][i][0] << endl;
		sum2 += x[1][i][0];
	}
	return sum1 + sum2;
}


int add_column(int x[ROWS][COLUMNS][ARRAY]) 
{
	int sum1 = 0, sum2 = 0;
	for (int i = 0; i < 2; i++)
	{
		cout << "arr[" << i << "][0][0] = " << x[i][0][0] << endl;
		sum1 += x[i][0][0];
	}
	for (int i = 0; i < 2; i++)
	{
		cout << "arr[" << i << "][0][1] = " << x[i][0][1] << endl;
		sum2 += x[i][0][1];
	}
	return sum1 + sum2;
}












































































/*#include<iostream>
using namespace std;
//const int ROWS = 2, COLUMNS = 3, ARRAY = 2;
int main();
//int add_row(int arr[ROWS][COLUMNS][ARRAY]);
int main() {
	int x[2][3][2],sum1=0,sum2=0,sum3=0,sum4=0,sum5=0,sum6=0,sum7=0,sum8=0,sum9=0,sum10=0; 

	for (int i = 0; i < 2; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			for (int k = 0; k < 2; ++k)
			{
				cout << "x[" << i << "][" << j << "][" << k << "] = ";
				cin >> x[i][j][k];
			}
		}
	}

	cout << endl;

	for (int i = 0; i < 2; ++i) 
	{
		for (int j = 0; j < 3; ++j)
		{
			for (int k = 0; k < 2; ++k)
			{
				cout << "Element at x[" << i << "][" << j << "][" << k << "] = " << x[i][j][k]<<endl;
			}
		}
	}
	cout << endl<<endl;
	
	for (int i = 0; i < 3; i++)
	{
		cout << "arr[0][" << i << "][0] = " << x[0][i][0] << endl;
		sum1 += x[0][i][0];
	}
	cout << "Sum of row 1 = "<<sum1<<endl<<endl;
	
	for (int i = 0; i < 3; i++)
	{
		cout << "arr[0][" << i << "][1] = " << x[0][i][1] << endl;
		sum2 += x[0][i][1];
	}
	cout << "Sum of row 2 = " << sum2 << endl<<endl;

	for (int i = 0; i < 3; i++)
	{
		cout << "arr[1][" << i << "][0] = " << x[1][i][0] << endl;
		sum3 += x[1][i][0];
	}
	cout << "Sum of row 3 = " << sum3 <<endl<< endl;
	
	for (int i = 0; i < 3; i++)
	{
		cout << "arr[1][" << i << "][1] = " << x[1][i][1] << endl;
		sum4 += x[1][i][1];
	}
	cout << "Sum of row 4 = " << sum4 << endl << endl;

	for (int i = 0; i < 2; i++)
	{
		cout << "arr[" << i << "][0][0] = " << x[i][0][0] << endl;
		sum5 += x[i][0][0];
	}
	cout << "Sum of column 1 = " << sum5 << endl << endl;

	for (int i = 0; i < 2; i++)
	{
		cout << "arr[" << i << "][1][0] = " << x[i][1][0] << endl;
		sum6 += x[i][1][0];
	}
	cout << "Sum of column 2 = " << sum6 << endl << endl;


	for (int i = 0; i < 2; i++)
	{
		cout << "arr[" << i << "][2][0] = " << x[i][2][0] << endl;
		sum7 += x[i][2][0];
	}
	cout << "Sum of column 3 = " << sum7 << endl << endl;

	for (int i = 0; i < 2; i++)
	{
		cout << "arr[" << i << "][0][1] = " << x[i][0][1] << endl;
		sum8 += x[i][0][1];
	}
	cout << "Sum of column 4 = " << sum8 << endl << endl;

	for (int i = 0; i < 2; i++)
	{
		cout << "arr[" << i << "][1][1] = " << x[i][1][1] << endl;
		sum9 += x[i][1][1];
	}
	cout << "Sum of column 5 = " << sum9 << endl << endl;

	for (int i = 0; i < 2; i++)
	{
		cout << "arr[" << i << "][2][1] = " << x[i][2][1] << endl;
		sum10 += x[i][2][1];
	}
	cout << "Sum of column 6 = " << sum10 << endl << endl;

	system("pause");
	return 0;
}







/*int add_row(int arr[ROWS][COLUMNS][ARRAY])
{
	int i;
	int rowSum=0;
	for (i = 0;i<3;i++)
	{
		cout << "arr[0]["<<i<<"][" << ARRAY << "] = "<< arr[0][i][ARRAY]<<endl;
		rowSum+=arr[0][i][ARRAY];
	}
	return rowSum;
}*/