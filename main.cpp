//Eric Perez
#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
        vector <string> list; //array of 5 strings
        string item;
        int numItems = 0;
        char input;


        do{
                cout<<"\n==GROCERY LIST MANAGER==";
                cout<<"\nEnter your choice: ";
                cout<<"\n (A)dd an item";
                if(list.size() != 0)
                {
                        cout<<"\n (D)elete last item";
                }
                cout<<"\n (Q)uit";
                cout<<"\nYour choice (A/Q): ";
                cin>>input;
                if( input == 'a' || input == 'A')
                {
                        cout<<"What is the item?\n";

                        cin>>item;
                        list.push_back(item);
                        numItems++;
                }        
                else if((input == 'd' || input == 'D') && list.size()>0)
                {

                        item = list.back();
                        list.pop_back();
                        cout<<item<<" was deleted from the list.\n";


                }

                else if ((input == 'q' || input == 'Q') && numItems == 0)
                {            

                        cout<<"No items to buy!"<<endl;

                }

        }
        while(!(input == 'q' || input == 'Q'));

        if(numItems != 0)
        {
                cout<<"==ITEMS TO BUY=="<<endl;

                for(int index = 0; index <list.size();index++)//List starts counting from 0
                {
                        cout<<index+1<<" "<<list[index]<<endl;//List starts at 1 then 2 and 3 and so on...
                }
        }
        return 0;
}
