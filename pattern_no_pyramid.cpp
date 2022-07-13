// printing no.s in shape of pyramid.
  //   1
  //  1 1
  // 1 2 1
#include<iostream>
 using namespace std;

    int main()
    {
        int n;
        cin>>n;
        //loop for row 1 to n
        for (int i = 1; i<=n; i++)
        {
            //spaces
            for (int space = 1; space <= n-i; space++)
            {
                cout<<" ";
            }

            // increasing number
            int val = i;
            for (int cnt = 1; cnt <= i; cnt++)
            {
                cout<<val;
                val = val + 1;
            }
            
            // decreasing number
            val = val - 2;
            for (int cnt = 1; cnt<=i-1; cnt++)
            {
                cout<<val;
                val = val-1; 
            }

            //printing new line
            cout<<endl;
        }
       return 0; 
    }