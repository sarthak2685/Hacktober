#include<iostream>
using namespace std;
class atm{
	int account,amount,bal;
	int res;
	void Transaction()
	{
		bal=10000;
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
	friend void get_userdetails(atm x);
	void display_transactiondetails()
	{
		Transaction();
		cout<<"Account Number: "<<account<<endl<<"Withdrawn Amount: "<<amount<<endl<<"New Balance: "<<bal<<endl;
	}
};
void get_userdetails(atm x)
{
	int a,b;
	cout<<"Enter account number: ";
	cin>>a;
	cout<<"Enter amount to withdraw: ";
	cin>>b;
	x.account=a;
	x.amount=b;
}
int main()
{
	atm cust;
	get_userdetails(cust);
	cust.display_transactiondetails();
	return 0;
}
