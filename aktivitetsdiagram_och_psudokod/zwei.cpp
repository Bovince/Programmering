#include <iostream>
using namespace std;
int main()
{
	int tal1, tal2;
	cout<<"Skriv två tal, de första större än de andra"<<endl;
	cin>>tal1;
	cout<<endl;
	cin>>tal2;
	cout<<endl;
	if (tal1>tal2){
		cout<<"success, de första talet("<<tal1<<") är större än de andra talet("<<tal2<<")";
	}
	else if(tal1==tal2){
		cout<<"retard";
	}
	else{
		cout<<"faliure, cause u stupid";	
	}
	return 0;
	}
