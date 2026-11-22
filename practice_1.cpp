#include<iostream>     //Learning CRUD Operations and Functions
#include <string>
using namespace std;
int search(string data[4], string key)
{
    for(int i=0;i<4;i++)
    {
     if(key==data[i])
     {
        return i;
     }

    } 
    return -1;   
}
void input(string data[4][4])
{
    for(int i=0;i<4;i++)
    {
        cout<<"Enter Name: ";
        cin>>data[i][0];
        cout<<"Enter Age: ";
        cin>>data[i][1];
        cout<<"Enter Gender: ";
        cin>>data[i][2];
        cout<<"Enter Education: ";
        cin>>data[i][3];
    }
}
void view(string Data[4][4])
{
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            cout<<Data[i][j]<<" ";
        }cout<<endl;
    }

}
int main()
{
   
    string DB [] = {
        "Ali","Eisha","Sami","Manu"
    };
    // input(DB);
    //  view(DB);
    search(DB,"Sami");
    cout<<search(DB,"Sami")<<endl;
    return 0;
}