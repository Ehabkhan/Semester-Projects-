#include <iostream>
#include <string>
#include <fstream>
#include <windows.h>
using namespace std;

void Heading();
void Diseases();
void Days();
void Time();
void Detail();
int main();

void Heading()
{
	cout << "\t\t\t\t----------------------------------------------------------" << endl;
	cout << "\t\t\t\t|                                                        |" << endl;
	cout << "\t\t\t\t|               Doctor Appointment System                |" << endl;
	cout << "\t\t\t\t|                                                        |" << endl;
	cout << "\t\t\t\t----------------------------------------------------------" << endl;
	cout << endl << endl << endl;
}

void Time()
{
	system("cls");
	Heading();
	
	string hour[9]={"Go Back\n","10:00","11:00","12:00","13:00","14:00","15:00","16:00","17:00"};
	for(int i=0;i<=8;i++)
	{
		cout << i << ") " << hour[i] << endl;  //printing time section on screen 
	}
	
	ofstream TimeFile; 
	TimeFile.open("Appointments.txt", ios::app);   // declaring & opening file for writing in it
	cout << endl;
	int op;
	cout << "Select Time: ";
	cin >> op;
	cout << endl;
	
	while(true)
	{
		switch (op)
		{
			case 0:
				Days();  // for Going Back to Days section
			break;
			
			case 1:	
			Detail();						// it will ask Name, Age at the time of booking appointment
			TimeFile << " at " << hour[1];
			TimeFile.close();
			cout << "\n\t Appointment Booked Successfully" << endl << endl;
			system("pause");
			main();							// going back to main menu after booking
		break;
		
		case 2:
			Detail();
			TimeFile << " at " << hour[2];
			TimeFile.close();
			cout << "\n\t Appointment Booked Successfully" << endl << endl;
			system("pause");
			main();	
		break;
		
		case 3:
			Detail();
			TimeFile << " at " << hour[3];
			TimeFile.close();
			cout << "\n\t Appointment Booked Successfully" << endl << endl;
			system("pause");
			main();	
		break;
		
		case 4:
			Detail();
			TimeFile << " at " << hour[4];
			TimeFile.close();
			cout << "\n\t Appointment Booked Successfully" << endl << endl;
			system("pause");
			main();	
		break;
		
		case 5:
			Detail();
			TimeFile << " at " << hour[5];
			TimeFile.close();
			cout << "\n\t Appointment Booked Successfully" << endl << endl;
			system("pause");
			main();	
		break;
		
		case 6:
			Detail();
			TimeFile << " at " << hour[6];
			TimeFile.close();
			cout << "\n\t Appointment Booked Successfully" << endl << endl;
			system("pause");
			main();	
		break;
		
		case 7:
			Detail();
			TimeFile << " at " << hour[7];
			TimeFile.close();
			cout << "\n\t Appointment Booked Successfully" << endl << endl;
			system("pause");
			main();	
		break;
		
		case 8:
			Detail();
			TimeFile << " at " << hour[8];
			TimeFile.close();
			cout << "\n\t Appointment Booked Successfully" << endl << endl;
			system("pause");
			main();	
		break;
		
		default:
			cout << "Please Select Correct Option: ";
			cin >> op;
			cout << endl;
		break;
		}
	}
}

void Days()
{
	system("cls");
	Heading();
	
	string day[7]={"Go Back\n","Monday","Tuesday","Wednesday","Thursday","Saturday","Sunday"};
	for(int i=0;i<=6;i++)
	{
		cout << i << ") " << day[i] << endl;
	}
	
	ofstream DayFile;
	DayFile.open("Appointments.txt", ios::app);
	cout << endl;
	int op;
	cout << "Select Day: ";
	cin >> op;
	cout << endl;
	
	while(true)
	{
		switch (op)
		{
			case 0:
				Diseases();  // for Going Back
			break;
		
			case 1:
				DayFile << "is Booked On " << day[1];
				DayFile.close();
				Time(); 					// for going to time section after day selection
			break;
		
			case 2:
				DayFile << "is Booked On " << day[2];
				DayFile.close();
				Time();
			break;
		
			case 3:
				DayFile << "is Booked On " << day[3];
				DayFile.close();
				Time();
			break;
		
			case 4:
				DayFile << "is Booked On " << day[4];
				DayFile.close();
				Time();
			break;
		
			case 5:
				DayFile << "is Booked On " << day[5];
				DayFile.close();
				Time();
			break;
		
			case 6:
				DayFile << "is Booked On " << day[6];
				DayFile.close();
				Time();
			break;
		
			default:
				cout << "Please Select Correct Option: ";
				cin >> op;
				cout << endl;
			break;
		}
	}
}

