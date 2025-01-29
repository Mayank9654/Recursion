#include <bits/stdc++.h>
using namespace std;

//print name N times
void printName(int count, int n)
{
    if(count>n) return;
    cout<<"Mayank"<<endl;
    printName(++count, n);
}

//print from 1 to n
void print1toN(int i, int n)
{
    if(i>n) return;
    cout<<i<<" ";
    print1toN(++i,n);
}

//print n to 1
void printNto1(int n)
{
    if(n==0) return;
    cout<<n<<" ";
    printNto1(--n);
}

//print from 1 to N using backtracking
void print1(int i, int n)
{
    if(i<1) return;
    print1(i-1,n);
    cout<<i<<" ";
}

//print from n to 1 using backtracking
void print2(int i, int n)
{
    if(i>n) return;
    i++;
    print2(i,n);
    cout<<i-1<<" ";
}

int main()
{
    printName(1,3);
    print1toN(1,5); cout<<endl;
    printNto1(5); cout<<endl;
    print1(5,5); cout<<endl;
    print2(1,5);
}