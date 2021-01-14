#include<iostream>		//header files
#include<conio.h>	
#include<stdlib.h>		//using exit(0) like functions
#include<stdio.h>		//using string in gets()
#include<fstream>		//using file handling
using namespace std;

void instruction();
void design();
void about();

void preface_bck()
{
		int bck;	
		cout<<"\n\n\n\tHere You can Select Your Favourite Background Color for this Program";
		cout<<"\n\t********************************************************************";
	
		cout<<"\n\n\tCode\t\tColour";
		cout<<"\n\t****\t\t******";
		cout<<"\n\t1-   \t\tGreen";
		cout<<"\n\t2-   \t\tBlue";
		cout<<"\n\t3-   \t\tAqua";
		cout<<"\n\t4-   \t\tRed";
		cout<<"\n\t5-   \t\tPurple";
		cout<<"\n\t6-   \t\tYellow";
		cout<<"\n\nEnter option: ";
		cin>>bck;	
		if(bck==1)
		system("color 2F");
		else if(bck==2)
		system("color 1F");
		else if(bck==3)
		system("color 3F");
		else if(bck==4)
		system("color 4F");
		else if(bck==5)
		system("color 5F");
		else if(bck==6)
		system("color 6F");
}

void preface_font()
{
	int fon;
	
	cout<<"\n\n\n\tHere You can Select Your Favourite Font Color for this Program";
	cout<<"\n\t**************************************************************";
	
	cout<<"\n\n\tCode\t\tColour";
	cout<<"\n\t****\t\t******";
	cout<<"\n\t1-   \t\tGreen";
	cout<<"\n\t2-   \t\tBlue";
	cout<<"\n\t3-   \t\tAqua";
	cout<<"\n\t4-   \t\tRed";
	cout<<"\n\t5-   \t\tPurple";
	cout<<"\n\t6-   \t\tYellow";
	cout<<"\n\t7-   \t\tWhite";
	
	cout<<"\n\nEnter option: ";
	cin>>fon;
	
	if(fon==1)
	system("color A");
	else if(fon==2)
	system("color 9");
	else if(fon==3)
	system("color B");
	else if(fon==4)
	system("color C");
	else if(fon==5)
	system("color D");
	else if(fon==6)
	system("color E");
	else if(fon==7)
	system("color F");
}

void about()
{
	design();
	cout<<"\n\n\n\n\t# This is an Institution Management Project";
	cout<<"\n\n\n\t# This Includes The Records Of \n\n\t\t* Students\n\t\t* Staff\n\t\t* Library Books\n\t\t* Courses";
	cout<<"\n\n\n\t# This Project Uses Data File Handling\n\n\t\t* In Which The Data Is Saved To a File";
	cout<<"\n\n\n\t# This Project was Coded With C++ Programming";
	cout<<"\n\n\n\t\t* Using Object Oriented Programming";
	cout<<"\n\n\n\t\t\t\t\t*********************";
	cout<<"\n\t\t\t\t\t> Made By: ";
	cout<<"\n\t\t\t\t\t> Sachin Gupta";
	cout<<"\n\t\t\t\t\t> 12th C (Commerce)";
	cout<<"\n\t\t\t\t\t*********************";
	
	cout<<"\n\tPress any Key To Jump On The Main Menu...";
}

void instruction()
{
	system("cls");
	cout<<"\n\n\n\t\t\tINSTRUCTIONS BEFORE PROGRAM\n";
	cout<<"\t\t\t************ ****** *******"; 
	cout<<"\n\n\n\t\t# Please Feed The Data Before Getting Displayed...";
	
	cout<<"\n\n\n\n\t\t# Press Any Key To Begin with Main Menu...";
	getch();
}

void design()	//function definition
{
	system("cls");
	cout<<"\n\t\t\t\t _________ __________";		//menu format for Institute
	cout<<"\n\t\t\t\t|Institute Management|";
 	cout<<"\n\t\t\t\t ********* **********";
	
}

class student		//class student definition
{
	int op;
	public:
		int roll;
		char name[15];
		char clas[15];
		char father[20];
		char dob[20];
		char mother[20];
		char phone[15];
	
