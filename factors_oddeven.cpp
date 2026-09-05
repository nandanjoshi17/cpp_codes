#include<iostream>
using namespace std;
int main()
{
    int i,n,j;
    cout<<"Enter number : ";
    cin>>n;

    cout<<"Odd factors of "<<n<<" are : ";
    for(i=1;i<=n;i++)
    {
        if(n%i == 0 && i%2 != 0)
        {
            cout<<i<<" ";
        }
    }
    cout<<"\nEven factors of "<<n<<" are : ";
    for(j=1;j<=n;j++)
    {
        if(n%j == 0 && j%2 == 0)
        {
            cout<<j<<" ";
        }
    }
    return 0;
}