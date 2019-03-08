


#include <iostream>
#include <sstream>
#include<vector>
using namespace std;

int main() {
	string s,s2;

/*
  istream& getline (istream& is, string& str, char delim);
is : It is an object of istream class and tells the function about the stream from where to read the input from.
str : It is a string object, the input is stored in this object after being read from the stream.
delim : It is the delimitation character which tells the function to stop reading further input after reaching this character.
*/

//by default the  delimiter is '\n'

	getline(cin,s,'\n');
	getline(cin,s2,'\n');

	stringstream test;
	test<<s;

	string temp;
	vector<int> v;



	while(getline(test,temp,':')){

		v.push_back(stoi(temp));      //converting it to integer.

	}


for(auto i = v.begin();i!=v.end();i++)
{
	cout<<*i<<endl;

}
cout<<"hero";


}


OUTPUT:

11
10
hero