		void stu_input();
		void stu_print();
};

void student::stu_input()
{
	design();
		
		cout<<"\n\n\t\t\t\tEnter The Details(one by one)";
		cout<<"\n\t\t\t\t````` ``` ```````````````````";
		
		cin.get();
		cout<<"\nRoll: ";
		cin>>roll;
		cin.get();
		cout<<"\n\nName: ";
		gets(name);
		cout<<"\n\nClass: ";
		gets(clas);
		cout<<"\n\nDate Of Birth: ";
		gets(dob);
		cout<<"\n\nFather`s Name: ";
		gets(father);
		cout<<"\n\nMother`s Name: ";
		gets(mother);
		cout<<"\n\nPhone: ";
		gets(phone);
		
		system("cls");
		cout<<"\n\n\n\n\n\t\t\t\t\t\tThank You...";
		getch();
}

void student::stu_print()
{
design();
	cout<<"\n\n\t\t\t\t\tThe Records are\n";
	cout<<"\t\t\t\t\t*** ******* ***\n";
	
	cout<<"\n\tRoll: "<<roll;
	cout<<"\n\tName: "<<name;
	cout<<"\n\tClass: "<<clas;
	cout<<"\n\tDate Of Birth: "<<dob;
	cout<<"\n\tFather`s Name: "<<father;
	cout<<"\n\tMother`s Name: "<<mother;
	cout<<"\n\tPhone: "<<phone;
}

class staff		//class staff definition
{
	int op;
		
	public:
		int id;
		char name[15];
 		char sub[15];
 		char qual[50];
		char father[20];
		char dob[20];
		char mother[20];
		char phone[15];
			
		void stf_input();
		void stf_print();
};

void staff::stf_input()
{
	design();
		system("cls");
		cout<<"\n\t\t\t\t\t ____ ___ _____";
		cout<<"\n\t\t\t\t\t|FILL THE FORM|";
		cout<<"\n\t\t\t\t\t **** *** *****";
		
		cout<<"\n\n\t\t\t\tEnter The Details(one by one)";
		cout<<"\n\t\t\t\t````` ``` ```````````````````";
		
		cin.get();
		cout<<"\nID code: ";
		cin>>id;
		cin.get();
		cout<<"\n\nName: ";
		gets(name);
		cout<<"\n\nSubject: ";
		gets(sub);
		cout<<"\n\nQualifications: ";
		gets(qual);
		cout<<"\n\nDate Of Birth: ";
		gets(dob);
		cout<<"\n\nFather`s Name: ";
		gets(father);
		cout<<"\n\nMother`s Name: ";
		gets(mother);
		cout<<"\n\nPhone: ";
		gets(phone);
		
		system("cls");
		cout<<"\n\n\n\n\n\t\t\t\t\t\tThank You...";
		getch();
}

void staff::stf_print()
{
	design();
	cout<<"\n\n\t\t\t\tThe All Staff Records are\n";
	cout<<"\t\t\t\t*** *** ***** ******* ***";
	
	cout<<"\n\tID Code: "<<id;
	cout<<"\n\tName: "<<name;
	cout<<"\n\tSubject: "<<sub;
	cout<<"\n\tQualifications: "<<qual;
	cout<<"\n\tDate Of Birth: "<<dob;
	cout<<"\n\tFather`s Name: "<<father;
	cout<<"\n\tMother`s Name: "<<mother;
	cout<<"\n\tPhone: "<<phone;	
}

class course		//Class Course Definition
{
	public:
		
		int c_code;
		char c_name[30];
		int year;
		int fees_an;
		int fees_total;
		char facility[30];
		char begins[30];	
		
		void crs_input();
		void crs_print();
};

