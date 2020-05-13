/*

Count of paths in a grid
Given an integer A, find and return the number of paths in a grid of size (A x A) that
starts from (1, 1) and reaches (A, A) without crossing the major diagonal. Since the result can be large, return the result modulo (10^9 + 7)
*/

#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int r;
    cout<<"Enter A:"<<endl;
    cin>>r;
    vector<vector<int>> a(r ,vector<int>(r,0));
    cout<<"Array:"<<endl;
     for(int i =0;i<a.size();i++)
    {   for(int j =0;j<a[i].size();j++)
    {
         cout<<"  "<<a[i][j];
    }
    cout<<endl;
    }
    for(int i =1;i<a.size();i++){
        a[i][0]=1;
    }

    for(int i =1;i<a.size();i++)
    {
        for(int j =1;j<a.size();j++)
    {
        if (i<j)
        {
        continue;
        }
        else{
                a[i][j] = a[i-1][j] + a[i][j-1];
        }
    }
    }
    cout<<"Array:"<<endl;
  for(int i =0;i<a.size();i++)
    {   for(int j =0;j<a[i].size();j++)
    {
         cout<<"  "<<a[i][j];
    }
cout<<endl;
}
 cout<<"\n\nTotal no. of path"<<a[a.size()-1][a.size()-1]<<endl;

}
