#include<iostream>
#include<conio.h>
#include<iomanip>
#include<fstream>
#include<string.h>

using namespace std;
class Test
{
   public:
	int option, password, marks = 0, totalmarks = 15,count=0,worng=0;
	char answer1,answer2,answer3,answer4,answer5;
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
	ifstream fin; //create file for read
	ofstream fout;// create file for write
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
					cout << "2. Display Correct Answer." << endl;
					cout << "3. Display Total Marks." << endl;
					cout << "4. Display Result." << endl;
					cout << "5. Exit ." << endl;
					cout << "Enter your option -  ";
					cin >> option;
					cout << endl;
					switch (option) {
					case 1:
						    line();
						    cout<<"NOTE: There is a negative marking per question 1 mark"<<endl;
						    line();
							cout<<"Q.1) The default access specifer for the class members is ?"<<endl;
                                        cout<<"A - public."<<endl;
                                        cout<<"B - private."<<endl;
                                        cout<<"C - protected."<<endl;
                                        cout<<"D - None of the above."<<endl;
                                        cout<<"Enter your option - ";
                                        cin>>answer1;
                                        if(answer1=='B')
                                        {
                                        	marks=marks+3;
                                        	count++;
										}
										else
										{
											marks=marks-1;
											worng++;
										}
										line();
										cout<<"Q.2) Choose the Object oriented programming language from below."<<endl;
                                        cout<<"A - C++"<<endl;
                                        cout<<"B - Small talk"<<endl;
                                        cout<<"C - Simula"<<endl;
                                        cout<<"D - All the above."<<endl;
                                        cout<<"Enter your option - ";
                                        cin>>answer2;
                                        if(answer2=='D')
                                        {
                                        	marks=marks+3;
                                        	count++;
										}
										else
										{
											marks=marks-1;
											worng++;
										}
										line();
										cout<<"Q.3) What is the full form of RTTI?"<<endl;
                                        cout<<"A - Runtime type identification"<<endl;
                                        cout<<"B - Runtime template identification"<<endl;
                                        cout<<"C - Robust Template Type Inheritance"<<endl;
                                        cout<<"D - None of the above."<<endl;
                                        cout<<"Enter your option - ";
                                        cin>>answer3;
                                        if(answer3=='A')
                                        {
                                        	marks=marks+3;
                                        	count++;
										}
										else
										{
											marks=marks-1;
											worng++;
										}
										line();
										cout<<"Q.4)What is the full form of STL?"<<endl;
                                        cout<<"A - Standard template library."<<endl;
                                        cout<<"B - System template library."<<endl;
                                        cout<<"C - Standard topics library."<<endl;
                                        cout<<"D - None of the above."<<endl;
                                        cout<<"Enter your option - ";
                                        cin>>answer4;
                                        if(answer4=='A')
                                        {
                                        	marks=marks+3;
                                        	count++;
										}
										else
										{
											marks=marks-1;
											worng++;
										}
										line();
									    cout<<"Q.5) Which of the following is the correct syntax to print the message in C++ language?"<<endl;
                                        cout<<"A - Hello world!"<<endl;
                                        cout<<"B - Hello world!"<<endl;
										cout<<"C - Hello world!"<<endl;
										cout<<"D - None of the above"<<endl;
                                        cout<<"Enter your option - ";
                                        cin>>answer5;
                                        if(answer5=='A')
                                        {
                                        	marks=marks+3;
                                        	count++;
										}
										else
										{
											marks=marks-1;
											worng++;
										}

					
						break;
					case 2:
						if(i==2)
						{
						
						  cout<<"Your Answer Sheet Result:"<<endl;
						 	     line();
								 cout<<"correct answer is : "<<count<<endl;
					             cout<<"Wrong answer is : "<<worng<<endl;
					             line(); 	
								if(answer1=='A')
								{
									cout<<"Q.1) The default access specifer for the class members is ?"<<endl;
								    cout<<"->your answer is: "<<answer1<<"(A - public.)"<<endl;
								    cout<<"->Sorry!!you put worng answer. 1 marks deducted"<<endl;
								    cout<<"->Correct Answer is:B - private."<<endl;
									line();
								}
								if(answer1=='B')
								{
									cout<<"Q.1) The default access specifer for the class members is ?"<<endl;
								    cout<<"->your answer is: "<<answer1<<"(B - private.)"<<endl;
								    cout<<"->Congo!!you put right answer. 3 marks credited"<<endl;
									line();
								}
								if(answer1=='C')
								{
									cout<<"Q.1) The default access specifer for the class members is ?"<<endl;
								    cout<<"->your answer is: "<<answer1<<"(C - protected.)"<<endl;
								    cout<<"->Sorry!!you put worng answer. 1 marks deducted"<<endl;
								    cout<<"->Correct Answer is:B - private."<<endl;
									line();
								}
								if(answer1=='D')
								{
									cout<<"Q.1) The default access specifer for the class members is ?"<<endl;
								    cout<<"->your answer is: "<<answer1<<"(D - None of these.)"<<endl;
								    cout<<"->Sorry!!you put worng answer. 1 marks deducted"<<endl;
								    cout<<"->Correct Answer is:B - private."<<endl;
									line();
								}
								
									
								if(answer2=='A')
								{
									cout<<"Q.2) Choose the Object oriented programming language from below."<<endl;
								    cout<<"->your answer is: "<<answer2<<"(A - C++.)"<<endl;
								    cout<<"->Sorry!!you put worng answer. 1 marks deducted"<<endl;
								    cout<<"->Correct Answer is:D - All the above."<<endl;
									line();
								}
								if(answer2=='B')
								{
									cout<<"Q.2) Choose the Object oriented programming language from below."<<endl;
								    cout<<"->your answer is: "<<answer2<<"(B - Small talk.)"<<endl;
								    cout<<"->Sorry!!you put worng answer. 1 marks deducted"<<endl;
								    cout<<"->Correct Answer is:D - All the above."<<endl;
									line();
								}
								if(answer2=='C')
								{
									cout<<"Q.2) Choose the Object oriented programming language from below."<<endl;
								    cout<<"->your answer is: "<<answer2<<"(C - Simula.)"<<endl;
								    cout<<"->Sorry!!you put worng answer. 1 marks deducted"<<endl;
								    cout<<"->Correct Answer is:D - All the above."<<endl;
									line();
								}
								if(answer2=='D')
								{
									cout<<"Q.2) Choose the Object oriented programming language from below."<<endl;
								    cout<<"->your answer is: "<<answer1<<"(D - All the above.)"<<endl;
								    cout<<"->Congo!!you put right answer. 3 marks credited"<<endl;
									line();
								}
								
								
								if(answer3=='A')
								{
								    cout<<"Q.3) What is the full form of RTTI?"<<endl;
								    cout<<"->your answer is: "<<answer3<<"(A - Runtime type identification.)"<<endl;
								    cout<<"->Congo!!you put right answer. 3 marks credited"<<endl;
									line();
								}				
								if(answer3=='B')
								{
								    cout<<"Q.3) What is the full form of RTTI?"<<endl;
								    cout<<"->your answer is: "<<answer3<<"(B - Runtime template identification.)"<<endl;
								    cout<<"->Sorry!!you put worng answer. 1 marks deducted"<<endl;
								    cout<<"->Correct Answer is:A - Runtime type identification."<<endl;
									line();
								}
								if(answer3=='C')
								{
								    cout<<"Q.3) What is the full form of RTTI?"<<endl;
								    cout<<"->your answer is: "<<answer3<<"(C - Robust Template Type Inheritance.)"<<endl;
								    cout<<"->Sorry!!you put worng answer. 1 marks deducted"<<endl;
								    cout<<"->Correct Answer is:A - Runtime type identification."<<endl;
									line();
								}		
                                 if(answer3=='D')
								{
								    cout<<"Q.3) What is the full form of RTTI?"<<endl;
								    cout<<"->your answer is: "<<answer3<<"(D - None of the above.)"<<endl;
								    cout<<"->Sorry!!you put worng answer. 1 marks deducted"<<endl;
								    cout<<"->Correct Answer is:A - Runtime type identification."<<endl;
									line();
								}		       
                                        
                                if(answer4=='A')
								{
								    cout<<"Q.4)What is the full form of STL?"<<endl;
								    cout<<"->your answer is: "<<answer4<<"(A - Standard template library.)"<<endl;
								    cout<<"->Congo!!you put right answer. 3 marks credited"<<endl;
									line();
								}	
								if(answer4=='B')
								{
								    cout<<"Q.4)What is the full form of STL?"<<endl;
								    cout<<"->your answer is: "<<answer4<<"(B - System template library.)"<<endl;
								    cout<<"->Sorry!!you put worng answer. 1 marks deducted"<<endl;
							        cout<<"->Correct Answer is:A - Standard template library."<<endl;
									line();
								}		
					            if(answer4=='C')
								{
								    cout<<"Q.4)What is the full form of STL?"<<endl;
								    cout<<"->your answer is: "<<answer4<<"(C - Standard topics library.)"<<endl;
								    cout<<"->Sorry!!you put worng answer. 1 marks deducted"<<endl;
							        cout<<"->Correct Answer is:A - Standard template library."<<endl;
									line();
								}
								if(answer4=='D')
								{
								    cout<<"Q.4)What is the full form of STL?"<<endl;
								    cout<<"->your answer is: "<<answer4<<"(D - None of the above.)"<<endl;
								    cout<<"->Sorry!!you put worng answer. 1 marks deducted"<<endl;
							        cout<<"->Correct Answer is:A - Standard template library."<<endl;
									line();
								}		
                                        
                                if(answer5=='A')       
						        {
								    cout<<"Q.5) Which of the following is the correct syntax to print the message in C++ language?"<<endl;
								    cout<<"->your answer is: "<<answer5<<"(A - Hello world!.)"<<endl;
								    cout<<"->Congo!!you put right answer. 3 marks credited"<<endl;
									line();
								}               
						        if(answer5=='B')
								{
								   	cout<<"Q.5) Which of the following is the correct syntax to print the message in C++ language?"<<endl;
								    cout<<"->your answer is: "<<answer5<<"(B - Hello worl!.)"<<endl;
								    cout<<"->Sorry!!you put worng answer. 1 marks deducted"<<endl;
							        cout<<"->Correct Answer is:A - Standard template library."<<endl;
									line();
								}               
                                if(answer5=='C')
								{
								   	cout<<"Q.5) Which of the following is the correct syntax to print the message in C++ language?"<<endl;
								    cout<<"->your answer is: "<<answer5<<"(C - Hello wo!.)"<<endl;
								    cout<<"->Sorry!!you put worng answer. 1 marks deducted"<<endl;
							        cout<<"->Correct Answer is:A - Standard template library."<<endl;
									line();
								}   
								if(answer5=='D')
								{
								   	cout<<"Q.5) Which of the following is the correct syntax to print the message in C++ language?"<<endl;
								    cout<<"->your answer is: "<<answer5<<"(D - None of the above.)"<<endl;
								    cout<<"->Sorry!!you put worng answer. 1 marks deducted"<<endl;
							        cout<<"->Correct Answer is:A - Standard template library."<<endl;
									line();
								} 
					    }
					        	else 
					        	{
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
								fin.open("F:\\cpp program\\protest3.txt");//write file
								fout.open("F:\\cpp program\\protest3.txt");//read file form
								line();
								fout << fname2 << setw(12) << lname2 << "    "; //file write 
								fout << email2 << setw(12) << marks << setw(12)
										<< totalmarks;
		
								fout.close(); //file read close
								fin>>fname2>>lname2>>email2>>marks>>totalmarks;//file read 
								cout<<fname2<<setw(12)<<lname2<<setw(12)<<email2<<setw(12)<<marks<<setw(12)<<totalmarks;//file read and print on console
                                fin.close();//read file close
                                line();
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
								cout<<"Don't give up...";
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
			//break;
		
		

	}
};
int main() 
{
	Test n1;
	n1.login();
	return 0;
}
