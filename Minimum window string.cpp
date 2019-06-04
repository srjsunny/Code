```cpp
string smallestWindow (string s, string p){
    
    if(p.size()>s.size())
      return "-1";
     
   int hash_text[256]={0};
    int hash_ptr[256]={0};
    
 //store occurence of characters of pattern
 for(int i=0;i<p.size();i++)
     hash_ptr[p[i]]++;
    
    
//start traversing using two pointers, begin, and j.    
    
int count=0, begin=0, index=-1, minlen = INT_MAX;    
    
for(int j=0;j<s.size();j++)
{   
    //store count of characters and start expanding the window  
    hash_text[s[j]]++;
        
    //if the count of character in text is 
    //required no. of times i.e less than or equal to character's count in
    //pattern increment count.
    if(hash_text[s[j]]<=hash_ptr[s[j]])
      {
          count++;
      }    
      
      
      //if count == pattern length i.e all the characters found, window discovered 
      //now we start contracting the window from begin
      if(count==p.size())
       { 
           // Try to minimize the window i.e., check if 
            // any character is occurring more no. of times 
            // than its occurrence in pattern, if yes 
            // then remove it from begin.
           
           while(hash_text[s[begin]]>hash_ptr[s[begin]])
             {
                 hash_text[s[begin]]--;
                   begin++;         
             }
       
       
       int windowlen = j-begin+1;
       if(windowlen<minlen)
       {  
           minlen=windowlen;
           index = begin;
       }
       
     }
}
    
    
    if(index==-1)
     return "-1";
     
    else
    return s.substr(index,minlen);  //from index minlen no. of characters.
      

  
}
```
