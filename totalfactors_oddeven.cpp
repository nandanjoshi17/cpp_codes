#include<iostream>
using namespace std;
int main()
{
    int i,n,codd=0,ceven=0;
    cout<<"Enter Number : ";
    cin>>n;
    cout<<"total odd factors of "<<n<<" are : ";
    for(i = 1;i<=n;i++)
    {
        if(i%n == 0 && i%2 != 0)
    {
        codd++;
    } 
     cout<<codd;
    }
    cout<<"\nTotal even factors of "<<n<<" are : ";
    for(i = 1;i<=n;i++)
    {
        if(i%n == 0 && i%2 == 0)
    {
        ceven++;
    } 
     cout<<ceven;
    }
}