void Detail() // for asking patient's Name, Age, Address
{
	string name;
	int age;
	string address;
	string* s=&name;
	int* ag=&age;
	string* add=&address;
	
	cout << "Enter Your Name: ";
	cin.ignore();
	getline(cin, *s);
	cout << "Enter Your Address: ";
	cin.ignore();
	getline(cin, *add);
	cout << "Enter Your Age: ";
	cin >> *ag;
}

void Diseases()
{
	system("cls");
	Heading();
	
	string disease[6]={"Go Back\n","Eye Specialist","ENT Specialist","Skin Specialist","Dentist","General"};
	for(int i=0;i<=5;i++)
	{
		cout << i << ") " << disease[i] << endl;
	}
	
	ofstream DisFile;
	DisFile.open("Appointments.txt", ios::app);
	cout << endl;
	int op;
	cout << "Select Disease: ";			
	cin >> op;
	cout << endl;

	while(true)
	{	
		switch (op)
		{
			case 1: 					// it will show list of eye specialists
				system("cls");
				Heading();
				
				DisFile << "\nAppointment With " << disease[1];
				cout << "0) Go Back" << endl << endl;
				cout << "1) Dr. Haris Shehzad" << endl;
				cout << "2) Dr. Sohail Sarwar" << endl;
				cout << "3) Dr. Maryam Ahmad" << endl << endl;
				
				cout << "Select Doctor: ";
				cin >> op;
				cout << endl;
			 
				switch (op)
				{
					case 0:
						Diseases();
					break;
					
					case 1: 							// selecting specific doctor of your own choice
						DisFile << " Dr. Haris Shehzad ";
						DisFile.close();
						Days();
					break;
				
					case 2:
						DisFile << " Dr. Sohail Sarwar ";
						DisFile.close();
						Days();
					break;
				
					case 3:
						DisFile << " Dr. Maryan Ahmad ";
						DisFile.close();
						Days();
					break;
					
					default:
						cout << "Please Select Correct Option: ";
						cin >> op;
						cout << endl;
					break;
				}
			break;
			
			case 2:							// list of ENT specialists
				system("cls");
				Heading();
				
				DisFile << "\nAppointment With " << disease[2];
				cout << "0) Go Back" << endl << endl;
				cout << "1) Dr. Muhammad Riaz Chaudhary" << endl;
				cout << "2) Dr. Junaid Shehzad" << endl;
				cout << "3) Dr. Munazza Saeed" << endl << endl;
							
				cout << "Select Doctor: ";
				cin >> op;
				cout << endl;
			 
				switch (op)
				{
					case 1:
						DisFile << " Dr. Muhammad Riaz Chaudhary ";
						DisFile.close();
						Days();
					break;
				
					case 2:
						DisFile << " Dr. Junaid Shehzad ";
						DisFile.close();
						Days();
					break;
				
					case 3:
						DisFile << " Dr. Munazza Saeed ";
						DisFile.close();
						Days();
					break;
					
					case 0:
						Diseases();  // Go Back
					break;
					
					default:
						cout << "Please Select Correct Option: ";
						cin >> op;
						cout << endl;
					break;
				}
			break;
			
			case 3:						// list of Skin Specialists
				system("cls");
				Heading();
				
				DisFile << "\nAppointment With " << disease[3];
				cout << "0) Go Back" << endl << endl;
				cout << "1) Dr. Ghulam Mujtaba" << endl;
				cout << "2) Dr. Sana Yousaf" << endl;
				cout << "3) Dr. Summaya Jamal" << endl << endl;
			
				cout << "Select Doctor: ";
				cin >> op;
				cout << endl;
			 
				switch (op)
				{
					case 1:
						DisFile << " Dr. Ghulam Mujtaba ";
						DisFile.close();
						Days();
					break;
				
					case 2:
						DisFile << " Dr. Sana Yousaf ";
						DisFile.close();
						Days();
					break;
				
					case 3:
						DisFile << " Dr. Summaya Jamal ";
						DisFile.close();
						Days();
					break;
					
					case 0:
						Diseases();  // Go Back
					break;
					
					default:
						cout << "Please Select Correct Option: ";
						cin >> op;
						cout << endl;
					break;
				}
			break;
		
			case 4:
				system("cls");
				Heading();
				
				DisFile << "\nAppointment With " << disease[4];
				cout << "0) Go Back" << endl << endl;
				cout << "1) Dr. Saqib Kaleem" << endl;
				cout << "2) Dr. Syed Mannan Azhar" << endl;
				cout << "3) Dr. Ayesha Khan" << endl << endl;
				
				cout << "Select Doctor: ";
				cin >> op;
			
				cout << endl;
			 
				switch (op)
				{
					case 1:
						DisFile << " Dr. Saqib Kaleem ";
						DisFile.close();
						Days();
					break;
				
					case 2:
						DisFile << " Dr. Syed Mannan Azhar ";
						DisFile.close();
						Days();
					break;
				
					case 3:
						DisFile << " Dr. Ayesha Khan ";
						DisFile.close();
						Days();
					break;
				
					case 0:
						Diseases();  // Go Back
					break;
				
					default:
						cout << "Please Select Correct Option: ";
						cin >> op;
						cout << endl;
					break;
				}
			break;
		
			case 5:
				system("cls");
				Heading();
				
				DisFile << "\nAppointment With " << disease[5];
				cout << "0) Go Back" << endl << endl;
				cout << "1) Dr. Muhammad Nouman Anjum" << endl;
				cout << "2) Dr. Bilal Firdous Khan" << endl;
				cout << "3) Dr. Zoha Ijaz" << endl;
				cout << "4) Dr. Sadia Hayat" << endl << endl;
				
				cout << "Select Doctor: ";
				cin >> op;
				cout << endl;
			 
				switch (op)
				{
					case 1:
						DisFile << " Dr. Muhammad Nouman Anjum ";
						DisFile.close();
						Days();
					break;
				
					case 2:
						DisFile << " Dr. Bilal Firdous Khan ";
						DisFile.close();
						Days();
					break;
				
					case 3:
						DisFile << " Dr. Zoha Ijaz ";
						DisFile.close();
						Days();
					break;
				
					case 4:
						DisFile << " Dr. Sadia Hayat ";
						DisFile.close();
						Days();
					break;
				
					case 0:
						Diseases();  // Go Back
					break;
				
					default:
						cout << "Please Select Correct Option: ";
						cin >> op;
						cout << endl;
					break;
				}
			break;
		
			case 0:
				main(); // calling main for going back to main menu
			break;
		
			default:
				cout << "Please Select Correct Option: ";
				cin >> op;
				cout << endl;
			break;
		}
	}	
}

