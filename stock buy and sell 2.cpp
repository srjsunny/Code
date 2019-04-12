/* buying and selling multiple times is allowed 

But we have to buy again before selling again
*/

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
        
