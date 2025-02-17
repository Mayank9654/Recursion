/*
Sort a Stack
*/
#include <bits/stdc++.h>
using namespace std;
void insert(stack<int> &s, int temp)
{
    if(s.size()==0||s.top()<=temp)
    {
        s.push(temp);
        return;
    }
    int val = s.top();
    s.pop();
    insert(s,temp);
    s.push(val);
    return;
}
void sort(stack<int> &s)
{
    if(s.size()==1)
    {
        return;
    }
    int temp = s.top();
    s.pop();
    sort(s);
    insert(s,temp);
}
void display(stack<int> s, int n)
{
for(int i=0;i<n;i++)
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
}
int main()
{
    vector<int> a={5,9,6,8,1};
    stack<int> s;
    for(int i=0;i<a.size();i++) s.push(a[i]);
    int n=s.size();
    display(s,n);
    sort(s);
    display(s,n);
return 0;
}