int main()
{
	system("cls");
	system("color 30");
	cout << "\t\t\t\t----------------------------------------------------------" << endl;
	cout << "\t\t\t\t|                                                        |" <<endl;
	cout << "\t\t\t\t|               Doctor Appointment System                |" << endl;
	cout << "\t\t\t\t|                                                        |" <<endl;
	cout << "\t\t\t\t----------------------------------------------------------" << endl;
	cout << "\t\t\t\t|                                                        |" <<endl;
	cout << "\t\t\t\t|                       Main Menu                        |" << endl;
	cout << "\t\t\t\t|                                                        |" <<endl;
	cout << "\t\t\t\t----------------------------------------------------------" << endl;
	cout << endl << endl << endl;
	
	
	cout << "1) Book Appointment" << endl;
	cout << "2) View Existing Appointments" << endl;
	cout << "3) Exit Program" << endl << endl;
	
	ofstream MyFile;								// file writing mode
	MyFile.open("Appointments.txt", ios::app);
	MyFile.close();
	
	string Data;
	ifstream ReadFile;								// file reading mode
	
	string choice;
	int op;
	cout << "Select Option: ";
	cin >> op;
	cout << endl;
	
	while(true)
	{
	
		switch (op)
		{
			case 1:
				system("cls");
				Heading();
				Diseases();
			break;	
		
			case 2:
				system("cls");
				Heading();
				cout << "\t\t\t Appointments History" << endl;
				ReadFile.open("Appointments.txt");
				if(ReadFile.is_open())
				{
					while(!ReadFile.eof()) 				// .eof() for reading file till the end of file
					{
						getline(ReadFile, Data);
						cout << Data << endl;
					}
					ReadFile.close();
					
					cout << endl;
					system("pause");
					main();
				}
				else
				{
					cout << "File Could Not Be Opened!" << endl;
					main(); 
				}
				return 0;
				
			break;
		
			case 3:
				system("cls");
				Heading();
				cout << "Are You Sure To Want To Exit?" << endl;
				cout << "Please Select (Y or N): ";
				cin >> choice;
				cout << endl;
				while(true)
				{
					if(choice=="Y" || choice=="y")
					{
						cout << "\n\t Thanks For Using Our Program" << endl;			
						exit(0);
					}
					else if(choice=="N" || choice=="n")
					{
						main(); // for going back to main menu
					}
					else
					{
						cout << "Please Select Correct Option: ";
						cin >> choice;
					}
				}
			break;
		
			default:
				cout<<"Please Select Correct Option: ";
				cin >> op;
				cout << endl << endl;
			break;	
		}
	}
}