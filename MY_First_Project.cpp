#include<bits/stdc++.h>
using namespace std ;
string Userid,password ;
vector<string> four ;
vector<string> two ;
vector<string> more ;
class VEHICLE
{
public :
    void starting() ;
    void signup() ;
    void signin() ;
    void getdata() ;
    void setdata() ;
};
void VEHICLE :: starting()
{
start :
    int choice ;
    cout<<"\n\n" ;
    cout<<"__________Welcome___________ \n\n\n ";
    cout<<endl;

    cout<<"Press '1' for SingUp"<<endl;
    cout<<"Press '2' for Exit "<<endl;
    cin>>choice ;
    if(choice==1)
    {
        signup() ;
    }
    else if(choice==2)
    {
        exit(0) ;
    }
    else
    {
        cout<<"Invalid Key"<<endl;
        cout<<"Please try again"<<endl;
        goto start ;
    }
}

void VEHICLE :: signup(void)
{
start:
    string Name,Mobile_Number,Password,cun_pass ;
    cout<<"\n Do not use space when you will writing your information \n\n"<<endl;

    cout<<"Please enter your name : "<<endl;
    cin>>Name ;
    cout<<"Please enter your mobile number : "<<endl;
    cin>>Mobile_Number ;
    cout<<"Please enter your password : "<<endl;
    cin>>Password ;
    cout<<"Please confirm your password : "<<endl;
    cin>>cun_pass ;
    if(Password==cun_pass)
    {
        Userid=Name ;
        password=Password ;
        cout<<"\n\n\nYou have successfully Sign Up \n\n\n "<<endl;
        cout<<"\nPlease sign in or go to main menu \n\n"<<endl;
endd :
        int  num ;
        cout<<"Press 1 for sign in "<<endl;
        cout<<"Press 2 for exit"<<endl;
        cin>>num ;
        switch(num)
        {
        case 1 :
            signin() ;
            break ;
        case 2 :
            starting() ;
            break ;
        default :
            cout<<"Invalid key "<<endl;
        }
        goto endd ;
    }
    else
    {
        cout<<"Your password is incorrect "<<endl;
        cout<<"Please try again "<<endl;
        goto start ;
    }

}
void VEHICLE :: signin()
{
start :
    string name,Password ;
    cout<<"Please enter user name/id  : " ;
    cin>>name ;
    cout<<"Enter Password   :  "<<endl ;
    cin>>Password ;
    if(name==Userid && Password==password)
    {
        getdata() ;

    }
    else
    {
        cout<<"Invalid user name or password \n\n"<<endl;
        cout<<"Try again"<<endl;
        goto start ;
    }
}


void VEHICLE :: getdata()
{
start :
    int choice ;
    cout<<"Press 1 for enter data"<<endl;
    cout<<"press 2 for result"<<endl;
    cin>>choice ;
    switch(choice)
    {
    case 1 :
    {
        string name ;
        string type;
        cout<<"Enter vehicle name :  " ;
        cin>>name ;
        cout<<"Number of tyres in this vehicle ? :  " ;
        cin>>type ;
        if(type=="2")
        {
            two.push_back(name) ;
        }
        else if(type=="4")
        {
            four.push_back(name) ;
        }
        else
        {
            more.push_back(name) ;
        }

        break ;
    }

    case 2 :
        setdata() ;
        exit(0) ;
        break ;
    default :
        cout<<"You have entered wrong key " ;

    }
    goto start ;

}

void VEHICLE :: setdata()
{
    cout<<"\n\nTwo tyres vehicle :- "<<endl;
    for(auto it : two)
    {
        cout<<it<<endl;
    }
    cout<<endl;
    cout<<"Four tyres vehicle :- "<<endl;
    for(auto it : four)
    {
        cout<<it<<endl;
    }
    cout<<endl;
    cout<<"More then four tyres vehicle :- "<<endl;
    for(auto it : more)
    {
        cout<<it<<endl;
    }
    cout<<endl;
    cout<<"\n\n" ;
    cout<<"___________Thank You___________ \n\n\n ";
    cout<<endl;
}
int main ()
{
    VEHICLE ganv ;
    ganv.starting() ;


    return 0 ;
}



