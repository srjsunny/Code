/* buying and selling multiple times is allowed 

But we have to buy again before selling again
*/

//see the picture in images.

//we can see that total profit is the sum of all the incremental pairs. 
     
      int profit = 0;
       if(prices.size()==0)
           return 0;
        
        for(int i=0;i<prices.size()-1;i++)
        {
            if(prices[i]<prices[i+1])
            {
                profit+=(prices[i+1]-prices[i]);
            }
        }
        
        return profit;
        
