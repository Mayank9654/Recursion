/*
Delete Middle Element of a Stack
*/
#include <bits/stdc++.h>
using namespace std;
void solve(stack<int> &s, int k)
{
    if (k == 1)
    {
        s.pop();
        return;
    }
    int temp = s.top();
    s.pop();
    solve(s, k-1);
    s.push(temp);
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
    vector<int> a={4,2,6,1,9};
    stack<int> s;
    for (int i = 0; i < a.size(); i++)
    {
        s.push(a[i]);
    }
    int n=s.size();
    display(s, n);
    int k = ((n / 2) + 1);
    solve(s, k);
    display(s, s.size());
    return 0;
}