#include<iostream>
using namespace std;
class base{
	int b;
	public:
		base(){cout<<"\nbase constructor\n";
		}
		~base(){cout<<"\nbase destrcutor\n";
		}
};
class der1 : virtual public base{
	int d1;
	public:
		der1(){cout<<"\nder1 constructor\n";
		}
		~der1(){cout<<"\nder1 destructor\n";
		}
		
};
class der2 : virtual public base{
	int d2;
	public:
		der2(){cout<<"\nder2 constructor\n";
		}
		~der2(){cout<<"\nder2 destructor\n";
		}
		
};
class comb : public der1,public der2{
	int c;
	public:
		comb(){cout<<"\ncomb constructor\n";
		}
		~comb(){cout<<"\ncomb destructor\n";
		}
};
int main()
{
	comb ob;
	return 0;
}
