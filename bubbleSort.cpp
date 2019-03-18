#include<iostream>
using namespace std;

//first pass
/*( 5 1 4 2 8 ) –> ( 1 5 4 2 8 ), Here, algorithm compares the first two elements, and swaps since 5 > 1.
( 1 5 4 2 8 ) –>  ( 1 4 5 2 8 ), Swap since 5 > 4
( 1 4 5 2 8 ) –>  ( 1 4 2 5 8 ), Swap since 5 > 2
( 1 4 2 5 8 ) –> ( 1 4 2 5 8 ),

*/
//after first pass last i elements sorted, we get the greatest element at the last.

//worst case: O(n^2)
//best case : O(n) , if array already sorted, so in code you have to use a flag variable.
//stable

//Inplace algorithm: no extra space required.

void bubbleSort(int a[],int n)
{
bool flag=true;  //to check if already sorted

//till n-1 comparisions
for(int i=0;i<n-1;i++)
{
    //last i elements will be sorted after every pass, so no need to check.
    for(int j=0;j<n-1-i;j++)
    {
        flag = false;
        if(a[j]>a[j+1])
            swap(a[j],a[j+1]);
    }

if(flag)  //if already sorted
 break;


}

}
int main()
{

   int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr, n);

    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";




}
