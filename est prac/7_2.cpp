#include<iostream>
using namespace std;
class array{
	int size;
	int *s=0;
	int* arr;
	public:
		array(int n)
		{
			if(n<=0)
			{
				cout<<"Invalid size";
			}
			else
			{
				size=n;
				arr=new int[n];
			}
		}
		~array()
		{
			delete [] arr;
		}
		int &operator[](int);
};
int& array::operator[](int x)
{
	if(x>=size)
	{
		cout<<"out if index";
		return *s;
	}
	else
	{
		cout<<"In index";
		return arr[x];
	}

}
int main()
{
	array obj(5);
	int c;
	cout<<"Enter to check: ";
	cin>>c;
	int p=obj[c];
	cout<<p;
	return 0;
	
}
