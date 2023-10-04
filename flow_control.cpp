// if statements
/* syntax:- if (condition) {
  // body of if statement
}
The if statement evaluates the condition inside the parentheses ( ).

-If the condition evaluates to true, the code inside the body of if is executed.
-If the condition evaluates to false, the code inside the body of if is skipped.
 */
//example:-WAP to print positive number entered by the user if user enters a negative number, it is skipped
#include<iostream>
using namespace std;
int main()
{
    int no;
    cout<<"Enter the number: ";
    cin>> no;
    if (no >0)
    {
        cout<<"You've entered positive number";

    }
   // cout<<"this line will execute everytime because this is not part of if";
}




