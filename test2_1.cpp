#include<iostream>
using namespace std;
class base{
	public:
	int b;
		base(int x){cout<<"\nbase constructor\n";
		b=x;
		}
		~base(){cout<<"\nbase destrcutor\n";
		}
};
class der1 : public base{
	public:
	int d1;
		der1(int x,int y):base(x){cout<<"\nder1 constructor\n";
		d1=y;
		}
		~der1(){cout<<"\nder1 destructor\n";
		}
		
};
class der2 : public der1{
	public:
	int d2;
		der2(int x,int y,int z):der1(x,y),base(x){cout<<"\nder2 constructor\n";
		d2=z;
		}
		~der2(){cout<<"\nder2 destructor\n";
		}
		
};
//class comb : public der1,public der2{
//	int c;
//	public:
//		comb(){cout<<"\ncomb constructor\n";
//		}
//		~comb(){cout<<"\ncomb destructor\n";
//		}
//};
int main()
{
	der2 ob(1,2,3);
	cout<<ob.b<<endl<<ob.d1<<endl<<ob.d2;
	return 0;
}
