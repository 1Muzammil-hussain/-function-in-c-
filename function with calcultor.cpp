#include<iostream>
#include<cmath>
using namespace std;
void add();
void sub();
void mul();
void diff();
void Rem();
void sqr();
void log();
int main()
{
	cout<<"ADDITION  FOR + \t  Product   for    *  \n";
	cout<<"Differenc for - \t  Quotient  for    /  \n";
	cout<<"Remainder for % \t    log     for    L  \n";
	cout<<"          Square Root for  S           \n";
	cout<<"---------------------------------------------\n";
	char o;
	cout<<"enter the operater:";
	cin>>o;
	if(o=='+')
	add();
	else if(o=='-')
	sub();
	else if(o=='*')
	mul();
	else if(o=='/')
	diff();
	else if(o=='%')
	Rem();
	else if(o='S')
	sqr();
	else if(o='L')
	log();
	else
	cout<<"invalid operator";
	
}
void add()
{
int a,b;
	cout<<"enter the numbers";
	cin>>a>>b;
	cout<<"addition="<<a+b;	
}
void sub()
{
int a,b;
	cout<<"enter the numbers";
	cin>>a>>b;
	cout<<"sub="<<a-b;
}
void mul()
{
int a,b;
	cout<<"enter the numbers";
	cin>>a>>b;
	cout<<"multiply="<<a*b;
}
void diff()
{
float a,b;
	cout<<"enter the numbers:";
	cin>>a>>b;
	cout<<"divide="<<a/b;	
}
void Rem()
{
	int a,b;
	cout<<"enter the numbers:";
	cin>>a>>b;
	cout<<"multiply="<<a%b;
}
void sqr(){
	
	int n;
	cout<<"enter the number:";
	cin>>n;
	cout<<"sqrt of number:"<<sqrt(n);
}
void log()
{
	int n;
	cout<<"enter the number:";
	cin>>n;
    cout<<"log: "<<log(n);
}
