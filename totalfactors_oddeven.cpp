#include<iostream>
using namespace std;
int main()
{
    int i,n,codd=0,ceven=0,count=0;
    cout<<"Enter Number : ";
    cin>>n;
    for(i = 1;i<=n;i++)
    {
        if(n%i == 0)
         {
            if(i%2 == 0)
            {
                ceven++;
               
            }
           
            count++;
            
         }
    }
    int odd = count - ceven;
    cout<<"Total factors of "<<n<<" are : "<<count;
     cout<<"\nOdd factors of "<<n<< " are  : "<<odd;
     cout<<"\nTotal even factors of "<<n<<" are : "<<ceven;
    
    return 0;
}