#include <iostream>

using namespace std;

int hcf(int num1, int num2)
{
    if(num2==0)
        return num1;
    else
        return(hcf(num2,num1%num2));
}


int main()
{
    int num1,num2;

    cout<<"Kindly enter the first number"<<endl;
    cin>>num1;

    cout<<"Kindly enter the second number"<<endl;
    cin>>num2;

    int h = hcf(num1,num2);
    cout<<" The greatest common facotor of "<<num1<<" and "<<num2<<" is "<<h<<endl;


    return 0;
}
