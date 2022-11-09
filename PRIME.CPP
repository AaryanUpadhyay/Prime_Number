#include<iostream.h>
#include<conio.h>


int main()
{
	clrscr();
	int x,y=0;
	cout<<"Enter a number to check wheather it is Prime or not ";
	cin>>x;

	for (int i =2; i<x ;i++)
	{
		if (x%i==0)
		{
			y=10;
			break;
		}
	}
	if (y==10)
		cout <<"The number is not prime ";
	else
		cout<<"The number is prime ";

	getch();
	return 0;
}