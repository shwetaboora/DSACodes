#include<iostream>
using namespace std;

int main(){
    // problem --- read a list of character(sentence)

    // cin.get()

    //only for characters not for special charaacter and spaces
//     char ch;
//     cin>>ch;
//    while (ch!='.')
//    {
//        //print the last character we have read
//        cout<<ch;
//        //update my character in the mermory (reading the next character)
//        cin>>ch;
//    }

    // cin.zget() -- it includes spaces also
      char ch;
    ch = cin.get();// this method reads any single character including spaces and newline 
   while (ch!='.')
   {
       //print the last character we have read
       cout<<ch;
       //update my character in the mermory (reading the next character)
       ch = cin.get();
   }
    return 0;
}