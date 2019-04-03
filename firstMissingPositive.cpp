#include<bits/stdc++.h>
using namespace std;
int main()
{
	/* the idea here is to put , the values at there correct position
	like we put 2 at index 2 , 1 at index 1, 3 at index 3
	And the place index!= number, means thats the number missing.
	*/
	
	
	
	int a[] ={ };
	
	for(int i=0;i<n;i++)
	{
		/*we don't care about 0 or negative numbers, numbers out of bound.
		 if element and the element at the position not same.
		 
		 like 3,7,4 ....
		 so  3
		 and a[3-1] = a[2]= 7 ; //subtracting 1 because 0 based indexing
		  
		so 3 not in right place we swap. 
		it's like disjoint set one. Here we do  a[3] != 3 .
		
		 */
		while(a[i]>0 && a[i]<=n && a[a[i]-1]!=a[i])
			swap(a[i],a[a[i]-1]);
		
		
	}	
		
		for(int i=0;i<n;i++)
		{   //if index and the element not the same, means that's the one missing.
			//so that index is missing.
			if(a[i]!=i+1)
				return i+1;   //as zero indexing.
		}
		
		//if all the elements in place, then n+1 will be the one missing.
		//like 1,2,3,4,5  so 6 should be returned.
		
		return n+1;
	}
	
	
	
}
