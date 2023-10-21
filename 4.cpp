#include<iostream>
using namespace std;
namespace pehla{
	void show()
	{
		cout<<"Pehla wala";
	}
}
namespace doosra{
	void show()
	{
		cout<<"Doosra wala";
	}
}
int main()
{
	pehla::show();
	cout<<endl;
	doosra::show();
	return 0;
}
