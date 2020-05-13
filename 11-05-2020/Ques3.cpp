/*Question 3:
Maximum height of the staircase
Given an integer A representing the square blocks. The height of each square block is 1.
The task is to create a staircase of max height using these blocks. The first stair would
 require only one block, the second stair would require two blocks
and so on. Find and return the maximum height of the staircase

*/
#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no. of Blocks:"<<endl;
    cin>>n;
    int x;
    x=  (-1+sqrt(1+8*n))/2;
    cout<<"The Height is "<<x<<endl;

}

