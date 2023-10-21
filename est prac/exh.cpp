#include <iostream>
using namespace std;

int main()
{
	char arr[5]={'a','e','i','o','u'};
	try{
		if(arr[0]=='a')
		{
			throw arr[0];
		}
		else{
			cout<<arr[0]<<endl;
		}
	}
	catch(char *c)
	{
		cout<<"caught "<<c<<endl;
	}
	try {
	throw 'a';
	}
	catch(char &c)
	{
		cout<<"Exception due to "<<c;
	}
	try {
	throw 5;
	}
	catch (int &x) {
		cout << "Caught ";
	}
	catch(...)
	{
		cout<<"default";
	}
	return 0;
}

