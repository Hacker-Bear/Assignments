#include<iostream>      //Finding The Duplicate or Repeated Number inside Array
#include<limits>
using namespace std;
int validinput()
{
    int value;
    while(true)
    {
        cin>>value;
        if(cin.fail())
        {
            cout<<"\nInvalid Input! Only Integers Allowed"<<endl;
            cout<<"\nPlease Enter The Number Again: "<<endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(),'\n');
        }
        else
        {
            return value;
        }
    }
}
int main()
{
    int size,arr[100],choice,temp=0;
    cout<<"\nEnter The Size Of The Array: ";size=validinput();
    if(size>100)
    {
        cout<<"\nThe Size Is Too Large For Array";
    }
    else if((size<100)&&(size>1))
    {
        for(int i = 0;i<size;i++)
        {
            cout<<"\nEnter The Number: ";arr[i]=validinput();
        }

    }
    /*else if(size=0)
    {
        break;
    }*/
    cout<<"\n1.Show The Total Array Elements\n2. Show The Repeated Number In Array\n\n==>Choose The Operation: ";
    choice=validinput();
    if(choice == 1){
        
        cout<<"\n The Arrays Elements Are: ";
        for(int i=0;i<size;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    else if(choice == 2){
        cout<<"\nThe Repeated Number(s) In Array: ";
        bool found = 0;
        for(int i = 0; i<size;i++)
        {
            int count = 0;
            for(int j = 0;j<i;j++)
            {
                
                if(arr[i]==arr[j])
                {
                    count++;
                }
                
            }
            if (count==1)
            {
                cout<<arr[i]<<" ";
                found = 1;
            }
        }
        if(!found)
        {
            cout<<"\nNo Duplicate Found";
        }
        cout<<endl;
    }
    return 0;
}