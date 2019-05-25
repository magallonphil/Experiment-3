//Create a C++ program which prints the letters in a char array in reverse order and shows the size of
//the array.

#include<iostream>
using namespace std;

int main()
{
	int s;
	cout << "Enter size of array: ";
	cin >> s;
	char arr[s];
	cout << "Enter the numbers and characters:\n";
	for(int i=0; i<s; i++)  
	{
		cin >> arr[i];
	}
	for(int i=0; i<s; i++)
	{
		for(int j=0; j<s-1; j++)
		{
			if(arr[j]>arr[j+1])   
			{
				float temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	for(int i=0; i<s; i++)
	{
		cout << arr[i];
	}
	
	
}
