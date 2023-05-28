#include<iostream>
using namespace std;

int main()
{
    int x;
    int status = 0;
    cout<<"Enter a Number";
    cin>>x;
    for(int i=1;i<=x;i++)
    {
        if(x%i==0)
            status++;
    }
    if (status >2)
        cout<< "The Number is Not Prime";
        else 
        cout << "Number is Prime";    
    return 0;
}
