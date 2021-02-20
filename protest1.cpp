#include<iostream>
#include<conio.h>
#include<iomanip>
#include<fstream>
#include<string.h>
#include<process.h>
using namespace std;
class Test
 {
   public:
	int option, password, marks = 0, totalmarks = 15;
	char answer;
	int c = 0;
	string name, fname1, lname1, email1, fname2, lname2, email2;
	char ch;
	int i;
	int x, y;
	char usr[10] = "AUTOHOME";
	char pass[10] = "12345";
	char us[10];
	char pas[10];
	int ob;
	ifstream fin;
	ofstream fout;
	int choice;
	int size = sizeof(name);
	void line() 
	{
		cout << "\n";
		for (int i = 1; i < 80; i++)
			cout << "-";
		cout << endl;
	}
	void login() {
		cout << "1.Login" << endl;
		cout << "2.Create acount" << endl;
		cout << "Enter option -  ";
		cin >> option;
		cout << endl;
		switch (option) {
		case 1:
			cout << "Enter user name: ";
			cin >> us;
			cout << "Enter user password: ";

			for (; ch != '\r';) {
				ch = getch();
				pas[c] = ch;
				c++;
				cout << "*";
			}
			cout << endl;
			c = c - 1;
			pas[c] = '\0';
			
			x = strcmp(us, usr);
			y = strcmp(pas, pass);
			if ((x == 0) && (y == 0)) {
				cout << "\n\t\t\t Login Successful........!!!" << endl;
				line();
				cout << "Enter your first name - ";
				cin >> fname2;
				cout << "Enter your last name - ";
				cin >> lname2;
				cout << "Enter your email - ";
				cin >> email2;

				for (int i = 1; i < 8; i++) {
					cout << endl;
					line();
					cout << "\n\t\t\tChoose your option" << endl;
					line();
					cout << endl;
					cout << "1. Display Questions." << endl;
					cout << "2. Display Corret Answer." << endl;
					cout << "3. Display Total Marks." << endl;
					cout << "4. Display Result." << endl;
					cout << "5. Exit ." << endl;
					cout << "Enter your option -  ";
					cin >> option;
					cout << endl;
					switch (option) {
					case 1:
							cout<<"Q.1) The default access specifer for the class members is ?"<<endl;
                                        cout<<"A - public."<<endl;
                                        cout<<"B - private."<<endl;
                                        cout<<"C - protected."<<endl;
                                        cout<<"D - None of the above."<<endl;
                                        cout<<"Enter your option - ";
                                        cin>>answer;
                                        if(answer=='B')
                                        {
                                        	marks=marks+3;
										}
										else
										{
											marks=marks-1;
										}
										line();
										cout<<"Q.2) Choose the Object oriented programming language from below."<<endl;
                                        cout<<"A - C++"<<endl;
                                        cout<<"B - Small talk"<<endl;
                                        cout<<"C - Simula"<<endl;
                                        cout<<"D - All the above."<<endl;
                                        cout<<"Enter your option - ";
                                        cin>>answer;
                                        if(answer=='D')
                                        {
                                        	marks=marks+3;
										}
										else
										{
											marks=marks-1;
										}
										line();
										cout<<"Q.3) What is the full form of RTTI?"<<endl;
                                        cout<<"A - Runtime type identification"<<endl;
                                        cout<<"B - Runtime template identification"<<endl;
                                        cout<<"C - Robust Template Type Inheritance"<<endl;
                                        cout<<"D - None of the above."<<endl;
                                        cout<<"Enter your option - ";
                                        cin>>answer;
                                        if(answer=='A')
                                        {
                                        	marks=marks+3;
										}
										else
										{
											marks=marks-1;
										}
										line();
										cout<<"Q.4)What is the full form of STL?"<<endl;
                                        cout<<"A - Standard template library."<<endl;
                                        cout<<"B - System template library."<<endl;
                                        cout<<"C - Standard topics library."<<endl;
                                        cout<<"D - None of the above."<<endl;
                                        cout<<"Enter your option - ";
                                        cin>>answer;
                                        if(answer=='A')
                                        {
                                        	marks=marks+3;
										}
										else
										{
											marks=marks-1;
										}
										line();
									    cout<<"Q.5) Which of the following is the correct syntax to print the message in C++ language?"<<endl;
                                        cout<<"A - Hello world!"<<endl;
                                        cout<<"B - Hello world!"<<endl;
										cout<<"C - Hello world!"<<endl;
										cout<<"D - None of the above"<<endl;
                                        cout<<"Enter your option - ";
                                        cin>>answer;
                                        if(answer=='A')
                                        {
                                        	marks=marks+3;
										}
										else
										{
											marks=marks-1;
										}

					
						break;
					case 2:
						if (i == 2)
						 {
						 		cout<<"\n\t\t\t Correct Answer: "<<endl;
												line();
												cout<<"Q.1) The default access specifer for the class members is ?"<<endl;
												cout<<"Answer:B - private."<<endl;
												line();
												cout<<"Q.2) Choose the Object oriented programming language from below."<<endl;
												cout<<"Answer:D - All the above."<<endl;
												line();
												cout<<"Q.3) What is the full form of RTTI?"<<endl;
												cout<<"Answer:A - Runtime type identification."<<endl;
												line();
												cout<<"Q.4)What is the full form of STL?"<<endl;
												cout<<"Answer:A - Standard template library."<<endl;
												line();
												cout<<"Q.5) Which of the following is the correct syntax to print the message in C++ language?"<<endl;
                                                cout<<"Answer:A - Hello world!"<<endl;
                                                line();
						} else {
							cout << "\n\t\t\t Please attempt the test........ " << endl;

						}

						break;
					case 3:
						if (i == 3) {
							cout << "\n\t\t\t Display total marks...";
							cout << endl;

							cout << "\n\t\t\t Your Total Score is: " << marks
									<< " out of " << totalmarks << endl;
							break;
						} else {
							cout << "\n\t\t\t Please attempt the test first....." << endl;

						}

					case 4:
						if (i == 4) {
							if (marks >= 10) {
								cout << "\n\t\t\t Student Reports\n";
								line();
								cout << "First Name" << setw(12) << " LastName"
										<< setw(12);
								cout << "Email" << setw(12) << "Marks";
								cout << setw(16) << "Outof\n";
								fin.open("createaccount.txt");
								line();
								cout << fname2 << setw(12) << lname2 << "    ";
								cout << email2 << setw(12) << marks << setw(12)
										<< totalmarks;
								line();
								fin.close();

								cout << name
										<< "\n\t\t\t Congratulation...!!! you are pass and your marks is "
										<< marks << endl;
							} 
							else 
							{
								cout << name
										<< "\n\t\t\t Sorry...!!!You are fail and your marks is "
										<< marks << endl;
								cout << "\n\t\t\t Better Luck next time....!!! ";
							}
						} 
						else 
						{
							cout << "\n\t\t\t Please attempt the test first..." << endl;

						}
						break;
					case 5:
						cout << "\n\t\t\t Thank You for taking the Quiz Exam......" << endl;
						cout<<"\n\t\t\t All the Best for your future...."<<endl;
						exit(0);
						break;
					default:
						break;

					}
				}

			} 
			else 
			{
				cout << "\n\t\t\t Please try again...";
				exit(0);
			}
			break;
		case 2:
			cout << "Enter first name - ";
			cin >> name;
			cout << "Enter last name - ";
			cin >> lname1;
			cout << "Enter email - ";
			cin >> email1;
			ofstream File("createaccount.txt");
			File << name << " " << lname1 << " " << email1 << endl;
			File.close();
			line();
			cout << "\n\t\t\t Account created successfully...............!!!!";
			cout<<endl;
			cout<<"\n\t\t\t Refresh the page & ";
			cout<<"LOGIN NOW....";
			line();
			break;
		}

	}
};
int main(int argc, char **argv) 
{
	Test n1;
	n1.login();
	Test (ob);
	return 0;
}
