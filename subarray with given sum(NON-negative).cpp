//if curr_sum > k , start removing elements from starting.
// if curr_sum < k, keep adding


int n,sum;
	    cin>>n>>sum;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    int flag=0;
	    int curr_sum = 0;
	    int start = 0;
	    for(int i=0;i<=n;i++)
	    {
	        while(curr_sum>sum)
	        {
	            curr_sum-=arr[start];
	            start++;
	        }
	        if(curr_sum==sum)
	        {   flag =1;
	            cout<<start+1<<" "<<i<<endl;
	            break;                 //break once found
	        }
	        else if(curr_sum<sum)
	            { 
	                curr_sum+=arr[i];
	            }
	    }
	    if(flag==0)
	    cout<<"-1"<<endl;    //not found
