#include<bits/stdc++.h>
using namespace std;

int main()
{
stringstream num_to_string;

stringstream string_to_num;

float num = 45.90;
num_to_string<<num;

cout<<"Number to  string"<<num_to_string.str();    //will convert it to string




string s= "How are you it's 23 today My 2019 is it 45";
string_to_num<<s;

string temp;

int checking;

while(!string_to_num.eof())
{
  //putting words into a variable first
    string_to_num >>temp;

//checking the word is integer or not
    if(stringstream(temp)>>checking)
        cout<<checking<<" ";



}


}
