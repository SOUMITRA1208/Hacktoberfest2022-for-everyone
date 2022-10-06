#include <bits/stdc++.h>
using namespace std;

void Count(int array[],int size)
{
    
    unordered_map<int, int> mp;
    for(int i=0;i<size;i++)
    {
        mp[array[i]]++;
    }
    
    for(auto x:mp)
    {
        cout<<x.first<<" - "<<x.second<<endl;;
    }
}
int main()
{
  int array[5]={1,1,1,2,3};
  Count(array,5);
}
