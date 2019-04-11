/*
Basic idea is for each tower, calculate left_max and right_max and take the minimum from that and  remove the height of that towers.

*****min(left_max,right_max) - height of that tower***********

Algorithm: Time Complexity-> O(n)  , Space-> O(1)
Using two pointers.
*/

	//two pointers
        int left = 0;
        int right = n-1;
        
        
        //initially both left and right max are zero
        int left_max = 0;
        int right_max = 0;
        int ans = 0;
        
        
        while(left<=right)
        {   
            //if left is minimum , since we care about the minimum one
            if(height[left]<height[right])    
            {
                //update the left_max if it is not the maximum one
                if(height[left]>left_max)
                    left_max = height[left];  
                
                else
                {   //the same logic -> min(left_max,right_max) - height of that tower
                    ans = ans + left_max - height[left];
                }
                
                left++;  //increment left
            }
        	
        	
        	
        	
            else
            {  //if right is not the maximum one
                if(right_max < height[right])
                {
                    right_max = height[right];
                }
                
                else
                {
                    ans = ans + right_max - height[right]; 
                }
                
                right--;  //decrement right
                
            }
            
            
            
        }
        
        
        return ans;
