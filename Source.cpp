#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
class Student
{
private:
	int roll;
	string name;
	int physicsGrade;
	int chemistryGrade;
	int mathsGrade;
	int englishGrade;
	int computerGrade;
public:
	Student()
	{
		roll = 0;
		name = "";
		physicsGrade = 0;
		chemistryGrade = 0;
		mathsGrade = 0;
		englishGrade = 0;
		computerGrade = 0;
	}
	void setRoll(int _roll)
	{
		roll = _roll;
	}
	void setName(string _name)
	{
		name = _name;
	}
	void setphysicsGrade(int _physicsGrade)
	{
		physicsGrade = _physicsGrade;
	}
	void setchemistryGrade(int _chemistryGrade)
	{
		chemistryGrade = _chemistryGrade;
	}
	void setmathsGrade(int _mathsGrade)
	{
		mathsGrade = _mathsGrade;
	}
	void setenglishGrade(int _englishGrade)
	{
		englishGrade = _englishGrade;
	}
	void setcomputerGrade(int _computerGrade)
	{
		computerGrade = _computerGrade;
	}
	int getRoll() {
		return roll;
	}
	string getName() {
		return name;
	}
	int getphysicsGrade() {
		return physicsGrade;
	}
	int getchemistryGrade() {
		return chemistryGrade;
	}
	int getmathsGrade() {
		return mathsGrade;
	}
	int getenglishGrade() {
		return englishGrade;
	}
	int getcomputerGrade() {
		return computerGrade;
	}
};
void Intro();
char menue();
char resultmenue();
char entrymenue();
int main()
{
	Intro();
	char ch;
	do {
		ch = menue();
		system("cls");
		switch (ch)
		{
		case '1':
			resultmenue();
			break;
		case '2':
			entrymenue();
			break;
		}
	} while (ch != 3);
	char r;
	do {
		r = resultmenue();
		system("cls");
		switch (r)
		{
		case '1':

			break;
		case '2':

			break;
		}
	} while (r != 3);
	char e;
	do {
		e = entrymenue();
		system("cls");
		switch (e)
		{
		case '1':

			break;
		case '2':

			break;
		case '3':

			break;
		case '4':

			break;
		case '5':

			break;
		}
	} while (e != 6);
	return 0;
}
void Intro()
{
	cout << "\n\n\n\t  STUDENT";
	cout << "\n\n\tREPORT CARD ";
	cout << "\n\n\t  PROJECT";
	cout << "\n\n\n\nMADE BY:SEMICOLON TEAM";
	cin.get();
	system("cls");
}
char menue() {
	char ch;
	system("cls");
	cout << "\n\n\n\tMAIN MENUE";
	cout << "\n\n\t01. RESULT MENUE";//
	cout << "\n\n\t02. ENTRY/EDIT MENUE";//      
	cout << "\n\n\t03. EXIST";//  بتطلع برة خالص
	cout << "\n\n\tPlease Select Your Option (1-3)";

	cin >> ch;
	if (ch >= '1' && ch <= '3')
	{
		return ch;
	}
	else
	{
		cout << "Wrong Number" << endl;
		cin.get();
		system("cls");
		menue();
	}

}
char resultmenue() {
	char r;
	system("cls");
	cout << "\n\n\n\tRESULT MENUE";
	cout << "\n\n\t1. Class Result ";
	cout << "\n\n\t2. Student Report Card ";
	cout << "\n\n\t3. Pack To Main Menue";
	cout << "\n\n\tEnter Choice (1/2/3)?";
	cin >> r;
	if (r >= '1' && r <= '3')
	{
		return r;
	}
	else
	{
		cout << "Wrong Number" << endl;
		cin.get();
		system("cls");
		resultmenue();
	}
}
char entrymenue()
{
	char e;
	system("cls");
	cout << "\n\n\n\tENTRY MENUE";
	cout << "\n\n\t1.CREAT STUDENT RECORD ";
	cout << "\n\n\t2.DISPLAY ALL STUDENTS RECORDS ";
	cout << "\n\n\t3.SEARCH STUDENT RECORD";
	cout << "\n\n\t4.MODIFY STUDENT RECORD";
	cout << "\n\n\t5.DELETE STUDENT RECORD";
	cout << "\n\n\t6.BACK TO MAIN MENUE";
	cout << "\n\n\tPlease Enter Your Choice (1-6)";
	cin >> e;
	if (e >= '1' && e <= '6')
	{
		return e;
	}
	else
	{
		cout << "Wrong Number" << endl;
		cin.get();
		system("cls");
		entrymenue();
	}
}