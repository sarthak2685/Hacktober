#include<iostream>
using namespace std;
template <class X,class Y> void mc(X &a,Y &b)
{
	Y temp;
	temp=a;
	
	a=b;
	b=temp;
}
void mc(int &a,int &b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
}
int main()
{
	int i=10,j=20;
	double x=2.587,m=4.117;
	float y=2.1,n=5.3;
	char z='a',k='z';
	cout<<"ORIGINALS:-"<<endl;
	cout<<"int i: "<<i<<"\tint j: "<<j<<endl<<"double x: "<<x<<"\tdouble m: "<<m<<endl<<"float y: "<<y<<"\tfloat n: "<<n<<endl<<"char z: "<<z<<"\tchar k: "<<k<<endl;
	mc(i,k);
	mc(x,n);
	mc(y,m);
	mc(z,j);
	cout<<"SWAPPED:-"<<endl;
	cout<<"int i: "<<i<<"\tint j: "<<j<<endl<<"double x: "<<x<<"\tdouble m: "<<m<<endl<<"float y: "<<y<<"\tfloat n: "<<n<<endl<<"char z: "<<z<<"\tchar k: "<<k<<endl;
	return 0;
}

