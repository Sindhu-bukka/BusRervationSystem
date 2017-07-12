#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<iostream.h>
#include<string.h>
class a
{	char from[10],to[10],seat[4][10];
	int n,s,b[];
	public:
		void display();
		void booking();
		void empty();
		void payment();

}
bus[10];
void a::display()
{


	cout<<"\nfrom:\t\t\t";
	cin>>from;
	cout<<"\n to\t\t";
	cin>>to;
	/*bus[p].empty();*/
	cout<<"1.ac \n 2.nonac";
	cin>>n;
	if((strcmp(from,"hyderabad")==0)&&(strcmp(to,"mumbai")==0))
	 {
		if(n==1)
		{
		 cout<<"\n1.garuda \t arrival time:3:00 am \t departure time:4:00 pm\t cost:800\tbusno:123\t bus driver no:9545423342 \t driver name:shekar";
		cout<<"\n2.indra  \t arrival time:1:30 pm  \t departure time:2:30 am\t cost:800\t bus no:124\t bus driver no:9346745321\t driver name:chandra ";
		}
		if(n==2)
		{
		


cout<<"\n1.superdelux  \t arrival time:3:00 pm\t departure time:4:00 am\t cost:500\t bus no:125\tbus driver no:8456729103\t driver name:shiva ";
		cout<<"\n2.indra \t arrival time:12:30 pm\t departure time:2:00 am \t cost:500\t bus no:126\tbus driver no:7456387569\tdriver name:kumar";
		}
	}
	  else if((strcmp(from,"hyderabad")==0)&&(strcmp(to,"banglore")==0))
	{
		if (n==1)
		{
		cout<<"\n1.garuda \t arrival time :11:00 pm \t departure time :9:00 am           cost: 800        bus no: 234          bus driver no: 7689421891 \t driver name:sandeep   ";
		cout<<"\n2.indra \t arrival time: 1:00 am    \t departure time: 11:00 am          cost: 800         bus no:235          bus driver no:9634275486 \tdriver name:kishan     ";
		}
		if(n==2)
		{
		cout<<"\n1.superdelux  \t arrival time: 2:00 pm      \t departure time:11:00 pm           cost: 500        bus no:236         bus driver no: 9864352764 \tdriver name: murali      ";
		cout<<"\n2.delux  \t arrival time:3:00 pm          \t destination time : 12:30 am            cost: 500        bus no:237         bus driver no: 8547894451\t driver name:srinivas      ";
		}
	}
	else if((strcmp(from,"hyderabad")==0)&&(strcmp(to,"chennai")==0))
	{
		if(n==1)
		{
		cout<<"\n1.garuda \t arrival time:-12:00 pm      \t destination time:- 1:00am             cost:800             bus no: 323        bus driver no: 7654893341 \tdriver name:manohar         ";
		cout<<"\2.indra \t arrival time:-1:00 am         \t destination time:- 2:30 pm            cost:800             bus no: 324      bus driver no: 8876568897 \t driver name:sandeep         ";
		}
		if(n==2)
		{
		cout<<"\n1.super delux \t arrival time:- 1:00pm       \t destination time:- 2:00am          cost: 500              bus no: 325          bus driver no: 9967547762 \t driver name:aditya       ";
		cout<<"\n2.delux \t arrival time: 3:00pm          \t destination time:-4:00 am          cost:500               bus no:326           bus driver no:9856325647 \tdriver name:surya       ";
		}
	}

}


void a::empty()
{
char r;
	for(int i=0;i<8;i++)
	{
		for(int j=0;j<4;j++)
		{
		 if(i==3&&j==2)
	seat[3][2]='r';
		else if(i==3&&j==3)
	seat[3][3]='r';
	else if(i==4&&j==0)
	seat[4][0]='r';
	else seat[i][j]='e';
		}
	}
}

