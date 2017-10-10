/*Tyler Allen
CS111
Lab 7-1
3-3-15
This program will display the characters for the ASCII values 33-127 with 16 characters each line. */

#include <iostream>
using namespace std;

int main(){
  int length =0;
  for(int i=33; i<=127; i++)
    {
      cout<<(char)i<<" ";
      length++;
      if(length==16)
	{
	  length = 0;
            cout<<endl;
	}
    }
  cout<<endl;
  return 0;
}
