#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream f;;
	f.open("text.txt");
	f<<"This is a test trying to see if a program a can see a as an a individual word.";
	f.close();
}