void course::crs_input()
{
	cout<<"\n\t\t\t\t\t ______ __________";		//menu format for staff
	cout<<"\n\t\t\t\t\t|School Management|";
	cout<<"\n\t\t\t\t\t ****** **********";
	
	cout<<"\n\n\t\t\tFill The Details: ";
	cout<<"\n\t\t\t**** *** ******** ";
	
	cout<<"\n\nCourse Code: ";
	cin>>c_code;
	cin.get();
	cout<<"\n\nCourse Name: ";
	gets(c_name);
	cout<<"\n\nYears: ";
	cin>>year;
	cout<<"\n\nAnnual Fees: ";
	cin>>fees_an;
	fees_total=year*fees_an;
	cout<<"\n\nTotal fees: "<<fees_total;
	
	cin.get();
	cout<<"\n\nFacility(if any): ";
	gets(facility);
	
	cout<<"\n\nIts Beginning: ";
	gets(begins);
	
	cout<<"\n\nCOURSE DATA SAVED...";
	getch();
}

void course::crs_print()
{
	cout<<"\n\n\nCourse Code: "<<c_code;
	cout<<"\nCourse Name: "<<c_name;
	cout<<"\nNo. of Years: "<<year;
	cout<<"\nAnnual fees: "<<fees_an;
	cout<<"\nTotal Fees: "<<fees_total;
	cout<<"\nFacility: "<<facility;
	cout<<"\nBeginning: "<<begins;
		
}

class lib		//class Library definition
{
	public:
	char b_name[30];
	char b_auth[30];
	char b_price[10];
	int bid;
	void lib_input();
	void lib_print();
		
};

void lib::lib_input()
{
design();
	cout<<"\n\n\t\t\t\tFill the Details of Books";
	cout<<"\n\t\t\t\t**** *** ******* ** *****";
		
	cout<<"\n\n\tBook ID: ";
	cin>>bid;
	cout<<"\n\n\tBook Name: ";
	cin.get();
	gets(b_name);
	cout<<"\n\n\tBook Author: ";
	gets(b_auth);
	cout<<"\n\n\tBook Price: ";
	gets(b_price);
	
	cout<<"\n\n\t\t\t\tData Saved";
	cout<<"\n\n\t\t\t\tThank you";
	getch();
}
	
void lib::lib_print()
{
design();
	
	cout<<"\n\n\t\t\t\tBook Details are:";
	cout<<"\n\t\t\t\t**** ******* ****";
	
	cout<<"\n\n\tBook ID: "<<bid;
	cout<<"\n\n\tBook Name: "<<b_name;
	cout<<"\n\n\tBook Author: "<<b_auth;
	cout<<"\n\n\tBook Price: "<<b_price;
	cout<<"\n";
}

