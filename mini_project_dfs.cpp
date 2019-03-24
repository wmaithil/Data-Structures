//============================================================================
// Name        : mini_project_dfs.cpp
// Author      : maithil
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
class tripnode  //node to store project details
{
	public:
					char dest[10];
					int price;
					tripnode* next;

};
class cusinfonode      //node to collect information of customer
{
public:
			char fname[10];
			char lname[10];
			int age;
			char passportdetails[100];
			long int pno;
			cusinfonode* next=NULL;
			cusinfonode()
			{
				cusinfonode* head=NULL;
			}

};
class trips  //Available Trips
{
public:
	tripnode *ptr;
	void indtrip()      //Trips sheduled within India
	{
		cout<<"101.Mumbai @15k INR for 3D -2N"<<endl;
		cout<<"102.Manali @14k INR for 4D-3N"<<endl;
		cout<<"103.Kerala @18k INR for 7D-6N"<<endl;
		cout<<"104.Pune @12k INR for 4D-3N"<<endl;
		cout<<"NOTE:All charges are set excluding travel cost and may vary according to your destination "<<endl;
	}
	void forntrip() //foreign Trips
	{
		cout<<"201.Marrakoch,Morroco @75k INR for 3D -2N"<<endl;
		cout<<"202.Thailand @60k INR for 4D-3N"<<endl;
		cout<<"203.Hanoi,Vietnam @70k INR for 7D-6N"<<endl;
		cout<<"204.Istanbul,Turkey @72k INR for 4D-3N"<<endl;
		cout<<"205.Paris @80k INR for 4D-3N"<<endl;
		cout<<"NOTE:All charges are set per 2 customers excluding travel cost and may vary according to your destination "<<endl;
	}
};
class registration   //Registration Type
{
public:
	void newentry()   //New registration details form
	{
		int nm;
		cusinfonode* ptr=new cusinfonode();
		cout<<"Welcome To Travel circle"<<endl;
		cout<<"Enter your First Name"<<endl;
		cin>>ptr->fname;
		cout<<"Enter Last Name"<<endl;
		cin>>ptr->lname;
		cout<<"Enter your Age"<<endl;
		cin>>ptr->age;
		cout<<"Enter your passport details"<<endl;
		cin>>ptr->passportdetails;
		cout<<"Enter no of members "<<endl;
		cout<<"Enter your phone  number"<<endl;
		cin>>ptr->pno;
		cin>>nm;
		for (int i=1;i<=nm;i++)
		{
			cout<<"Enter your First Name"<<endl;
			cin>>ptr->fname;
			cout<<"Enter Last Name"<<endl;
			cin>>ptr->lname;
			cout<<"Enter your Age"<<endl;
			cin>>ptr->age;
			cout<<"Enter your passport details"<<endl;
			cin>>ptr->passportdetails;
			cout<<"Enter your phone  number"<<endl;
			cin>>ptr->pno;
		}
	}

		void mumbai()    //addition of nodes to mumbai trip
		{
		cusinfonode ptr;
		ptr=newentry();
		cusinfonode* temp;
		cusinfonode* head;
		if(head==NULL)
		{
			head=ptr;
		}
		else{
			temp=head;
			while(temp->next!=NULL)
					temp=temp->next;
			temp->next=ptr;
		}
		cout<<"registration successful.We will inform you with all the updates shortly"<<endl;
		}

		void manali()    //addition of nodes to manali trip
		{
		cusinfonode* ptr;
		ptr=newentry();
		cusinfonode* temp;
		cusinfonode* head;
		if(head==NULL)
		{
			head=ptr;
		}
		else{
			temp=head;
			while(temp->next!=NULL)
					temp=temp->next;
			temp->next=ptr;
		}
		cout<<"registration successful.We will inform you with all the updates shortly"<<endl;
		}

		void kerala()    //addition of nodes to kerala trip
		{
			cusinfonode* ptr;
					newentry();
					cusinfonode* temp;
					cusinfonode* head;
		if(head==NULL)
		{
			head=ptr;
		}
		else{
			temp=head;
			while(temp->next!=NULL)
					temp=temp->next;
			temp->next=ptr;
		}
		cout<<"registration successful.We will inform you with all the updates shortly"<<endl;
		}

