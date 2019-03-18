#include<iostream>
using namespace std;

/*
take 1st element , find min(in remaining array) swap with first one;
take 2nd element ,find min(in the remaining array) swap with second;
.......
*/


//after first pass, we get the least element at the first position.
//after first pass, first i elements sorted.

//inplace
//O(n^2)

void selectionSort(int a[],int n)
{
for(int i=0;i<n-1;i++)
{
 int min = i;
//minimum is a[i], then first
    for(int j=i+1;j<n;j++)
    {
        if(a[j]<a[min])
        {
            min = j;  //update the minimum
        }

    }
    swap(a[i],a[min]);

}



}

int main()
{
    int arr[] = {12,8,9,10,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr, n);
    for(int i=0;i<n;i++)
            cout<<arr[i]<<" ";
}


