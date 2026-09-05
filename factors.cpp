#include<iostream>
using namespace std;
int main()
{
    int i,n,count=0;

    cout<<"Enter Number : ";
    cin>>n;

    for(i=1;i<=n;i++)
    {
        if(n%i == 0)
        {
            count++;
        }
    }
    cout<<"total factors of "<<n<<" are "<<count<<endl;
    return 0;
}