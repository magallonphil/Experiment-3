//Create a C++ Program that store temperature of Province A, Province B and Province C for a week
//(seven days) and display it. 
#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	string days[21], province="A", temp;
	int i, day;
	
	for ( i = 1, day = 1; i <= 21; i++, day++)
	{ cout << "province " <<province<< ", day " <<day<< ": ";
	cin >> temp;
	
	if (i == 7)
	{ day = 0;
	province = "B";
	 } 
	 if (i == 14)
	 { day = 0;
	 province = "C";
	 }
	 days[i-1] = temp;
	}
	province = "A";
	
	cout << " " << endl;
	cout << "DISPLAYING VALUES: "<< endl;
	
	for (i = 1, day = 1, temp; i <= 21; i++, day++)
	{
		cout << "Province " <<province<< ", day "<<day<< ": " <<days[i-1]<< endl;
		if (i==7)
		{
			day = 0;
			province = "B";
		}
		if (i==14)
		{
			day = 0;
			province = "C";
		}
	}
}
