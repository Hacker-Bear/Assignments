#include<iostream>      //Attendance Management System
#include<string>
#include<cctype>
using namespace std;
void option_1(string data[5],char att[5]);
void option_2(string data[5],char att[5]);
void option_3(string data[5],char att[5]);
int main()
{
    string Student [5] = {"Ali", "Eisha","Sami","Manu","Ahmed"};
    int choice;
    char att[5];
    do
    {
        system("clear");
        cout<<"\n1. Mark Attendance of Student For Today"<<endl;
        cout<<"\n2. Update Today's Attendance"<<endl;
        cout<<"\n3. Show Today Attendance"<<endl;
        cout<<"\n4. Exit"<<endl;
        cout<<"\n===Choose Your Selection: ";
        cin>>choice;
        if(choice == 1 )
        {
            system("clear");
            option_1(Student,att);
        }
        else if(choice == 2)
        {
            system("clear");
            option_2(Student,att);
        }
        else if(choice == 3)
        {
            system("clear");
            option_3(Student,att);
        }
        else
        {
            cout<<"\nWrong Input!\nExiting Program..."<<endl;
            break;
        }
    }while(choice!=4);
    cout<<"\nExited Successfully"<<endl;
}
void option_1(string data[5],char att[5])
{
    cout<<"Mark Attendance of The Student By 'P' (Present), 'A' Absent, 'L' ON LEAVE"<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<"\n"<<i+1<<". "<<data[i];
        cout<<"  ";
        cin>>att[i];
        att[i]=toupper(att[i]);
        if(att[i] != 'P' && att[i] != 'A' && att[i] != 'L')
        {
            cout<<"\nWrong Input"<<endl;
            i--;
        }
    }
}
void option_2(string data[5],char att[5])
{
    int choice,operation;
    char offer;
    while(true)
    {
        cout<<"\nOperation_1. Change Name";
        cout<<"\nOperation_2. Update Attendance"<<endl;
        cout<<"\nOperation_3.Exit"<<endl;
        cout<<"\n\n---Enter The Given Operation Serial Number: ";
        cin>>operation;
        if(operation == 1)
        {

            for(int i=0;i<5;i++)
            {
                cout<<i+1<<". "<<data[i]<<endl;
            }
            cout<<"\nEnter The Serial Number of a Student To Update Name: ";
            cin>>choice;
            if((choice > 0)&&(choice<6))
            {
                cout<<"\nEnter The Name Of The Student: ";
                cin>>data[choice-1];   
                data[choice-1][0] = toupper(data[choice-1][0]);
                cout<<"\nUpdated Successfully";
                cout<<"\nWant To Exit (Y/N): ";
                cin>>offer;
                offer == toupper(offer);
                if(offer == 'Y')
                {
                    cout<<"\nExited Successfully"<<endl;
                    break;
                }
                else if(offer == 'N')
                {
                    continue;
                }
            }
            else
            {
                cout<<"\nInvalid Serial Number";
            }
        }
        else if(operation == 2)
        {

            for(int i=0;i<5;i++)
            {
                cout<<i+1<<". "<<data[i]<<endl;
            }
            cout<<"\nEnter The Serial Number of a Student To Update Attendance: ";
            cin>>choice;
            if((choice > 0)&&(choice<6))
            {
                cout<<choice<<". "<<data[choice-1];
                cout<<"\nEnter the Status of The Student: ";
                cin>>att[choice-1];
                att[choice-1] = toupper(att[choice-1]);
                cout<<"\nUpdated Successfully";
                cout<<"\nWant To Exit (Y/N): ";
                cin>>offer;
                offer == toupper(offer);
                if(offer == 'Y')
                {
                    break;
                }
                else if(offer == 'N')
                {
                    continue;
                }
            }
            else
            {
                cout<<"\nInvalid Serial Number";
            }

        }
        else if(operation == 3)
        {
            cout<<"Exited Successfully"<<endl;
            break;
        }
    }
}
void option_3(string data[5],char att[5])
{
  //  system("clear"); 
    char choice;
    while(true)
    {
        cout<<"\n=== Showing Current Status ===";
        cout<<"\n\n~-~- Present Students ~-~-"<<endl;
        for(int i=0;i<5;i++)
        {
            if(att[i]=='P')
            {
                cout<<i+1<<". "<<data[i]<<"  "<<att[i]<<endl;
            }
        }
        cout<<"\n\n~-~- Absent Students ~-~-"<<endl;
        for(int i=0;i<5;i++)
        {
            if(att[i]=='A')
            {
                cout<<i+1<<". "<<data[i]<<"  "<<att[i]<<endl;
            }
        }
        cout<<"\n\n~-~- On_Leave Students ~-~-"<<endl;
        for(int i=0;i<5;i++)
        {
            if(att[i]=='L')
            {
                cout<<i+1<<". "<<data[i]<<"  "<<att[i]<<endl;
            }
        }
        cout<<"\n\nDo You Want To Exit (Y/N): ";
        cin>>choice;
        choice = toupper(choice);
        if (choice == 'Y')
        {
            cout<<"\nExited Successfully"<<endl;
            break;
        }
        else
        {
            continue;
        }
    }
}