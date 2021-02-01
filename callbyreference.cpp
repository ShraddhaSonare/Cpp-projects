#include
using namespace std;
void swap(int*,int*);
main()//caller function
{
int a=2,b=3;
swap(&a,&b);//fun_call
cout<<"In calle:after swapping a="<<a<<" b="<<b<<endl;//a,b changes
}
void swap(int *c,int *d)
{
*d=(*c+*d)-(*c=*d);//swap logic in a single line 
/*
a+b=5
b=5-(a=3)//a changes to 3 b changes b=5-3=2
*/
cout<<"In called:after swapping a="<<a<<" b="<<b<<endl;
}
