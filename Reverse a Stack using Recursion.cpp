/*
Reverse a Stack using Recursion
*/
#include <bits/stdc++.h>
using namespace std;
void insert(stack<int> &s,int num)
{
    if(s.size()==0)
    {
        s.push(num);
        return;
    }
    int temp=s.top();
    s.pop();
    insert(s,num);
    s.push(temp);
    return;
}
void reverse(stack<int> &s)
{
    if(s.size()==1)
    {
        return;
    }
    int temp=s.top();
    s.pop();
    reverse(s);
    insert(s,temp);
    return;
}

void display(stack<int> s, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << s.top()
        << " ";
        s.pop();
    }
    cout << endl;
}
int main()
{
    vector<int>a={3,4,5,6,7};
    stack<int> s;
    for(int i=0;i<a.size();i++)
    {
        s.push(a[i]);
    }
    int n=s.size();
    display(s,n);
    reverse(s);
    display(s,n);
return 0;
}