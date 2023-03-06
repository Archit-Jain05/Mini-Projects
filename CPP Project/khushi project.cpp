#include<iostream>
#include<string.h>
#include<math.h>

using namespace std;

char con;
char feed_name[30];
int feed_rate;

int name[30][30];
int quantity[30];
int n,i;
char y[10];
int choice;
int price[10];
int p;

class store
{
public:
        void title()
        {

    cout<<"                                   ________________\n";
cout<<"                                  |                    PRICE LIST                         |\n";
cout<<"                                  |                                                       |\n";
cout<<"                                  |          * * * * * * Welcome to Ikea * * * * * *      |\n";
cout<<"                                  |                                                       |\n";
cout<<"                                  |         1.BED                                Rs.130   |\n";
cout<<"                                  |         2.BEDSIDE TABLE                      Rs.270   |\n";
cout<<"                                  |         3.WARDROBE                           Rs.10    |\n";
cout<<"                                  |         4.CHEST OF DRAWERS                   Rs.25    |\n";
cout<<"                                  |         5.ARMCHAIR                           Rs.50    |\n";
cout<<"                                  |         6.TRAY TABLE                         Rs.150   |\n";
cout<<"                                  |         7.STOOL                              Rs.220   |\n";
cout<<"                                  |         8.STEP LADDER                        Rs.15    |\n";
cout<<"                                  |         9.LAMP                               Rs.25    |\n";
cout<<"                                  |         10.MIRROR                            Rs.30    |\n";
cout<<"                                  |         11.CURTAINS                          Rs.32    |\n";
cout<<"                                  |         12.FLOOR DECKING                     Rs.25    |\n";
cout<<"                                  |         13.WASH BASIN CABINET                Rs.30    |\n";
cout<<"                                  |         14.BACK CUSHION                      Rs.15    |\n";
cout<<"                                  |         15.SWING                             Rs.45    |\n";
cout<<"                                  |         16.DINING TABLE                      Rs.05    |\n";
cout<<"                                  |         17.FOLDING CHAIR                     Rs.07    |\n";
cout<<"                                  |         18.WINDCHIME                         Rs.25    |\n";
cout<<"                                  |         19.WRITING TABLE                     Rs.30    |\n";
cout<<"                                  |         20.DESK                              Rs.37    |\n";
/* cout<<"                                  |         21.CANVAS ROLL                     Rs.20    |\n";
cout<<"                                  |         22.NEEDLE TOOL                     Rs.10    |\n";
cout<<"                                  |         23.GLUE STICKS                     Rs.15    |\n"; */

cout<<"                                  |                                                       |\n";
cout<<"                                  |     - - -  MORE THINGS TO BE ADDED SOON  - - -        |\n";
cout<<"                                  |________________|\n";
cout<<"\n";

    cout<<"                                       HOW MANY ITEMS YOU WANT TO BUY ? ";
                                                            cin>> n;
                                                            cout<<"\n";
    for(i=1;i<=n;i++)
    {

    cout<<"                                     ENTER PRODUCT NAME/NAMES AND QUANTITY : ";
                                                      cin>>name[i][i]>>quantity[i];
    }
    cout<<"\n";

    cout<<"===================================================================================================================="<<endl;
    cout<<"|                                                                                                                   |"<<endl;
    cout<<"|                                            R E C I E P T                                                          |"<<endl;
    cout<<"===================================================================================================================="<<endl;
    cout<<"===================================================================================================================="<<endl;
    cout<<"|                                                                                                                   |\n";
    cout<<"|             ITEM NAME           ITEM QUANTITY               TOTAL PRICE                                           |\n";

    for(i=1;i<=n;i++)
    {
        switch(name[i][i])
        {
        case 1:
        {
            cout<<"|\t\t BED  ";
            cout<<"\t\t\t"<<quantity[i];
            price[i]=130*quantity[i];
            cout<<"\t\t\t"<<price[i]<<"\t\t\t\t\t\t    |\n";
            break;
        }
        case 2:
        {
            cout<<"|\t\t BEDSIDE TABLE ";
            cout<<"\t\t"<<quantity[i];
            price[i]=270*quantity[i];
            cout<<"\t\t\t"<<price[i]<<"\t\t\t\t\t\t    |\n";
            break;
        }
        case 3:
        {
            cout<<"|\t\t WARDROBE ";
            cout<<"\t\t"<<quantity[i];
            price[i]=10*quantity[i];
            cout<<"\t\t\t"<<price[i]<<"\t\t\t\t\t\t    |\n";
            break;
        }
        case 4:
        {
            cout<<"|\t\t CHEST OF DRAWERS";
            cout<<"\t\t"<<quantity[i];
            price[i]=25*quantity[i];
            cout<<"\t\t\t"<<price[i]<<"\t\t\t\t\t\t    |\n";
            break;
        }
        case 5:
        {
            cout<<"|\t\t ARMCHAIR";
            cout<<"\t\t"<<quantity[i];
            price[i]=50*quantity[i];
            cout<<"\t\t\t"<<price[i]<<"\t\t\t\t\t\t    |\n";
            break;
        }
        case 6:
        {
            cout<<"|\t\t TRAY TABLE";
            cout<<"\t\t"<<quantity[i];
            price[i]=150*quantity[i];
            cout<<"\t\t\t"<<price[i]<<"\t\t\t\t\t\t    |\n";
            break;
        }
        case 7:
        {
            cout<<"|\t\t STOOL";
            cout<<"\t\t"<<quantity[i];
            price[i]=220*quantity[i];
            cout<<"\t\t\t"<<price[i]<<"\t\t\t\t\t\t    |\n";
            break;
        }
        case 8:
        {
            cout<<"|\t\t STEP LADDER";
            cout<<"\t\t"<<quantity[i];
            price[i]=15*quantity[i];
            cout<<"\t\t\t"<<price[i]<<"\t\t\t\t\t\t    |\n";
            break;
        }
        case 9:
        {
            cout<<"|\t\t LAMP";
            cout<<"\t\t"<<quantity[i];
            price[i]=25*quantity[i];
            cout<<"\t\t\t"<<price[i]<<"\t\t\t\t\t\t    |\n";
            break;
        }
        case 10:
        {
            cout<<"|\t\t MIRROR";
            cout<<"\t\t"<<quantity[i];
            price[i]=30*quantity[i];
            cout<<"\t\t\t"<<price[i]<<"\t\t\t\t\t\t    |\n";
            break;
        }
         case 11:
        {
            cout<<"|\t\t CURTAINS";
            cout<<"\t\t"<<quantity[i];
            price[i]=32*quantity[i];
            cout<<"\t\t\t"<<price[i]<<"\t\t\t\t\t\t    |\n";
            break;
        }
         case 12:
        {
            cout<<"|\t\t FLOOR DECKING";
            cout<<"\t\t"<<quantity[i];
            price[i]=25*quantity[i];
            cout<<"\t\t\t"<<price[i]<<"\t\t\t\t\t\t    |\n";
            break;
        }
         case 13:
        {
            cout<<"|\t\t WASH BASIN CABINET";
            cout<<"\t\t"<<quantity[i];
            price[i]=30*quantity[i];
            cout<<"\t\t\t"<<price[i]<<"\t\t\t\t\t\t    |\n";
            break;
        }
         case 14:
        {
            cout<<"|\t\t BACK CUSHION";
            cout<<"\t\t"<<quantity[i];
            price[i]=15*quantity[i];
            cout<<"\t\t\t"<<price[i]<<"\t\t\t\t\t\t    |\n";
            break;
        }
         case 15:
        {
            cout<<"|\t\t SWING";
            cout<<"\t\t"<<quantity[i];
            price[i]=45*quantity[i];
            cout<<"\t\t\t"<<price[i]<<"\t\t\t\t\t\t    |\n";
            break;
        }
         case 16:
        {
            cout<<"|\t\t DINING TABLE";
            cout<<"\t\t"<<quantity[i];
            price[i]=05*quantity[i];
            cout<<"\t\t\t"<<price[i]<<"\t\t\t\t\t\t    |\n";
            break;
        }
         case 17:
        {
            cout<<"|\t\t FOLDING CHAIR";
            cout<<"\t\t"<<quantity[i];
            price[i]=07*quantity[i];
            cout<<"\t\t\t"<<price[i]<<"\t\t\t\t\t\t    |\n";
            break;
        }
        case 18:
        {
            cout<<"|\t\t  WINDCHIME";
            cout<<"\t\t"<<quantity[i];
            price[i]=25*quantity[i];
            cout<<"\t\t\t"<<price[i]<<"\t\t\t\t\t\t    |\n";
            break;
        }
        case 19:
        {
            cout<<"|\t\t WRITING TABLE";
            cout<<"\t\t"<<quantity[i];
            price[i]=30*quantity[i];
            cout<<"\t\t\t"<<price[i]<<"\t\t\t\t\t\t    |\n";
            break;
        }
        case 20:
        {
            cout<<"|\t\t DESK";
            cout<<"\t\t"<<quantity[i];
            price[i]=37*quantity[i];
            cout<<"\t\t\t"<<price[i]<<"\t\t\t\t\t\t    |\n";
            break;
        }
        default:
            cout<<"More items will be added soon\n"<<endl;
            choice = 0;
        }
     /*   case 21:
        {
            cout<<"|\t\t CANVAS ROLL";
            cout<<"\t\t"<<quantity[i];
            price[i]=20*quantity[i];
            cout<<"\t\t\t"<<price[i]<<"\t\t\t\t\t\t    |\n";
            break;
        }
        case 22:
        {
            cout<<"|\t\t NEEDLE TOOL";
            cout<<"\t\t"<<quantity[i];
            price[i]=10*quantity[i];
            cout<<"\t\t\t"<<price[i]<<"\t\t\t\t\t\t    |\n";
            break;
        }
        case 23:
        {
            cout<<"|\t\t GLUE STICKS";
            cout<<"\t\t"<<quantity[i];
            price[i]=15*quantity[i];
            cout<<"\t\t\t"<<price[i]<<"\t\t\t\t\t\t    |\n";
            break;
        } */
    }
        }
  };

main()
{
    store s;
    s.title();
}
