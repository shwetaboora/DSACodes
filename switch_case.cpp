 #include<iostream>
 using namespace std;
 int main()
 {
     char ch;
     cin>>ch;
     switch(ch){
         case 'b':
         case 'B': cout<<"Burger"<<endl;
         break;
         case 'm':
         case 'M': cout<<"Maggi"<<endl;
         break;
         case 'p':
         case 'P': cout<<"Pizza"<<endl;
         break;
         case 'c':
         case 'C': cout<<"Coke"<<endl;
         break;
         case 'd':
         case 'D': cout<<"Dosa"<<endl;
         break;
        default :cout<<"item not available"<<endl;
        break;
     }
 return 0;
 }