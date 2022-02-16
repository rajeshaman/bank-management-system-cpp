#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;
class bank{
    char name[100],add[100],y;
    int balance;
    public:  
             void open_account();
             void deposit_money();
             void withdraw_money();
             void display_account();
             
};

void bank::open_account()
{
    cout<<"enter your full name::";
    cin.ignore();
    cin.getline(name,100);
    cout<<"enter your address::";
    cin.ignore();
    cin.getline(add,100);
    cout<<"what type of account you want to open saving (s) current (c)";
    cin>>y;
    cout<<"enter amount for deposit::";
    cin>>balance;
    cout<<"your account has been created";
    
    
    
}
   void bank::deposit_money()
   {
       int a;
       cout<<"enter how much you want to deposit::";
       cin>>a;
       balance+=a;
       cout<<"total amount you deposited::"<<balance;
       
   }
   void bank:: display_account()
   {
       cout<<"your full name::\t"<<name;
       cout<<"your address:: \t"<<add;
       cout<<"type of account you want to open:: \t"<<y;
       cout<<"amount you deposit ::\t"<<balance;
       
    }
    
        void bank :: withdraw_money()
        { 
            float amount;
            cout<<"\n withdraw";
            cout<<"enter amount to withdraw :: ";
            cin>> amount;
            balance-=amount;
            cout<<"now total amount is left:: "<<balance;
        }
    


int main()
{
    int ch,x;
    bank obj;
    do
    {
        
    
    cout<<"1) open account \n";
    cout<<"2) deposit money \n";
    cout<<"3) withdraw money\n";
    cout<<"4) display money\n";
    cout<<"5)exit\n";
    cout<<"select option\n";
    cin>> ch;
    switch(ch)
    {
        case 1:
        cout<<"1) open account \n";
        obj.open_account();
        break;
        case 2:
        cout<<"2)deposit money \n";
        obj.deposit_money();
        break;
        case 3:
        cout<<"3)withdraw money: \n";
        obj.withdraw_money();
        break;
        case 4:
        cout<<"4) display_account()";
        obj. display_account();
        break;
        case 5:
        if(ch==5)
        {
         exit(1);   
        }
         default:
        cout<<"this is not exist try again\n";
        
    }
    cout<<"\n do you want to select next option then press ::Y\n";
    cout<<"if you want to exit then press  :: N";
    x=getch();
    if(x=='n'||x=='N')
    exit(0);
    
    }while(x=='Y'||x=='Y');
    

    getch();
    return 0;
}