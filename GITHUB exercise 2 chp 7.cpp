//Student name: Anis Syazwani binti Md. Aini
//Matrix id: A17DW0731
#include <string>
#include <iostream>
using namespace std;
int main()
{
	string myName="Anis";
	while(true)
	{
	cout<<"Enter your name (or 'quit' to exit): ";
		string userName;
		if(userName=="Abu")
	    {
			cout<<"Hey Abu!"<<endl;
		}
		else if(userName=="quit")
		{
			cout<<endl;
			break;
		}
		else if (userName!=myName)
		{
			cout<<"Hello, "<<userName<<endl;
		}
		else
		{
			cout<<"Aha! it's you, "<<myName<<endl;
		}
	}
	return 0;
}


