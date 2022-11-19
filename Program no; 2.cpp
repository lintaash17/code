//Submitted by:Linta Ashfaq
//Submitted to:Mam Ayesha Hakeem
//Degree: Data Science-1

#include<iostream>
using namespace std;
int main()
{
int number;
cout<<"for loop;"<<endl;
for(number=1;number<=10;number++)
{
	if(number==5)
	{
	continue ;
	}
	
	else
	{
	cout<<number*number;
	cout<<endl;
	}
}
cout<<endl;
cout<<"while loop;"<<endl;

number=1;
while(number<=10)
{
	if(number==5)
	{
		number++;
	continue;
	}
	
	else 
	{
	cout<<number*number;
	cout<<endl;
	}
		number++;
}
cout<<endl;
cout<<"do while loop;"<<endl;
number=1;
	do{
	if(number==5)
	{
	number++;
	continue ;
	}

	else 
	{
	cout<<number*number ;
	cout<<endl;
	}
	
	number++;
	}
	while(number<=10);
}