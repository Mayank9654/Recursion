/*
IsSubsequence
Given two strings s and t, return true if s is a subsequence of t, or false otherwise.

A subsequence of a string is a new string that is formed from the original string by deleting 
some (can be none) of the characters without disturbing the relative positions of the remaining 
characters. (i.e., "ace" is a subsequence of "abcde" while "aec" is not)

Example 1:
Input: s = "abc", t = "ahbgdc"
Output: true

Example 2:
Input: s = "axc", t = "ahbgdc"
Output: false
*/

#include <bits/stdc++.h>
using namespace std;

void subsequence(int index, string &a, string current, vector<string> &ans) 
{
    if (index == a.size()) {
        ans.push_back(current);
        return;
    }
    // Exclude the current character
    subsequence(index + 1, a, current, ans);
    // Include the current character
    subsequence(index + 1, a, current + a[index], ans);
}

vector<string> getAllSubsequences(string a) 
{
    vector<string> ans;
    subsequence(0, a, "", ans);
    return ans;
}

bool isSubsequence(string s, string t) 
{
    vector<string> ans=getAllSubsequences(s);
    for(int i=0;i<ans.size();i++)
    {
        if(t==ans[i]) 
            return true;
    }    
    return false;
}

bool isSubsequence_twopointer(string s, string t) 
{
    int i = 0, j = 0;
    while (i < s.size() && j < t.size()) 
    {
        if (s[i] == t[j])
        {
            i++;
        }
        j++;
    }
    return i == s.size();
}

int main()
{
    string a="ahbgdc";
    string t="abc";
    vector<string> ans=getAllSubsequences(a);
    for(int i=0;i<ans.size();i++) cout<<ans[i]<<" ";
    cout<<endl<<isSubsequence(a,t)<<endl;
}