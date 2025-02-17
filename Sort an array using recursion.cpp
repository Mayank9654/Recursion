/*
Sort an array using recursion
*/
#include <bits/stdc++.h>
using namespace std;
void insert(vector<int> &a,int temp)
{
    if(a.size()==0||a[a.size()-1]<=temp)
    {
        a.push_back(temp);
        return;
    }
    int val = a[a.size()-1];
    a.pop_back();
    insert(a,temp);
    a.push_back(val);
    return;
}
void sort(vector<int> &a)
{
    if(a.size()==1)
    {
        return;
    }
    int temp = a[a.size()-1];
    a.pop_back();
    sort(a);
    insert(a,temp);
}
void display(vector<int> &a,int n)
{
for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    vector<int> a = {3,6,2,8,1};
    int n=a.size();
    display(a,n);
    sort(a);
    display(a,n);
return 0;
}