int main()			//main function
{
		int op;
		int fnd;	//find
		
		student sd;
		staff t;
		course c;
		lib l;
				
		while(1)	//main while loop
		{
			instruction();
			start:
			design();
			cout<<"\n\n\t\t\t      SELECT FROM THE OPTION\n";
			cout<<"\t\t\t      ****** **** *** ******";
			cout<<"\n\n\t1-ACCESS STUDENT\n\n\t2-ACCESS TEACHER\n\n\t3-COURSES\n\n\t4-LIBRARY\n\n\t5-ABOUT PROGRAM\n\n\t6-CHANGE PREFERENCE \n\n\t7-EXIT\n\n\n   Choose the Option: ";
			cin>>op;
			
			switch(op)
			{
				case 1: //case 1 starts student
					{			
					while(1)
					{
						system("cls");
						design();
						cout<<"\n\n\t\t\t\tStudent`s Record";
						cout<<"\n\t\t\t\t********* ******";
						cout<<"\n\nChoose From Option: ";
						cout<<"\n`````` ```` ```````";
						cout<<"\n\n\t1-New Addmission(Feed the record)\n\n\t2-Show All Student Details\n\n\t3-Search for Student\n\n\t4-Delete Student`s Record";
						cout<<"\n\n\t5-Back to Main Menu";
						cout<<"\n\n\nEnter the Option: ";
						cout<<"\n````` ``` ```````   ";
						cin>>op;
				
						if(op==1)
						{
							design();
						
							ofstream wf("stu_data.txt",ios::app);
							sd.stu_input();
							wf.write((char*)&sd,sizeof(sd));
							wf.close();
						}
			
						else if(op==2)
						{
							design();
							int t=0;
							ifstream rf("stu_data.txt",ios::binary);
							while(!rf.read((char*)&sd,sizeof(sd)).eof())
							{
								if(rf)
								{
									sd.stu_print();
								}
								else
								{
									getch();
									goto start;
								}
								t++;
								getch();
							}
							
							if(t<=0)
							cout<<"\n\n\n\t\t\tno DATA in file...";
							getch();
						rf.close();
						}
				
						else if(op==3)
						{	
							design();
					
							int temp_roll;		//roll for searching
					
							cout<<"\nenter the Roll no. to be searched: ";
							cin>>temp_roll;
					
							ifstream rf("stu_data.txt",ios::binary);
							while(!rf.eof())
							{
								rf.read((char*) &sd,sizeof(sd));
								if(sd.roll==temp_roll)
								cout<<"\n\nRoll: "<<sd.roll<<"\nName is: "<<sd.name<<"\nDate Of Birth is: "<<sd.dob<<"\nFather`s Name: "<<sd.father<<"\nMother`s Name: "<<sd.mother<<"\nPhone is: "<<sd.phone;
								else
								fnd=0;
							}
			
							if(fnd==0)
							cout<<"\nRoll Not Found !!!";
							getch();
							rf.close();
						}
				
						else if(op==4)
						{
							design();
					
							int temp;		//roll for Deletion
							cout<<"\nenter the Roll you want to delete: ";
							cin>>temp;
					
							ifstream rf("stu_data.txt",ios::binary);
							ofstream wf("temp.txt",ios::app);
					
						while(!rf.eof())
						{
							rf.read((char*)&sd,sizeof(sd));
						
							if(sd.roll==temp)
							sd.stu_print();
							else
							wf.write((char*)&sd,sizeof(sd));
						}
						wf.close();
						rf.close();
					
						cout<<"\n\nDeletion Done !";
					
						remove("stu_data.txt");
						rename("temp.txt","stu_data.txt");
						getch();
					}
				
					else if(op==5)
					goto start;
					}
						
				break;		//while loop closed
					
				}		//case 1 breaked
				
				case 2: //case 2 starts staff
					{			
					while(1)
					{
						system("cls");
						design();
						cout<<"\n\n\t\t\t\tTEACHER`s Record";
						cout<<"\n\t\t\t\t********* ******";
						cout<<"\n\nChoose From Option: ";
						cout<<"\n`````` ```` ```````";
						cout<<"\n\n\t1-New Staff(Feed the record)\n\n\t2-Show All Staff Details\n\n\t3-Search for Staff Record\n\n\t4-Delete Staff Record";
						cout<<"\n\n\t5-Back to Main Menu";
						cout<<"\n\n\nEnter the Option: ";
						cout<<"\n````` ``` ```````   ";
						cin>>op;
				
						if(op==1)
						{
							design();
						
							ofstream wf("staff.txt",ios::app);
							t.stf_input();
							wf.write((char*)&t,sizeof(t));
							wf.close();
						}
			
						else if(op==2)
						{
							design();
							int tmp=0;
							ifstream rf("staff.txt",ios::binary);
							while(!rf.read((char*)&t,sizeof(t)).eof())
							{
								if(rf)
								{
									t.stf_print();
								}
								else
								{
									getch();
									goto start;
								}
								tmp++;
								getch();
							}
							
							if(tmp<=0)
							cout<<"\n\n\n\t\t\tno DATA in file...";
							getch();
						rf.close();
						}
				
						else if(op==3)
						{	
							design();
					
							int temp_id;		//roll for searching
					
							cout<<"\nenter the Staff ID to be searched: ";
							cin>>temp_id;
					
							ifstream rf("staff.txt",ios::binary);
							while(!rf.eof())
							{
								rf.read((char*)&t,sizeof(t));
								if(t.id==temp_id)
								cout<<"\n\nCode: "<<t.id<<"\nName is: "<<t.name<<"\nDate Of Birth is: "<<t.dob<<"\nFather`s Name: "<<t.father<<"\nMother`s Name: "<<t.mother<<"\nPhone is: "<<t.phone;
								else
								fnd=0;
							}
			
							if(fnd==0)
							cout<<"\nStaff ID Not Found !!!";
							getch();
							rf.close();
						}
				
						else if(op==4)
						{
							design();
					
							int temp;		//roll for Deletion
							cout<<"\nenter the ID you want to delete: ";
							cin>>temp;
					
							ifstream rf("staff.txt",ios::binary);
							ofstream wf("temp.txt",ios::app);
					
						while(!rf.eof())
						{
							rf.read((char*)&t,sizeof(t));
						
							if(t.id==temp)
							t.stf_print();
							else
							wf.write((char*)&t,sizeof(t));
						}
						wf.close();
						rf.close();
					
						cout<<"\n\nDeletion Done !";
					
						remove("staff.txt");
						rename("temp.txt","staff.txt");
						getch();
					}
				
					else if(op==5)
					goto start;
					}
						
				break;		//while loop closed
					
				}		//case 2 breaked
					
				case 3: //case 3 starts COURSES
					{			
					while(1)
					{
						system("cls");
						design();
						cout<<"\n\n\t\t\t\tCOURSE`s Record";
						cout<<"\n\t\t\t\t******** ******";
						cout<<"\n\nChoose From Option: ";
						cout<<"\n`````` ```` ```````";
						cout<<"\n\n\t1-New COURSE(Feed the record)\n\n\t2-Show All COURSE Details\n\n\t3-Search for COURSE\n\n\t4-Delete COURSE`s Record";
						cout<<"\n\n\t5-Back to Main Menu";
						cout<<"\n\n\nEnter the Option: ";
						cout<<"\n````` ``` ```````   ";
						cin>>op;
				
						if(op==1)
						{
							design();
						
							ofstream wf("course.txt",ios::app);
							c.crs_input();
							wf.write((char*)&c,sizeof(c));
							wf.close();
						}
			
						else if(op==2)
						{
							design();
							int t=0;
							ifstream rf("course.txt",ios::binary);
							while(!rf.read((char*)&c,sizeof(c)).eof())
							{
								if(rf)
								{
									c.crs_print();
								}
								else
								{
									getch();
									goto start;
								}
								t++;
								getch();
							}
							
							if(t<=0)
							cout<<"\n\n\n\t\t\tno DATA in file...";
							getch();
						rf.close();
						}
				
						else if(op==3)
						{	
							design();
					
							int temp_cc;		//COURSE code for searching
					
							cout<<"\nenter the Course code to be searched: ";
							cin>>temp_cc;
					
							ifstream rf("course.txt",ios::binary);
							while(!rf.eof())
							{
								rf.read((char*) &sd,sizeof(sd));
								if(c.c_code==temp_cc)
								cout<<"\n\nCOURSE code: "<<c.c_code<<"\nName is: "<<c.c_name<<"\nAnnual fees is: "<<c.fees_an<<"\nTotal Fees is: "<<c.fees_total<<"\nFacility Provided: "<<c.facility<<"\nYear is: "<<c.year;
								else
								fnd=0;
							}
			
							if(fnd==0)
							cout<<"\nCourse Data Not Found !!!";
							getch();
							rf.close();
						}
				
						else if(op==4)
						{
							design();
					
							int temp;		//roll for Deletion
							cout<<"\nenter the course code you want to delete: ";
							cin>>temp;
					
							ifstream rf("course.txt",ios::binary);
							ofstream wf("temp.txt",ios::app);
					
						while(!rf.eof())
						{
							rf.read((char*)&c,sizeof(c));
						
							if(c.c_code==temp)
							c.crs_print();
							else
							wf.write((char*)&c,sizeof(c));
						}
						wf.close();
						rf.close();
					
						cout<<"\n\nDeletion Done !";
					
						remove("course.txt");
						rename("temp.txt","course.txt");
						getch();
					}
				
					else if(op==5)
					goto start;
					}
						
				break;		//while loop closed
					
				}		//case 1 breaked
					
				case 4: //case 4 starts LIBRARY
					{			
					while(1)
					{
						system("cls");
						design();
						cout<<"\n\n\t\t\t\tLIBRARY`s  BOOK Record";
						cout<<"\n\t\t\t\t********* **** ******";
						cout<<"\n\nChoose From Option: ";
						cout<<"\n`````` ```` ```````";
						cout<<"\n\n\t1-New BOOK(Feed the record)\n\n\t2-Show All BOOK Details\n\n\t3-Search for BOOK details\n\n\t4-Delete BOOK Record";
						cout<<"\n\n\t5-Back to Main Menu";
						cout<<"\n\n\nEnter the Option: ";
						cout<<"\n````` ``` ```````   ";
						cin>>op;
				
						if(op==1)
						{
							design();
						
							ofstream wf("library.txt",ios::app);
							l.lib_input();
							wf.write((char*)&l,sizeof(l));
							wf.close();
						}
			
						else if(op==2)
						{
							design();
							int t=0;
							ifstream rf("library.txt",ios::binary);
							while(!rf.read((char*)&l,sizeof(l)).eof())
							{
								if(rf)
								{
									l.lib_print();
								}
								else
								{
									getch();
									goto start;
								}
								t++;
							getch();
							}
							
							if(t<=0)
							cout<<"\n\n\n\t\t\tno DATA in file...";
							getch();
						rf.close();
						}
				
						else if(op==3)
						{	
							design();
					
							int temp_b;		//Books code for searching
					
							cout<<"\nenter the Book ID to be searched: ";
							cin>>temp_b;
					
							ifstream rf("library.txt",ios::binary);
							while(!rf.eof())
							{
								rf.read((char*)&l,sizeof(l));
								if(l.bid==temp_b)
								cout<<"\n\nBook code: "<<l.bid<<"\nBook Name: "<<l.b_name<<"\nBook Author: "<<l.b_auth<<"\nBook Price: "<<l.b_price;
								else
								fnd=0;
							}
			
							if(fnd==0)
							cout<<"\n Book ID Not Found !!!";
							getch();
							rf.close();
						}
				
						else if(op==4)
						{
							design();
					
							int temp;		//roll for Deletion
							cout<<"\nenter the Book ID you want to delete: ";
							cin>>temp;
					
							ifstream rf("library.txt",ios::binary);
							ofstream wf("temp.txt",ios::app);
					
						while(!rf.eof())
						{
							rf.read((char*)&l,sizeof(l));
						
							if(l.bid==temp)
							l.lib_print();
							else
							wf.write((char*)&l,sizeof(l));
						}
						wf.close();
						rf.close();
					
						cout<<"\n\nDeletion Done !";
					
						remove("library.txt");
						rename("temp.txt","library.txt");
						getch();
					}
				
					else if(op==5)
					goto start;
					}
						
				break;		//while loop closed
					
				}		//case 1 breaked
					
				case 5:
					{
						about();
						getch();
						goto start;
						break;
					}
					
				case 6:
					{
						design();
	
						cout<<"\n\n\t\t1-Background Colour";
						cout<<"\n\t\t2-Font colour";
						cout<<"\n\n\tEnter the option: ";
						cin>>op;
						
						if(op==1)
						{
							preface_bck();
							getch();
							goto start;
						}
						else if(op==2)
						{
							preface_font();
							getch();
							goto start;
						}
					}
					
				case 7: // ending display
					{
						system("cls");
						cout<<"\n\n\n\n\n\t\t\t\tTHANK YOU... ";
						cout<<"\n\t\t\t\t***** ****** ";
						cout<<"\n\n\n\t\t\tFOR HAVING A TIME ON THIS PROGRAM ";
						cout<<"\n\t\t\t*** ****** * **** ** **** *******";
						cout<<"\n\n\n\t\t\t\tHAVE A NICE DAY";
						cout<<"\n\t\t\t\t**** * **** ***\n\n\n\n\n\n\n";
						getch();
						exit(0);
					}
							
				default:	//invalid option
					{
						design();
						cout<<"\n\n\n\n\n\t\t\t  Entered Option is invalid ";
						cout<<"\n\n\n\t\t\tPlease Go to Main Menu and Try Again";
						cout<<"\n\n\n\n\n\n\n\n\n Press Any Key to Go to main menu...";
						getch();
						goto start;
					}
}
}
return(0);		
}