void a::booking()
{
	int no,b[40];

	cout<<"enter bus number";
	cin>>no;
	if(no==123 )
	cout<<"\n1.garuda \t arrival time:3:00 am \t departure time:4:00 pm\t cost:800\tbusno:123\t bus driver no:9545423342 \t driver name:shekar";
	if(no==124)
	cout<<"\n2.indra  \t arrival time:1:30 pm  \t departure time:2:30 am\t cost:800\t bus no:124\t bus driver no:9346745321\t driver name:chandra ";
	if(no==125)




	cout<<"\n1.superdelux  \t arrival time:3:00 pm\t departure time:4:00 am\t cost:500\t bus no:125\tbus driver no:8456729103\t driver name:shiva ";
	if(no==126)
	cout<<"\n2.indra \t arrival time:12:30 pm\t departure time:2:00 am \t cost:500\t bus no:126\tbus driver no:7456387569\tdriver name:kumar";

	if(no==234)
	cout<<"\n1.garuda \t arrival time :11:00 pm \t departure time :9:00 am           cost: 800        bus no: 234          bus driver no: 7689421891 \t driver name:sandeep   ";
	


if(no==235)
	cout<<"\n2.indra \t arrival time: 1:00 am    \t departure time: 11:00 am          cost: 800         bus no:235          bus driver no:9634275486 \tdriver name:kishan     ";
	if(no==236)
	cout<<"\n1.superdelux  \t arrival time: 2:00 pm      \t departure time:11:00 pm           cost: 500        bus no:236         bus driver no: 9864352764 \tdriver name: murali      ";
	if(no==237)
	cout<<"\n2.delux  \t arrival time:3:00 pm          \t destination time : 12:30 am            cost: 500        bus no:237         bus driver no: 8547894451\t driver name:srinivas      ";
	if(no==323)
	cout<<"\n1.garuda \t arrival time:-12:00 pm      \t destination time:- 1:00am             cost:800             bus no: 323        bus driver no: 7654893341 \tdriver name:manohar         ";
	if(no==324)
	cout<<"\2.indra \t arrival time:-1:00 am         \t destination time:- 2:30 pm            cost:800             bus no: 324      bus driver no: 8876568897 \t driver name:sandeep         ";
	if(no==325)
	cout<<"\n1.super delux \t arrival time:- 1:00pm       \t destination time:- 2:00am          cost: 500              bus no: 325          bus driver no: 9967547762 \t driver name:aditya       ";
	if(no==326)
	cout<<"\n2.delux \t arrival time: 3:00pm          \t destination time:-4:00 am          cost:500               bus no:326           bus driver no:9856325647 \tdriver name:surya       ";

	cout<<"\nenter number of seats you want to book";
	cin>>s;

	cout<<"\nhere the list of reserved seats:";
	for(int i=0;i<8;i++)
	{
		for(int j=0;j<4;j++)
		{

	if(seat[i][j]=='r')

	{
	cout<<"seat no "<<(i*4)+j+1<<"is reserved";
	}
	}
	}
cout<<"kindly select remaining seats";
cout<<"\n enter the seat numbers";
i=0;
while(i<s)




 {
 cin>>b[i];
i++;
 }
}
void a::payment()
{
    int c;
char name[15],cardno[16],name1[15],mobile[10],month[15],year[5];
	if(n==1)
	{

	cout<<"\ntotal cost is" <<s*800;
	 }
	if(n==2)
	{
	cout<<"\ntotal cost is"<<s*500;
	}
	cout<<"\nenter your name";
	cin>>name1;
	cout<<"\nenter mobile number";
	cin>>mobile;
	cout<<"\nselect payment method";
	cout<<"\n 1.credit card  2.debit card";
	cin>>c;
	if(c==1||c==2)
	 {
	  cout<<"\nenter name on the card";
	cin>>name;
	  cout<<"\nenter card number";
	cin>>cardno;
	 cout<<"\nenter expiry month";
	 cin>>month;
	 cout<<"\nexpiry year";
	  cin>>year;
	 cout<<"\nsuccessfully verified";
	 }
     cout<<"\npayment summary";

	for(int i=0;i<s;i++)
     cout<<b[i];
	cout<<"seats are reserved by"<<name1;
}



int main()
{
clrscr();
a x;
x.empty();
int q;
while(q!=4)
{
 cout<<"\n 1.display \n 2.booking\n  3.exit";
 cin>>q;
switch(q)
{
case 1:x.display();
	break;
case 2:x.booking();
       x.payment();
	break;
case 3:exit(0);
}
}
return 0;
}










           




