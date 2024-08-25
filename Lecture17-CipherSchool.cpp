#include<iostream>
using namespace std;

void printHi()
{
	cout<<"Hi"<<endl;
	return ;
}

int sum(int a, int b){
	int c ;
	c = a+b;
	a = 500;
	cout<<"The value of c is:"<<c<<endl;
	return c;
}

void swap(int a, int b)
{
	int c;
	c = a;
	a = b;
	b = c;
	cout<<"THE value of a:"<<a<<"value of b: "<<b<<endl;
}

int main()
{
	printHi();
	int a,b;
	int c;
	
	a = 4;
	b = 6;
	
	c = 75;
	int d;
	d = sum(a,b);
	
	cout<<"THe value of c is:"<<c<<endl;	
	return 0;
}
