#include<iostream>
using namespace std;
class na
{ static int no,count,active;
public:
na() 
{	 no++;
}
~na()	v
{count++;
}
static void show()
{cout<<"\nthe no of object created"<<no;
cout<<"\n the no of objects destroyed"<<count;
active++;
cout<<"\nthe no of active objects"<<active;
}

};
int na::no;
int na::count;
int na::active;
int main()
{na s1,s2,s3,s4;
na::show();
s4.show();
}

