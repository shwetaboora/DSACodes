#include<iostream>
using namespace std;
int main(){

    // Break--> that is used to stop the loop based upon a certain condition

    //problem statement  - read a stream of numbers until u get a multiple of 7
    int n;

    while (true)
    {
        //no stopping condition as of now
        // accept and print numbers until you get a no which is multiple of 7
        // and u will skip all no which are multiple of 13 and 7
        cin>>n;
        if (n%13==0)
        {
            continue;// can be executed multiple times
        }
        
        if (n%7==0)
        {
            //stop processing more no's
            break;// it will bring us out of the while loop // it executes only once

            //continue;//it skips both the cout statements means it brings us back to the starting of while loop

        }
        cout<<"no "<<n<<endl;

    }
    cout<<"came out of the loop"<<endl;


    return 0;
}