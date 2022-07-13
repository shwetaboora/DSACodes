#include<iostream>
using namespace std;
    int main()
    {
        //give a no N
        //square root of the number wihout using any predefined function
        int N;
        int P;
        cin>>N;
        cin>>P;
        float ans=0;
        float inc=1.0;

        for (int  times = 0; times <= P; times++)
        {
            // finalise the correct digit for the current place
            while (ans*ans<=N) 
            {
                ans = ans +inc;
            }
            ans = ans - inc; 
            //updates the increment for the next position
            inc = inc/10;
        }
        cout<<ans<<endl;
        return 0;
    }