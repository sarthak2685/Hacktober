#include<iostream>
using namespace std;
void p(int i)
{
	cout<<"int";
}
void p(float i)
{
	cout<<"float";
}
int main()
{
	int x=10;
	float y=30;
	p(x);
	p(y);
	return 0;
}
