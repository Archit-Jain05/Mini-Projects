#include<iostream>
#include<stdio.h>
#include<conio.h>

using namespace std;

class home
{
public:
    char name[15];
    int password;
    int choice_num;

    home()
    {
        cout<<"Loading----"<<endl<<endl;
    }

    void login()
    {
        cout<<"Please enter your login details: \n";
        cout<<"Name: ";
        cin>>name;
        cout<<"Password: ";
        cin>>password;
    }

    void login_validate()
    {
        if(password==12345)
        {
            login_approve();
        }
        else
        {
            login_disapprove();
        }
    }

    void login_approve()
    {
        cout<<"-------------------------------------------------------------"<<endl;
        cout<<"\nWelcome back "<<name<<" to the stock exchange platform :)"<<endl;
        cout<<"-------------------------------------------------------------"<<endl;
        cout<<"What would you like to do today?\n 1.Buy\n 2.sell\n 3.Watch prices\n\n Choice: ";
        cin>>choice_num;
    }

    void login_disapprove()
    {
        cout<<"Sorry try again password is wrong :("<<endl;
    }

    void welcome()
    {
        cout<<"Welcome back";
    }
};


class stocks:public home
{
private:
public:
    int s[5];

    stocks()
    {
        s[1]=100;
        s[2]=200;
        s[3]=45;
        s[4]=30;
        s[5]=150;

    }



    void printstocks()
    {
        cout<<"\n\n    |            Stock name: \t\tPrice       |"<<endl;
        cout<<"    |            1. Stock 1\t";
        cout<<"       Rs. "<<s[1]<<"      |"<<endl;
        cout<<"    |            2. Stock 2\t";
        cout<<"       Rs. "<<s[2]<<"      |"<<endl;
        cout<<"    |            3. Stock 3\t";
        cout<<"       Rs. "<<s[3]<<"       |"<<endl;
        cout<<"    |            4. Stock 4\t";
        cout<<"       Rs. "<<s[4]<<"       |"<<endl;
        cout<<"    |            5. Stock 5\t";
        cout<<"       Rs. "<<s[5]<<"      |"<<endl;

    }
};


class buy:public stocks
{
public:

    int n,m,st,total,total_pr,initial;  /*n=user input for number of items          m=loop counter
                                          total=return variable for calc_total      quantity*/
    int calc_total(int quantity,int st)
    {
        total=quantity*st;
        return total;
    }

     void choice()
    {
        switch(choice_num)
        {
            case 1:
                    cout<<"\n\nBuying Interface"<<endl;
                    printstocks();
                    calc_bill();
                    break;

            /*case 2:
                    cout<<"\n\nSelling Interface"<<endl;
                    printstocks();

                    break;*/

            case 3:
                    cout<<"\n\nViewing Interface"<<endl;
                    printstocks();
                    break;
        }

    }

    void calc_bill()
    {
        if(choice_num==1)
        {
            cout<<"\nHow many items you want to buy?"<<endl;
            cin>>n;
            initial=0;

                int quantity_st;
                for(m=1;m<=n;m++)
            {

                cout<<"\nEnter the stock code you want to buy: ";
                cin>>st;
                cout<<"\nEnter the quantity you wish to buy: ";
                cin>>quantity_st;
                initial=initial+calc_total(quantity_st,s[st]);

            }
            cout<<"===================================================================================================================="<<endl;
    cout<<"|                                                                                                                   |"<<endl;
    cout<<"|                                            R E C I E P T                                                          |"<<endl;
    cout<<"===================================================================================================================="<<endl;
    cout<<"===================================================================================================================="<<endl;
             cout<<"\n\n|        Name        Price       Quantity|"<<endl;

            switch(st)
            {

            case 1:cout<<"|      Stock 1         "<<s[st]<<"         "<<quantity_st<<endl;
                    break;

            case 2:cout<<"|      Stock 2         "<<s[st]<<"         "<<quantity_st<<endl;
                    break;

            case 3:cout<<"|      Stock 3         "<<s[st]<<"         "<<quantity_st<<endl;
                    break;

            case 4:cout<<"|      Stock 4         "<<s[st]<<"         "<<quantity_st<<endl;
                    break;

            case 5:cout<<"|      Stock 5         "<<s[st]<<"         "<<quantity_st<<endl;
                    break;


            }


            cout<<"\n|           Total price = Rs."<<initial<<"          |\n";

        }

    }



};

/*class sell:public stocks
{
    public:
        void sell_st()
        {
            cout<<"Enter the number of stock to sell;";
        }
};*/

main()
{
    buy b1;
    b1.login();
    b1.login_validate();
    b1.choice();
    getch();

}
