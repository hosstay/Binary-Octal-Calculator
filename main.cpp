/*****************************************************************************
   Taylor Hoss
   X432Z869
   Program #7

   This is a program that utilizes the stack STL to convert a decimal number
   into binary and octal. It will ask the user for a number and convert it
   into a binary and an octal numer. The user can only enter positive
   numbers and when the user enters -1 it terminates the program
   
*/


#include <iostream>
#include <cassert>
#include <stack>
using namespace std;

int main (void)
{
  
   const int MAX = 50;
   int num = -1;
   int temp = 0;
   bool flag = true;
   int i = 0;
   int count = 0;

   stack<int> bin;
   stack<int> oct;

   //get input from user
   while(flag)
   {
      cout<<"What decimal number would you like converted to binary & octal?\n";
      cin>>num;

      assert(num != -1);   

      if(num >= 0)
         flag = false;
      else
         cout<<"Error in input."<<endl;
      
   }

   /*
    * convert to binary
    */

   //do the first iteration outside to pull from input
   temp = num / 2;
   bin.push(num % 2);
   
   //do the rest
   while(temp != 0)
   {
      count++;
      bin.push(temp % 2); 
      temp = temp / 2;   
     
   }

   //print all values of bin array as long as they are 0 or 1 (no
   //garbage values)
   cout<<num<<" in binary is ";

   while(!bin.empty())
   {
      cout<<bin.top();
      bin.pop(); 

   } 

   cout<<"."<<endl;

   /*
   * convert to octal
   */

   count = 0;

   //do the first iteration outside to pull from input
   temp = num / 8;
   oct.push(num % 8);
   
   //do the rest
   while(temp != 0)
   {
      count++;
      oct.push(temp % 8); 
      temp = temp / 8;   
     
   }

   //print all values of bin array as long as they are 0 or 1 (no
   //garbage values)
   cout<<num<<" in octal is ";

   while(!oct.empty())
   {
      cout<<oct.top();
      oct.pop(); 

   } 

   cout<<"."<<endl;
}
