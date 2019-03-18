

//complexity -> O(n)

#include<bits/stdc++.h>
using namespace std;
int main()
{   
int t;
cin>>t;
while(t--)
{   int n,sum;
    cin>>n>>sum;
    int arr[n];
	unordered_map<int,int> mp;
    
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        arr[i]=x;
        mp[x]++;
    }
	
	long long ans=0;
	
	unordered_map<int,int>::iterator i;
	
    for(i=mp.begin();i!=mp.end();i++)
    {
        int x = i->first;
        int y = sum-x;  //has to exist if (x+y)==sum
        
        //considering only (1,5) not (5,1) //not the revere one
        //one sided only considered
        //1 1 5 7  , sum=6
        //(1,5) (1,5)
        //1---> 2 
        //5--> 1
        //7--> 1
     
     if(mp.find(y)!=mp.end()){    
     
        if(x<y)  //only one sided one.
        {
            ans+=(mp[x] * mp[y]);
        }
        
    //if equal , we can select any two--> no. of combinations--> nC2
        else if(x==y)
        { 
            ans+= ( mp[x] * (mp[x]-1) )/2;  
        }
        
        
    }
    }
    cout<<ans<<endl;

}}


