#include <iostream>

#include <string.h>
using namespace std;

static int s=30;

class bus
{
    char bus_name[50], depart[50], from[50], to[50],psngr_name[50];
    int seat,bus_nmbr,avlble_seat,psngr_nmbr;



public:

void Add_info()
{

cout<<"Enter bus Name: ";
cin>>bus_name;

cout<<"Enter Bus No.: ";
cin>>bus_nmbr;;

cout<<"Departure Time: ";
cin>>depart;

cout<<"From: ";
cin>>from;

cout<<"To: ";
cin>>to;

}


void Reserve_seat()
{

   cout<<"*******************************************"<<endl;
   cout<<"Bus Name: "<<bus_name<<endl;
   cout<<"Passenger's Name: "<<endl;
   cin>>psngr_name;
   cout<<"Passenger's Cell No.: "<<endl;
   cin>>psngr_nmbr;
   cout<<"Seat Number: "<<endl;
   cin>>seat;
   if(seat>30)
   {

    cout<<"There are only 30 seats available in this bus."<<endl;

   }
   else if(seat==seat)
   {
       cout<<"Sorry This is not avialable"<<endl;
       cout<<"This seat is alraedy booked by"<<psngr_name<<endl;

   }
else
    cout<<" "<<endl;

   s--;
   avlble_seat=s;
   cout<<"*******************************************"<<endl;
   cout<<""<<endl;
   cout<<""<<endl;

}

void show()
{
    cout<<"*******************************************"<<endl;
    cout<<"Bus Name: "<<bus_name<<"  -  "<<"Bus No.: "<<bus_nmbr<<endl;
    cout<<"Passenger's Name: "<<psngr_name<<endl;
    cout<<"Passenger's Cell No.: "<<psngr_nmbr<<endl;
    cout<<"Seat Number: "<<seat<<endl;
    cout<<"Destination: "<<to<<"   -  "<<"From: "<<from<<endl;
    cout<<"Departure time: "<<depart<<endl;
    cout<<"Available seat: "<<avlble_seat<<endl;
    cout<<"*******************************************"<<endl;
}




};

int main()
{
   int i;
   bus b1;

while(1)

{
cout<<"                            Welcome To Hanif Paribahan"<<endl;

cout<<""<<endl;
cout<<""<<endl;
cout<<""<<endl;
cout<<""<<endl;
cout<<"*Menu:"<<endl;
cout<<""<<endl;

cout<<"1.Add Information"<<endl;
cout<<"2.Reservation"<<endl;
cout<<"3.Show"<<endl;
cout<<"4.Exit"<<endl;
cout<<""<<endl;
cout<<""<<endl;
cout<<"Enter your choice:-> "<<endl;

cin>>i;

switch(i)

{

case 1:  b1.Add_info();
break;

case 2:  b1.Reserve_seat();
break;

case 3:  b1.show();
break;



}

}

return 0;


}

