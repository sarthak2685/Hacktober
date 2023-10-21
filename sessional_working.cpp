#include<iostream>
using namespace std;
class atm{
	int account,amount,res;
	static int bal;
	void Transaction()
	{
		if((bal-amount)>0)
		{
			res=bal-amount;
			bal=res;
		}
		else
		{
			cout<<"Not enough balance.";
		}
	}
	public:
		atm(){
			res=0;
			account=0;
			amount=0;
			cout<<"done"; 
		}
		~atm(){
			cout<<"gone";
		}
		static void init(int q){bal=q;
		}
		friend void get_userdetails(atm &x);
		void display_transactiondetails()
		{
			Transaction();
			cout<<"Account Number: "<<account<<endl<<"Withdrawn Amount: "<<amount<<endl<<"New Balance: "<<bal<<endl;
		}
};
void get_userdetails(atm &x)
{
	int a,b;
	cout<<"Enter account number: ";
	cin>>a;
	cout<<"Enter amount to withdraw: ";
	cin>>b;
	x.account=a;
	x.amount=b;
}
int atm::bal=10000; 

int main()
{
	
	atm *cust;
	
	cust=new atm;
	get_userdetails(*cust);
	cust->display_transactiondetails();
	return 0;
}

