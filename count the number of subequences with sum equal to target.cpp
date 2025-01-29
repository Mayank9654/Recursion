//count the number of subequences with sum equal to target
#include <bits/stdc++.h>
using namespace std;

int subSum(int index, vector<int>a, int sum, int target)
{
    if(sum>target) return 0; //can be included only when all the test cases contain positive array elements
    if(index==a.size())
    {
        if(sum==target) return 1;
        return 0;
    }
    sum=sum+a[index];
    int left = subSum(index+1,a,sum,target);
    sum=sum-a[index];
    int right = subSum(index+1,a,sum,target);
    return left+right;
}

int main()
{
    vector<int>a={1,2,1};
    cout<<subSum(0,a,0,2)<<endl;
}