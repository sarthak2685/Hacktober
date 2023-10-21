#include<iostream>
using namespace std;
class property{
	int p_id;
	string p_name;
	float p_price;
	public:
		void setdata(int a,string b,float c)
		{
			p_id=a;
			p_name=b;
			p_price=c;
		}
		void getdata()
		{
			cout<<"ID: "<<p_id<<endl<<"Name: "<<p_name<<endl<<"Price: "<<p_price;
	}
};
int main()
{
	property *p;
	int x;
	cout<<"Enter number of objects: ";
	cin>>x;
	p=new property [x];
	for(int i=0;i<x;i++)
	{
		int n;
		string s;
		float f;
		cout<<"Enter "<<i+1<<" th id: ";
		cin>>n;
		cout<<"Enter "<<i+1<<" th name: ";
		cin>>s;
		cout<<"Enter "<<i+1<<" th price: ";
		cin>>f;
		p[i].setdata(n,s,f);
		
	 } 
	 for(int i=0;i<x;i++)
	{
		cout<<i+1<<" th entry:-"<<endl;
		p[i].getdata();
		cout<<endl;
		
	 } 
	 delete [] p;
	 return 0;
}
