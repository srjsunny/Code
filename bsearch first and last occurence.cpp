#include<iostream>
using namespace std;


//for searching left after finding
int first(int arr[],int beg,int end,int x)
{
int ans=-1;
while(beg<=end)
{
int mid = beg+ (end-beg)/2;

if(arr[mid]==x)
{
    ans = mid;
    end=mid-1;   //this is the statement
}
else if(arr[mid]>x)
{
    end=mid-1;
}
else
beg = mid+1;

}

return ans;
}


//for searching right side after finding
int last(int arr[],int beg,int end,int x)
{
    int ans=-1;
while(beg<=end)
{
int mid = beg+ (end-beg)/2;

if(arr[mid]==x)
{
    ans = mid;
    beg=mid+1;     //this is statement
}
else if(arr[mid]>x)
{
    end=mid-1;
}
else
beg = mid+1;

}

return ans;

}


int main()
 {
	int t;
	cin>>t;
	while(t--){
	int n,x;
	cin>>n>>x;
	int arr[n];
	for(int i=0;i<n;i++)
	    cin>>arr[i];
    int a=first(arr,0,n,x);
    int b=last(arr,0,n,x);

    //if doesn't exist
    if(a==-1 && b==-1)
        cout<<"-1";
    else
    cout<<a<<" "<<b;
    cout<<endl;

	}
}
