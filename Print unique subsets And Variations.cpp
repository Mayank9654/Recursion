/*
Print unique subsets And Variations
*/
#include <bits/stdc++.h>
using namespace std;
void solve(string input, string output, unordered_map<string, int> &mp)
{
    if (input.length() == 0)
    {
        mp[output]++;
        if (mp[output] == 1)
        {
            cout << output << " ";
        }
        return;
    }
    string op1 = output;
    string op2 = output;
    op2.push_back(input[0]);
    input.erase(input.begin() + 0);
    solve(input, op1,mp);
    solve(input, op2,mp);
    return;
}
int main()
{
    string input = "3343", output = "";
    unordered_map<string, int> mp;
    solve(input, output, mp);
    return 0;
}