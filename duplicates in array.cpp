#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<int> v{2,1,2,1};
	
	/*
	2 , 1 , 2 , 1
	
	
	*/
	vector<int> output;
	for(int i=0;i<v.size();i++)
	{
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
