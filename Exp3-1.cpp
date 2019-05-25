//Create a C++ program to show the smallest and largest integer, the total, and the average of an array
//that take 10 elements only.
#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main()
{
	int arr[50], i, j, temp, average;
	double sum;

	cout << "enter array elements : " << endl;

	for (i = 0; i < 10; i++)
	{ cin >> arr[i];}

	for (i = 0; i < 10; i++)
	{ for ( j = i + 1; j < 10; j++)
	{ if (arr[i] > arr[j])
	{temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
	}
	}
	}

	
		
cout << "The smallest number in the array is: " <<arr[0]<< endl;
cout << "the biggest number in the array is: " <<arr[9]<< endl;



sum = 0;
for (i = 0; i < 10; i++)
{
	sum=sum+arr[i];
}
	cout << "total is: " <<sum<< endl;
	
	average = sum / 10;

	cout << "average is: " <<average<< endl;
	
	

	_getch();
	return 0;
}
