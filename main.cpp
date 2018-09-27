//Eric Perez
#include<iostream>
#include<string>
using namespace std;

int main()
{
        string list[5]; //array of 5 strings
        int numItems = 0;
        char input;
        string num1;

        do{
                cout<<"\n==GROCERY LIST MANAGER==";
                cout<<"\nEnter your choice: ";
                cout<<"\n (A)dd an item";
                cout<<"\n (Q)uit";
                cout<<"\nYour choice (A/Q): ";
                cin>>input;
                if( input == 'a' || input == 'A')
                {
                       cout<<"What is the item?\n;
                       
                        cin>>num1;

                      
                        
                                if (numItems <5){
                                        list[numItems] = num1;
                                        numItems++;
                                }

                        
                        if(numItems>=5)
                                cout<<"You'll need a bigger list!"<<endl;
                }
        }
        while (input != 'Q' && input != 'q');

        return 0;
}
