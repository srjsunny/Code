/* leetcode finding the K-th largest element*/

/*
Here the logic is to build a min_heap for first K elements. 
In a min heap, the root has the minimum (less than it's children) value.

So, what you need is, iterate over the array and populate K elements in min heap. Once, it's done, the heap automatically contains the lowest at the root.

Now, for each (next) element you read from the array, -> check if the value is greater than root of min heap. -> If yes,replace this element with root and heapify

After you traverse your whole array, the root of min heap will automtically contain the kth largest element.

And all other elements (k-1 elements to be precise) in the heap will be larger than k. 

Example:
arr[] ={1,2,3,4,5,6,7,8,9,10}

K =3

heap of k size => {1,2,3}
now 4 greater than 1 replace and heaplify;

heap => {2,3,4}

now 5 greater than 2 
we keep doing like this ....

last one =>> {8,9,10}

answer is 8


*/


/*complexity :

complexity for building heap of K size O(K).
removing and heapifying it for n-K times. 
O((n-k)*logk) 

So overall time complexity is O(K+(n-k)*logK)  => reducing stuff -> O(nlogK) 

*/



class Solution {
public:
    
    //making a min_heap
    void heapify(vector<int>&a, int parent)
    {   
        int n = a.size();
        int left = 2*parent +1;     //left child
        int right = 2*parent +2;    //right child
        int smallest = parent;  
    
    //if left is smaller than parent left should be the smallest
        if(left<n && a[left]<a[parent])
        {
            smallest = left;
        }
        
        
    //if right is smaller than the smallest , right should be the smallest    
        if(right<n && a[right]<a[smallest])
        {
            smallest = right;
        }
        
        
        //if parent is not the smallest
        if(smallest!=parent)
        {
            swap(a[smallest],a[parent]);
            heapify(a,smallest);
        }
        
        
        
    }
    
    
    //we build heap from n/2 to backwards because from n/2+1 onwards they  are root nodes so WE DON'T CARE ABOUT THEM.
    
    void build_min_heap(vector<int>&v)
    { 
     int n = v.size();
      for(int i=n/2;i>=0;i--){  
         heapify(v,i);  //sending first element as parent
    
      }
    }
    
    
    
    
  //for finding the kth smallest
    int findKthLargest(vector<int>& nums, int k) {
        
     vector<int> temp;
    
	//we make the heap of first K elements
	for(int i=0;i<k;i++)
    {
        temp.push_back(nums[i]);
    }
        
           
     build_min_heap(temp);
    int n  = nums.size();
        
    for(int i=k;i<n;i++)
    {
        if(nums[i]>temp[0])
        {
            temp[0]=nums[i];
            heapify(temp,0);
        }
    }
     
        
        return temp[0];
        
    }
};
