#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    int sum=0; //Initialize the sum as zero.
    int x;
   cout<<"Please enter the number of natural no.s you want to add: ";
   cin>>x; //The numbers we want to add.
   if(x<=0){cout<<"please enter an integer greater than or equal to zero... ";}else{ //This is to avoid negative integers or alphabets.
   int y=x; //For the last line display.
   int nat[x]; //An array with x no. of elements.
   for(int i=x ; i>=0 ; i--){
    nat[i]=x; //Assign the value of x and integers less than x in nat.
    x--;
    sum+=nat[i]; //Add the elements in the sum variables.
   }
   cout<<"The sum of first "<<y<<" natural no.s is: "<<sum<<endl;
   system("PAUSE"); //For stupids who open this directly in Windows.
   }
}
