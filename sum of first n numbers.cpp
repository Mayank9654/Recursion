#include <bits/stdc++.h>
using namespace std;

//sum of first n numbers using paremeterised recursion
void parameter(int i, int sum)
{ 
    if(i<1) 
    {
        cout<<sum<<endl;
        return;
    }
    parameter(i-1,sum+i);
}

//sum of first n numbers using functional recursion
int func(int n)
{
    if(n==0) return 0;
    return n+func(n-1);
} 

int main()
{
    parameter(3,0); 
    cout<<func(3)<<endl;;
}