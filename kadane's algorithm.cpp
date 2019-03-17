#include<bits/stdc++.h>
using namespace std;


//practice problem : https://leetcode.com/problems/maximum-subarray/

//time : O(n)
//space: O(1) as we are not storing the previousBest.


int kadane(int a[],int n)
{
//initially it's the first element
int previousBest = a[0];
int ans = a[0];

//start from next element
for(int i=1;i<n;i++)
{
//either start a new series or continue the subarray with this element
previousBest = max(a[i],a[i]+previousBest);

if(previousBest>ans)
    ans = previousBest;

}
return ans;
}

int main()
{
int arr[]= {-2, -3, 4, -1, -2, 1, 5, -3};

int n = sizeof(arr)/sizeof(arr[0]);

int maxSum = kadane(arr,n);

cout<<maxSum;


}
