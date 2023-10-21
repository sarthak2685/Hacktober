#include<iostream>
using namespace std;
class base1{
	public:
		base1(){cout<<"creating base1\n";
		}
		~base1(){cout<<"Destroying base1\n";
		}
};
class base2{
	public:
		base2(){cout<<"creating base2\n";
		}
		~base2(){cout<<"Destroying base2\n";
		}
};
class derived : public base2,public base1
{
	public:
	derived(){cout<<"Creating derived\n";
	}
	~derived(){cout<<"Destroying derived\n";
	}
};
int main()
{
	derived d;
	return 0;
}
