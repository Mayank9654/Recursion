//subequence with sum equal to target
#include <bits/stdc++.h>
using namespace std;

void subSum(int index, vector<int>a, vector<int> ans, int sum, int target)
{
    if(index==a.size())
    {
        if(sum==target)
        {
            for(int i=0;i<ans.size();i++)
            {
                cout<<ans[i]<<" ";
            }
            cout<<endl;
        }
        return;
    }
    ans.push_back(a[index]);
    sum=sum+a[index];
    subSum(index+1,a,ans,sum,target);
    ans.pop_back();
    sum=sum-a[index];
    subSum(index+1,a,ans,sum,target);
}

int main()
{
    vector<int>a={1,2,1};
    vector<int> ans;
    subSum(0,a,ans,0,2);
}