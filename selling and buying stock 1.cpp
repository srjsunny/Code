/* find max profit we can make buying and selling only one time*/
/* The logic is we find the minimum buying prices , subtract with the current price and take the maximum from it  
*/




        int profit = 0;
        int min_buy = INT_MAX;
        
        for(int i=0;i<prices.size();i++)
        {    //if min_buy is not the least update it 
            if(prices[i]<min_buy)
                    min_buy=prices[i];
            
            else
            {   //we take the maximum of current profit , or the price[i] minus the minimum buying price
                profit= max(profit,prices[i]-min_buy);
            }
        }
        
        return profit;
        
        
