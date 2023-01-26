#include<iostream>
using namespace std;
int main()
{
   int quantity;
   int choice;
   int Qrooms=0,Qfriedrice=0,Qnoodles=0,Qmilkshake=0,Qchicken=0;
   int Srooms=0,Sfriedrice=0,Snoodles=0,Smilkshake=0,Schicken=0;
   int Total_rooms=0,Total_friedrice=0,Total_noodles=0,Total_milkshake=0,Total_chicken=0;
   cout<<"\n\t Quantity of Items we have:\n";
   cout<<"\n Availability of Rooms: ";
   cin>>Qrooms;
   cout<<"\n Quantity of Fried rice: ";
   cin>>Qfriedrice;
   cout<<"\n Quantity of Noodles: ";
   cin>>Qnoodles;
   cout<<"\n Quantity of Milkshake: ";
   cin>>Qmilkshake;
   cout<<"\n Quantity of Chicken roll: ";
   cin>>Qchicken;
   //menu list preview
   m:
   cout<<"\n\t\t\t Please Select from the Menu List:";
   cout<<"\n\n1) Rooms\n";
   cout<<"\n2) Fried Rice\n";
   cout<<"\n3) Noodles\n";
   cout<<"\n4) Milkshake\n";
   cout<<"\n5) Chicken Roll\n";
   cout<<"\n6) Information regarding sales and collections\n";
   cout<<"\n7) Exit\n";
   //choics
   cout<<"\nPlease Enter Your Choice: ";
   cin>>choice;
   //total rooms
   switch(choice)
   {
    case 1:
        cout<<"\n\n Enter the number of rooms you want: ";
        cin>>quantity;
        if(Qrooms-Srooms>=quantity)
        {
            Srooms=Srooms+quantity;
            Total_rooms=Total_rooms+(quantity*1200);
            cout<<"\n\n\t\t"<<quantity<<" room/rooms have been allocated to you!";
        }
        else
            cout<<"\n\tOnly "<<Qrooms-Srooms<<" Rooms remaining in hotel:";
            break;
    case 2:
        cout<<"\n\n Enter the quantity of friedrice: ";
        cin>>quantity;
        if(Qfriedrice-Sfriedrice>=quantity)
        {
            Sfriedrice=Sfriedrice+quantity;
            Total_friedrice=Total_friedrice+(quantity*250);
            cout<<"\n\n\t\t"<<quantity<<" Friedrices is the Order!";
        }
        else
            cout<<"\n\tOnly "<<Qfriedrice-Sfriedrice<<" Friedrices remaining in hotel:";
            break;
    case 3:
        cout<<"\n\n Enter the quantity of Noodles: ";
        cin>>quantity;
        if(Qnoodles-Snoodles>=quantity)
        {
            Snoodles=Snoodles+quantity;
            Total_noodles=Total_noodles+(quantity*150);
            cout<<"\n\n\t\t"<<quantity<<" Noodles is the Order!";
        }
        else
            cout<<"\n\tOnly "<<Qnoodles-Snoodles<<" Noodles remaining in hotel:";
            break;
    case 4:
        cout<<"\n\n Enter the quantity of Milkshake: ";
        cin>>quantity;
        if(Qmilkshake-Smilkshake>=quantity)
        {
            Smilkshake=Smilkshake+quantity;
            Total_milkshake=Total_milkshake+(quantity*125);
            cout<<"\n\n\t\t"<<quantity<<" Milkshake is the Order!";
        }
        else
            cout<<"\n\tOnly "<<Qmilkshake-Smilkshake<<" Milkshakes remaining in hotel:";
            break;
    case 5:
        cout<<"\n\n Enter the quantity of Chicken Roll: ";
        cin>>quantity;
        if(Qchicken-Schicken>=quantity)
        {
            Schicken=Schicken+quantity;
            Total_chicken=Total_chicken+(quantity*100);
            cout<<"\n\n\t\t"<<quantity<<" Chicken Roll is the Order!";
        }
        else
            cout<<"\n\tOnly "<<Qchicken-Schicken<<" Chicken Rolls remaining in hotel:";
            break;
    case 6:
        cout<<"\n\t\t Details of sales and collection: ";
        //rooms
        cout<<"\n\n Number of rooms we had: "<<Qrooms;
        cout<<"\n\n Number of rooms we gave for rent: "<<Srooms;
        cout<<"\n\n Remaining rooms: "<<Qrooms-Srooms;
        cout<<"\n\n Total rooms collection for the day: "<<Total_rooms;
        //friedrice
        cout<<"\n\n Number of Friedrices we had: "<<Qfriedrice;
        cout<<"\n\n Number of Friedrices we sold: "<<Sfriedrice;
        cout<<"\n\n Remaining Friedrices: "<<Qfriedrice-Sfriedrice;
        cout<<"\n\n Total Friedrices collection for the day: "<<Total_friedrice;
        //noodles
        cout<<"\n\n Number of Noodles we had: "<<Qnoodles;
        cout<<"\n\n Number of Noodles we sold: "<<Snoodles;
        cout<<"\n\n Remaining Noodles: "<<Qnoodles-Snoodles;
        cout<<"\n\n Total Noodles collection for the day: "<<Total_noodles;
        //milkshakes
        cout<<"\n\n Number of Milkshakes we had: "<<Qmilkshake;
        cout<<"\n\n Number of Milkshakes we sold: "<<Smilkshake;
        cout<<"\n\n Remaining Milkshakes: "<<Qmilkshake-Smilkshake;
        cout<<"\n\n Total Milkshakes collection for the day: "<<Total_milkshake;
        //chickenroll
        cout<<"\n\n Number of Chickenrolls we had: "<<Qchicken;
        cout<<"\n\n Number of Chickenrolls we gave for rent: "<<Schicken;
        cout<<"\n\n Remaining Chickenrolls: "<<Qchicken-Schicken;
        cout<<"\n\n Total Chickenrolls collection for the day: "<<Total_chicken;
        break;
    case 7:
        exit(0);
    default:
        cout<<"\nPlease Select the above mentioned options!\n8";
   }
   goto m;

   
}