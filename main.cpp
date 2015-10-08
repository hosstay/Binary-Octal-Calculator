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
using namespace std;

int main (void)
{
  
   const int MAX = 50;
   int num = -1;
   int temp = 0;
   int bin[MAX];
   int oct[MAX];
   bool flag = true;
   int i = 0;

   while(flag)
   {
      cout<<"What decimal number would you like converted to binary & octal?\n";
      cin>>num;

      if(num >= 0)
         flag = false;
      
   }

   //convert to binary
   //do the first iteration outside to pull from input
   temp = num / 2;
   cout<<"temp: "<<temp<<endl;
   bin[0] = num % 2;
   cout<<"bin[0]: "<<bin[0]<<endl; 
   
   //do the rest
   for(i = 1; i < MAX; i++)
   {
      cout<<i<<endl;
      bin[i] = temp % 2;
      cout<<"bin["<<i<<"]: "<<bin[i]<<endl;   
      temp = temp / 2;
      cout<<"temp: "<<temp<<endl;

      //if whole number reaches 0 quit for loop
      if(temp == 0)
      {
         break;
      }     
     
   }

   //print all values of bin array as long as they are 0 or 1 (no
   //garbage values)
   cout<<num<<" in binary is ";

   for (i = 0; i < MAX; i++)
   {

      cout<<bin[i];

      if(bin[i] != 1 && bin[i] != 0)
      {
         break;
      }

   } 

   cout<<".";
}
