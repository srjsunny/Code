#include<bits/stdc++.h>
using namespace std;
int main()
{
    deque<int> dq;
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];


    vector<int> v;


    for(int i=0;i<n;i++)
    {
         //if queue not empty and the first one is out of bound
        if(!dq.empty()  && (i-dq.front())==k)
        {
            dq.pop_front();
        }


        //while queue is  not empty and previous element smaller than present pop the elements
        while(!dq.empty() && a[dq.back()]<a[i])
        {
            dq.pop_back();
        }


        //add the element
        dq.push_back(i);

        //once the first window is reached keep on pushing the first element of deque
        if(i>=k-1)
        {
            v.push_back(a[dq.front()]);
        }

    }



    for(int i=0;i<v.size();i++)
            cout<<v[i]<<" ";
}
