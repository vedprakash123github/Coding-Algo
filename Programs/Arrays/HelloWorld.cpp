#include<iostream>
using namespace std;


void printn(int n)
{
	
	if(n>=9)
	{
		return;
	}
	cout<<n<<endl;
	printn(++n);
}

int main()
{
	printn(0);
}