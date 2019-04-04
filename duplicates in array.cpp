//not considering output array in final output


#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<int> v{2,1,2,1};
	
	/*
	2 , 1 , 2 , 1
	so first we go to 2, then make the element at that index i.e. 1 , negative ->means mark the element as seen
	
	2, -1, 2, 1
	now we go to 1, then make the element at that index i.e. 2 , negative
	
	-2, -1, 2, 1
	now we go to 2, but we see that the element at that index is -ve means element already seen, so this should be the repeated one
	
	*/
	vector<int> output;
	for(int i=0;i<v.size();i++)
	{      //here subtracting one because zero based indexing
		int value_at_index = v[abs(v[i])-1];
		
		//if negative means we have already seen that element, so this element should be the repeated one.
		if(value_at_index<0)
		{ 
		    //pushing the element to ouput vector then
			output.push_back(abs(v[i]));
		}
		
		//else make it negative
		else 
		{
			v[abs(v[i])-1]*=-1;
		}
		
		
		
			
	}
	
	//print the output
	
	
	
	
	
	
	
	
	
	
	
}
