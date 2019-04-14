/* Finding element with all left sides less than or equal to  it and right sides greater than or equal to it.
   Print the first such element.
  
Here  we use O(n) memory and we can answer in O(n).
create two arrays left and right such that :
left[i] contains the largest number left side of index i.
right[i] contains the smallest number right side of index i.

now check if there is any number array[i] >left[i] and array[i]<right[i] ?

The idea is that the element should be greater than the maximum of its left and should be less the minimum of its right.

Ex: 
     arr[] = {5, 1, 4, 3, 6, 8, 10, 7, 9}

leftMax[] = {5, 5, 5, 5, 6, 8, 10, 10, 10}

rightMin[]={1 ,1 ,3 ,3 , 6 ,7 , 7 , 7 ,9}   


Now the element at  index 4, i.e 6 has leftMax = 5 and rightMin = 7, so this should be the answer

*/


//calculating the left max
leftMax[0]= arr[0]; 
for(int i=1;i<n;i++)
{
   leftMax[i] = max(leftMax[i-1], arr[i]);
}


//calculating the right min
rightMin[n-1] = arr[n-1];

for(int i=n-2;i>=0;i++)
{
   rightMax[i] = min(rightMin[i+1],arr[i]);
}


int index;

//as first and last element are not considered , so 0 to n-1
for(int i=1;i<n-1;i++)
{ 
   if(leftMax[i-1]<=arr[i] && arr[i]<=rightMin[i+1])
   			{
   				flag =1;
   			    index = i; 	  
   			    break;        //break when the first one is found
			 }	
}


cout<<arr[index];


}



}
