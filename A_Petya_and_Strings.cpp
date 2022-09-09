#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void lower_string(string &str)
{
	for(int i=0;str[i]!='\0';i++)
	{
		str[i] = tolower(str[i]);        //converting uppercase to lowercase
	}

}



int main()
{   
    



string string_1;
string string_2;

cin>>string_1;
cin>>string_2;

transform(string_1.begin(), string_1.end(), string_1.begin(), ::tolower);
transform(string_2.begin(), string_2.end(), string_2.begin(), ::tolower);
// cout<<string_1<<endl;
// cout<<string_2;
if(string_1 == string_2)
  cout<<0;
  else if(string_1< string_2)
  cout<<-1;
  else
  cout<<1;
    
    return 0;
}