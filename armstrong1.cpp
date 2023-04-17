#include<iostream>
using namespace std;
int main()
{
    int sum=0;
    int r,num;
    cout<<"enter the three digit  no.";
    cin>>num;
    int n=num;
    
    while(num!=0)
    {
    r=num%10;
    sum+=r*r*r;
    num/=10;
    }
    if(n==sum)
    {
        cout<<"no. is armstrong"<<sum;
   }
    else{
        cout<<"no.is not armstrong"<<sum;
    }
    return 0;
}

