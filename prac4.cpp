#include<iostream>
//#include<cstring>
using namespace std;
class library{
	int id,num,book;
	string name;
	void getbook()
	{
		book=1234;
		cout<<"Book 1234 issued!";
	}
	public:
		void get_data(int a,int b,string c)
		{
			id=a;
			num=b;
			name=c;
		}
		void issueb()
		{
			getbook();
		}
		void display_data()
		{
			if(book==1234)
			{
				cout<<"Username: "<<name<<endl<<"User id: "<<id<<endl<<"Number of books issued: "<<num<<endl<<"Book 1234 also issued\n";
			}
			else
			{
				cout<<"Username: "<<name<<endl<<"User id: "<<id<<endl<<"Number of books issued: "<<num<<endl;
			}
		}
	
};
int main()
{
	int y,z;
	char c;
	string name;
	library cust;
	cout<<"Ennter name: ";
	cin>>name;
	cout<<"Ennter id: ";
	cin>>y;
	cout<<"Ennter no. of books: ";
	cin>>z;
	cust.get_data(y,z,name);
	cout<<"Special book?(y/n)";
	cin>>c;
	if(c=='y')
	{
		cust.issueb();
	}
	cust.display_data();
	return 0;
}
