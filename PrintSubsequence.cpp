//All subsequence of an array using Recursion
#include <bits/stdc++.h>
using namespace std;

void subsequence(int index, vector<int>a, vector<int> ans)
{
    if(index==a.size())
    {
        for(int i=0;i<ans.size();i++) 
        {
            cout<<ans[i]<<" ";
        }
        if(ans.size()==0) 
        {
            cout<<"{}";
        }
        cout<<endl;
        return;
    }
    subsequence(index+1,a,ans);
    ans.push_back(a[index]);
    subsequence(index+1,a,ans);
    ans.pop_back();
}

int main()
{
    vector<int> a={1,2,3};
    vector<int> ans;
    subsequence(0,a,ans);
}