		void pune()    //addition of nodes to pune trip
		{
			cusinfonode* ptr;
			ptr=newentry();
			cusinfonode* temp;
			cusinfonode* head;
		if(head==NULL)
		{
			head=ptr;
		}
		else{
			temp=head;
			while(temp->next!=NULL)
					temp=temp->next;
			temp->next=ptr;
		}
		cout<<"registration successful.We will inform you with all the updates shortly"<<endl;
		}

		void morroco()    //addition of nodes to morocco trip
		{
			cusinfonode* ptr;
					ptr=newentry();
					cusinfonode* temp;
					cusinfonode* head;;
		if(head==NULL)
		{
			head=ptr;
		}
		else{
			temp=head;
			while(temp->next!=NULL)
					temp=temp->next;
			temp->next=ptr;
		}
		cout<<"registration successful.We will inform you with all the updates shortly"<<endl;
		}

		void thailand()    //addition of nodes to thailand trip
		{
			cusinfonode* ptr;
					ptr=newentry();
					cusinfonode* temp;
					cusinfonode* head;
		if(head==NULL)
		{
			head=ptr;
		}
		else{
			temp=head;
			while(temp->next!=NULL)
					temp=temp->next;
			temp->next=ptr;
		}cout<<"registration successful.We will inform you with all the updates shortly"<<endl;
		}

		void vietnam()    //addition of nodes to vietnam trip
		{
			cusinfonode* ptr;
					ptr=newentry();
					cusinfonode* temp;
					cusinfonode* head;
		if(head==NULL)
		{
			head=ptr;
		}
		else{
			temp=head;
			while(temp->next!=NULL)
					temp=temp->next;
			temp->next=ptr;
		}
		cout<<"registration successful.We will inform you with all the updates shortly"<<endl;
		}

		void turkey()    //addition of nodes to turkey trip
		{
			cusinfonode* ptr;
					ptr=newentry();
					cusinfonode* temp;
					cusinfonode* head;
		if(head==NULL)
		{
			head=ptr;
		}
		else
		{
			temp=head;
			while(temp->next!=NULL)
					temp=temp->next;
			temp->next=ptr;
		}
		cout<<"registration successful.We will inform you with all the updates shortly"<<endl;
		}

		void paris()    //addition of nodes to paris  trip
		{
			cusinfonode* ptr;
					ptr=newentry();
					cusinfonode* temp;
					cusinfonode* head;
		if(head==NULL)
		{
			head=ptr;
		}
		else
		{
			temp=head;
			while(temp->next!=NULL)
					temp=temp->next;
			temp->next=ptr;
		}
		cout<<"registration successful.We will inform you with all the updates shortly"<<endl;
		}
};

int main() {
	int ip1,ip2;
	trips t;
	registration r;
   cout<<"Select the tour type"<<endl;
   cout<<"1.Domestic trips   2.International trips"<<endl;
   cin>>ip1;
   if(ip1==1)
   {
	   t.indtrip();
	   cout<<"Enter the code for desired location "<<endl;
	   cin>>ip2;
	   if (ip2==101)
	   {
		   r.mumbai();
	   }
	   else if(ip2==102)
	   {
		   r.manali();
	   }
	   else if(ip2==103)
	 	   {
	 		   r.kerala();
	 	   }
	   else if(ip2==104)
	 	   {
	 		   r.pune();
	 	   }
   }
   else if(ip1==2)
   {
	   t.forntrip();
	   cout<<"Enter the code for desired location "<<endl;
	   cin>>ip2;
	   if (ip2==201)
	 	   {
	 		   r.morroco();
	 	   }
	 	   else if(ip2==202)
	 	   {
	 		   r.thailand();
	 	   }
	 	   else if(ip2==203)
	 	 	   {
	 	 		   r.vietnam();
	 	 	   }
	 	   else if(ip2==204)
	 	 	   {
	 	 		   r.turkey();
	 	 	   }
	 	  else if(ip2==202)
	 		 	   {
	 		 		   r.paris();
	 		 	   }
   }


	return 0;
}
