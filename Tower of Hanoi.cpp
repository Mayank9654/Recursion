/*
Tower of Hanoi

Problem Statement: "The Tower of Hanoi, is a mathematical problem which consists of three rods and multiple disks. 
Initially, all the disks are placed on one rod, one over the other in ascending order of size similar to a cone-shaped tower."

The objective of this problem is to move the stack of disks from the initial rod to another rod, following these rules:

Move one disk at a time.
No disk can be placed on top of smaller disk.
Only the top disk may be moved.

Example 1:
Input: N = 3, 
Output: 
Move disk 1 from rod A to rod C
Move disk 2 from rod A to rod B
Move disk 1 from rod C to rod B
Move disk 3 from rod A to rod C
Move disk 1 from rod B to rod A
Move disk 2 from rod B to rod C
Move disk 1 from rod A to rod C
Explanation: Moving disks from one rod to another using an auxiliary rod takes these steps.

Example 2:
Input: N = 4
Output:
Move disk 1 from rod A to rod B
Move disk 2 from rod A to rod C
Move disk 1 from rod B to rod C
Move disk 3 from rod A to rod B
Move disk 1 from rod C to rod A
Move disk 2 from rod C to rod B
Move disk 1 from rod A to rod B
Move disk 4 from rod A to rod C
Move disk 1 from rod B to rod C
Move disk 2 from rod B to rod A
Move disk 1 from rod C to rod A
Move disk 3 from rod B to rod C
Move disk 1 from rod A to rod B
Move disk 2 from rod A to rod C
Move disk 1 from rod B to rod C
Explanation: Moving disks from one rod to another using an auxiliary rod takes these steps.
*/

#include <bits/stdc++.h>
using namespace std;
void solve(int n,int s,int h,int d, long long int &count)
{
    count++;
    if(n==1)
    {
        // cout<<"Moving plate from s to d "<<endl;
        return;
    }
    solve(n-1,s,h,d,count);
    // cout<<"Moving plate from s to h "<<endl;
    solve(n-1,h,d,s,count);
    return;
}
int main()
{
    int n=5;
   long long int count=0;
    int s=1,h=2,d=3;
    solve(n,s,h,d,count);
    cout<<"Number of steps "<<count<<endl;
return 0;
}