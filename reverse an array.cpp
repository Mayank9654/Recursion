#include <bits/stdc++.h>
using namespace std;

void display(vector<int>a)
{
    for(int i=0;i<a.size();i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void recursiveReverse(vector<int> &a, int left, int right)
{
    if(left>=right) return;
    swap(a[left],a[right]);
    recursiveReverse(a,++left,--right);
}

void recursiveReverse2(vector<int>&a, int index, int n)
{
    if(index>=n/2) return;
    swap(a[index], a[n-index-1]);
    recursiveReverse2(a,++index,n);
}

bool palindrome(string a, int index, int n)
{
    if(index>=n/2) return true;
    if(a[index]!=a[n-index-1]) return false;
    return palindrome(a,++index,n);
}

int main()
{
    vector<int>a={1,2,3,4,5,6};
    display(a);
    recursiveReverse2(a,0,a.size());
    // recursiveReverse(a,0,a.size()-1);
    display(a);
    string s="11211";
    cout<<s<<" Palindrome? "<<palindrome(s,0,s.size())<<endl;
}
