#include<iostream>
#include<fstream>
#include<string>
using namespace std;
class student
{                                     //    19F0329 SINGLE PERSON
public:
	char first_name[10];
	char last_name[10];
	int Class;
	int roll_number;
	int registration_date;
	string gender;
	string contact_number;
	string father_name;
	string father_profession;
	string parent_contact_number;
	string fee_submittion;
	string blood_group;
	string address;
	char first_name2[10];
	char last_name2[10];
	int Class2;
	int roll_number2;
	int registration_date2;
	string gender2;
	string contact_number2;
	string father_name2;
	string father_profession2;
	string parent_contact_number2;
	string fee_submittion2;
	string blood_group2;
	string address2;
public:
	//student() {}
	void set_name_of_student()
	{
		cout << "What is your first  name : ";
		cin.getline(first_name, 10);
		cout << "What is your last name : ";
		cin.getline(last_name, 10);

		cout << "What is your class : ";
		cin >> Class;
		cout << "What is your roll number : ";
		cin >> roll_number;
		cout << "What is registration date : ";
		cin >> registration_date;
		cout << "What is your gender : ";
		cin >> gender;
		cout << "What is your contact number : ";
		cin >> contact_number;
		cout << "What is your blood group : ";
		cin >> blood_group;
		cout << "What is your complete address : ";
		cin >> address;

		cout << "What is your father name : ";
		cin >> father_name;
		cout << "What is your father profession : ";
		cin >> father_profession;
		cout << "What is your father contact number : ";
		cin >> parent_contact_number;
		cout << "Is fee submitted or not : ";
		cin >> fee_submittion;
	}
	void show_student()
	{
		cout << "FIRST_NAME\tLAST_NAME\tCLASS\tROLL_NUMBER\tREGISTRATION_DATE\tGENDER\tCONTACT_NUMBER\tBLOOD_GROUP\tADDRESS\tFATHER_NAME\tPROFESSION\tCONTACT_NUMBER\tFEE" << endl;
		cout << first_name << "\t" << last_name << "\t" << Class << "\t" << roll_number << "\t" << registration_date << "\t" << gender << "\t" << contact_number << "\t" << blood_group << "\t" << address << "\t" << father_name << "\t" << father_profession << "\t" << parent_contact_number << "\t" << fee_submittion << endl;
		ofstream out;
		out.open("student1.txt");
		out << first_name << "\t" << last_name << "\t" << Class << "\t" << roll_number << "\t" << registration_date << "\t" << gender << "\t" << contact_number << "\t" << blood_group << "\t" << address << "\t" << father_name << "\t" << father_profession << "\t" << parent_contact_number << "\t" << fee_submittion << endl;
	}
	void set_name_of_student2()
	{
		cout << "What is your first  name : ";
		cin.getline(first_name2, 10);
		cout << "What is your last name : ";
		cin.getline(last_name2, 10);

		cout << "What is your class : ";
		cin >> Class2;
		cout << "What is your roll number : ";
		cin >> roll_number2;
		cout << "What is registration date : ";
		cin >> registration_date2;
		cout << "What is your gender : ";
		cin >> gender2;
		cout << "What is your contact number : ";
		cin >> contact_number2;
		cout << "What is your blood group : ";
		cin >> blood_group2;
		cout << "What is your complete address : ";
		cin >> address2;

		cout << "What is your father name : ";
		cin >> father_name2;
		cout << "What is your father profession : ";
		cin >> father_profession2;
		cout << "What is your father contact number : ";
		cin >> parent_contact_number2;
		cout << "Is fee submitted or not : ";
		cin >> fee_submittion2;
	}
	void show_student2()
	{
		cout << "FIRST_NAME\tLAST_NAME\tCLASS\tROLL_NUMBER\tREGISTRATION_DATE\tGENDER\tCONTACT_NUMBER\tBLOOD_GROUP\tADDRESS\tFATHER_NAME\tPROFESSION\tCONTACT_NUMBER\tFEE" << endl;
		cout << first_name2 << "\t" << last_name2 << "\t" << Class2 << "\t" << roll_number2 << "\t" << registration_date2 << "\t" << gender2 << "\t" << contact_number2 << "\t" << blood_group2 << "\t" << address2 << "\t" << father_name2 << "\t" << father_profession2 << "\t" << parent_contact_number2 << "\t" << fee_submittion2 << endl;
		ofstream out;
		out.open("student2.txt");
		cout << first_name2 << "\t" << last_name2 << "\t" << Class2 << "\t" << roll_number2 << "\t" << registration_date2 << "\t" << gender2 << "\t" << contact_number2 << "\t" << blood_group2 << "\t" << address2 << "\t" << father_name2 << "\t" << father_profession2 << "\t" << parent_contact_number2 << "\t" << fee_submittion2 << endl;
	}
	void show_fee_status()
	{
		cout << first_name << roll_number << fee_submittion << endl;
		cout << first_name2 << roll_number2 << fee_submittion2 << endl;
	}
};
class Teacher
{
public:
	char first_name[10];
	char last_name[10];
	string email;
	int joining_date;
	string password;
	string confirm_password;
	string cnic;
	string gender;
	string qualification;
	string contact_number;
	string date_of_birth;
	string address;
	string salary;
	char first_name2[10];
	char last_name2[10];
	string email2;
	int joining_date2;
	string password2;
	string confirm_password2;
	string cnic2;
	string gender2;
	string qualification2;
	string contact_number2;
	string date_of_birth2;
	string address2;
	string salary2;
public:
	//Teacher() {}
	void set_name_of_teacheer()
	{
		cout << "What is your first  name : ";
		cin.getline(first_name, 10);
		cout << "What is your last name : ";
		cin.getline(last_name, 10);
	
		cout << "What is your email : ";
		cin >> email;
		cout << "What is your joining date : ";
		cin >> joining_date;
		cout << "Enter password : ";
		cin >> password;
		cout << "Confirm password : ";
		cin >> confirm_password;
		while (password != confirm_password)
		{
			cout << "Please enter correct password : ";
			cin >> confirm_password;
		}
		cout << "Enter cnic : ";
		cin >> cnic;
		cout << "What is your gender : ";
		cin >> gender;
		cout << "What is your qualification : ";
		cin >> qualification;
		cout << "What is your contact number : ";
		cin >> contact_number;
		cout << "What is your complete address : ";
		cin >> address;
		cout << "Enter salary : ";
		cin >> salary;
	}
	void show_teacher()
	{
		cout << "|FIRST_NAME| |LAST_NAME| |EMAIL| |JOINUNG_DATE| |PASSWORD|   |CNIC| |GENDER| |QUALIFICATION| |CONTACT_NUMBBER| |ADDRESS| |SALARY|" << endl;
		cout << first_name <<"\t"<< last_name  <<"\t\t"<< email << "\t\t" << joining_date << "\t" << password << "\t" << cnic <<"\t"<< gender << "\t" << qualification << "\t" << contact_number << "\t" << address << "\t" << salary << endl;
		ofstream out;
		out.open("teacher1.txt");
		out << first_name << "\t" << last_name << "\t\t" << email << "\t\t" << joining_date << "\t" << password << "\t" << cnic <<"\t"<< gender << "\t" << qualification << "\t" << contact_number << "\t\t" << address << "\t" << salary << endl;
	}
	/*void store_data_of_new_teacher()
	{
		ofstream out;
		out.open("teacher.txt", ios::app | ios::binary);
		out.write((char*)this, sizeof(*this));
		out.close();
	}*/
	void set_name_of_teacheer2()
	{
		cout << "What is your first  name : ";
		cin.getline(first_name2, 10);
		cout << "What is your last name : ";
		cin.getline(last_name2, 10);

		cout << "What is your email : ";
		cin >> email2;
		cout << "What is your joining date : ";
		cin >> joining_date2;
		cout << "Enter password : ";
		cin >> password2;
		cout << "Confirm password : ";
		cin >> confirm_password2;
		while (password2 != confirm_password2)
		{
			cout << "Please enter correct password : ";
			cin >> confirm_password2;
		}
		cout << "Enter cnic : ";
		cin >> cnic2;
		cout << "What is your gender : ";
		cin >> gender2;
		cout << "What is your qualification : ";
		cin >> qualification2;
		cout << "What is your contact number : ";
		cin >> contact_number2;
		cout << "What is your complete address : ";
		cin >> address2;
		cout << "Enter salary : ";
		cin >> salary2;
	}
	void show_teacher2()
	{
		cout << "FIRST_NAME\tLAST_NAME\tEMAIL\tJOINUNG_DATE\tPASSWORD\tCNIC\tGENDER\tQUALIFICATION\tCONTACT_NUMBBER\tADDRESS\tSALARY" << endl;
		cout << first_name2 << "\t" << last_name2 << "\t" << email2 << "\t" << joining_date2 << "\t" << password2 << "\t" << cnic2 << gender2 << "\t" << qualification2 << "\t" << contact_number2 << "\t" << address2 << "\t" << salary2 << endl;
		ofstream out;
		out.open("teacher1.txt");
		out << first_name2 << "\t" << last_name2 << "\t" << email2 << "\t" << joining_date2 << "\t" << password2 << "\t" << cnic2 << gender2 << "\t" << qualification2 << "\t" << contact_number2 << "\t" << address2 << "\t" << salary2 << endl;
	}
};
class course
{
private:
	string course_name;
	int course_code;
	int select_class;
	string parent_course;
public:
	void set_course_info()
	{
		cout << "Enter name of course : ";
		cin >> course_name;
		cout << "Enter code of course : ";
		cin >> course_code;
		cout << "Enter class (Pre-nursery to matric) : ";
		cin >> select_class;
	}
	void set_parent_course_info()
	{
		int n;
		cout << "Enter amount of parent courses : ";
		cin >> n;
		for (int i = 1; i <= n; i++)
		{
			cout << "Enter parent course number " << i << " : ";
			cin >> parent_course;
		}
	}
	void display_course()
	{
		course c;
		c.set_course_info();
		c.set_parent_course_info();
	}
};
class edit_student :public student
{
public:
	void edit_student_detail()
	{
		edit_student e;
		e.set_name_of_student();
		cout << "Update fee information \n is fee  submitted or not : ";
		cin >> e.fee_submittion;
		cout << "Update address of student : ";
		cin >> e.address;
		cout << "AFTER EDITING DETAILS OF FIRST STEDENT" << endl;
		cout << "FIRST_NAME\tLAST_NAME\tCLASS\tROLL_NUMBER\tREGISTRATION_DATE\tGENDER\tCONTACT_NUMBER\tBLOOD_GROUP\tADDRESS\tFATHER_NAME\tPROFESSION\tCONTACT_NUMBER\tFEE" << endl;
		cout << first_name << "\t" << last_name << "\t" << Class << "\t" << roll_number << "\t" << registration_date << "\t" << gender << "\t" << contact_number << "\t" << blood_group << "\t" << address << "\t" << father_name << "\t" << father_profession << "\t" << parent_contact_number << "\t" << fee_submittion << endl;
		ofstream out;
		out.open("edit_student1.txt");
		out << first_name << "\t" << last_name << "\t" << Class << "\t" << roll_number << "\t" << registration_date << "\t" << gender << "\t" << contact_number << "\t" << blood_group << "\t" << address << "\t" << father_name << "\t" << father_profession << "\t" << parent_contact_number << "\t" << fee_submittion << endl;
	}
	void edit_student_detail2()
	{
		edit_student f;
		f.set_name_of_student2();
		cout << "Update fee information \n is fee is submitted or not : ";
		cin >> f.fee_submittion2;
		cout << "Update address of student : ";
		cin >> f.address2;
		cout << "AFTER EDITING DETAILS OF SECOND STEDENT" << endl;
		cout << "FIRST_NAME\tLAST_NAME\tCLASS\tROLL_NUMBER\tREGISTRATION_DATE\tGENDER\tCONTACT_NUMBER\tBLOOD_GROUP\tADDRESS\tFATHER_NAME\tPROFESSION\tCONTACT_NUMBER\tFEE" << endl;
		cout << first_name2 << "\t" << last_name2 << "\t" << Class2 << "\t" << roll_number2 << "\t" << registration_date2 << "\t" << gender2 << "\t" << contact_number2 << "\t" << blood_group2 << "\t" << address2 << "\t" << father_name2 << "\t" << father_profession2 << "\t" << parent_contact_number2 << "\t" << fee_submittion2 << endl;
		ofstream out;
		out.open("edit_student2.txt");
		cout << first_name2 << "\t" << last_name2 << "\t" << Class2 << "\t" << roll_number2 << "\t" << registration_date2 << "\t" << gender2 << "\t" << contact_number2 << "\t" << blood_group2 << "\t" << address2 << "\t" << father_name2 << "\t" << father_profession2 << "\t" << parent_contact_number2 << "\t" << fee_submittion2 << endl;
	}
};
class edit_teacher :public Teacher
{
public:
	void edit_teacher_detail()
	{
		edit_teacher e;
		cout << "Update address of teacher : ";
		cin >> e.address;
		cout << "Update contact number of teacher : ";
		cin >> e.contact_number;
		cout << "Update qualifiication of teacher : ";
		cin >> e.qualification;
		cout << "Update salary of teacher : ";
		cin >> e.salary;
		cout << "FIRST_NAME\tLAST_NAME\tEMAIL\tJOINUNG_DATE\tPASSWORD\tCNIC\tGENDER\tQUALIFICATION\tCONTACT_NUMBBER\tADDRESS\tSALARY" << endl;
		cout << first_name << "\t" << last_name << "\t" << email << "\t" << joining_date << "\t" << password << "\t" << cnic << gender << "\t" << qualification << "\t" << contact_number << "\t" << address << "\t" << salary << endl;
		ofstream out;
		out.open("edit_teacher1.txt");
		out << first_name << "\t" << last_name << "\t" << email << "\t" << joining_date << "\t" << password << "\t" << cnic << gender << "\t" << qualification << "\t" << contact_number << "\t" << address << "\t" << salary << endl;
	}
	void edit_teacher_detail2()
	{
		edit_teacher f;
		cout << "Update address of teacher : ";
		cin >> f.address;
		cout << "Update contact number of teacher : ";
		cin >> f.contact_number;
		cout << "Update qualifiication of teacher : ";
		cin >> f.qualification;
		cout << "Update salary of teacher : ";
		cin >> f.salary;
		cout << "FIRST_NAME\tLAST_NAME\tEMAIL\tJOINUNG_DATE\tPASSWORD\tCNIC\tGENDER\tQUALIFICATION\tCONTACT_NUMBBER\tADDRESS\tSALARY" << endl;
		cout << first_name2 << "\t" << last_name2 << "\t" << email2 << "\t" << joining_date2 << "\t" << password2 << "\t" << cnic2 << gender2 << "\t" << qualification2 << "\t" << contact_number2 << "\t" << address2 << "\t" << salary2 << endl;
		ofstream out;
		out.open("edit_teacher2.txt");
		out << first_name2 << "\t" << last_name2 << "\t" << email2 << "\t" << joining_date2 << "\t" << password2 << "\t" << cnic2 << gender2 << "\t" << qualification2 << "\t" << contact_number2 << "\t" << address2 << "\t" << salary2 << endl;
	}
};
class mark
{
public:
	int roll_no;
	string cors_name;
	float marks;
	float total_marks;
	int roll_no2;
	string cors_name2;
	float marks2;
	float total_marks2;
	mark()
	{
		marks = 0;
		total_marks = 0;
	}
	void updating_marks()
	{
		cout << "Enter marks of first student" << endl;
		cout << "Enter roll number : ";
		cin >> roll_no;

		cout << "Enter course name : ";
		cin >> cors_name;
		cout << "Enter mrks you get : ";
		cin >> marks;
		cout << "Enter total marks : ";
		cin >> total_marks;
		}
	void updating_marks2()
	{
		cout << "Enter marks of second student" << endl;
		cout << "Enter roll number : ";
		cin >> roll_no2;

		cout << "Enter course name : ";
		cin >> cors_name2;
		cout << "Enter mrks you get : ";
		cin >> marks2;
		cout << "Enter total marks : ";
		cin >> total_marks2;
	}
	void view_student_marks()
	{
		cout << "MRKS OF FIRST STUDENT " << endl;
		cout << roll_no << cors_name << marks << total_marks << endl;
		cout << "MRKS OF SECOND STUDENT " << endl;
		cout << roll_no2 << cors_name2 << marks2 << total_marks2 << endl;
	}
};
class teacher_module
{
private:
	string course_name;
	string Class;
	string section;
	int total_registered_student;
	string course_name2;
	string Class2;
	string section2;
	int total_registered_student2;
	string course_name3;
	string Class3;
	string section3;
	int total_registered_student3;
public:
	void module()
	{
		course_name = "CALCULUS";
		Class = "cs";
		section = "A";
		total_registered_student = 20;
		course_name = "english";
		Class2 = "cs";
		section2 = "C";
		total_registered_student2 = 30;
		course_name3 = "DLD";
		Class3 = "cs";
		section3 = "D";
		total_registered_student3 = 40;
		cout << course_name << Class << section << total_registered_student << endl;
		cout << course_name2 << Class2 << section2 << total_registered_student2 << endl;
		cout << course_name3 << Class3 << section3 << total_registered_student3 << endl;
		ofstream out;
		out.open("teacher_module.txt");
		out << course_name << Class << section << total_registered_student << endl;
		out << course_name2 << Class2 << section2 << total_registered_student2 << endl;
		out << course_name3 << Class3 << section3 << total_registered_student3 << endl;
	}
};
class administration :public student, public Teacher, public course, public mark,public teacher_module
{
public:
	void set_menu()
	{
		cout << "\n(1). Press for adding  courses " << endl;
		cout << "(2). Press for adding a new teacher\n\n     >>> also edit all teacher details <<<\n" << endl;
		cout << "(3). Press for adding a new student\n\n     >>> also edit all student details<<<\n     >>> also able to see the fee status of student <<<\n" << endl;
		cout << "(4). Press for updating marks\n\n     >>> also view all student marks <<<\n" << endl;
		cout << "(5). Press for viewing teacher courses with sections " << endl;
		cout << "(6). Press for exit() " << endl;
		cout << "Enter your choice : ";
	}
	void set_program()
	{
		set_menu();
		int choice;
		cin >> choice;
		cin.ignore();
		administration a;
		administration b;
		if (choice == 1)
		{
			a.display_course();
		}
		else if (choice == 2)
		{
			string choose;
			a.set_name_of_teacheer();
			cin.ignore();
			a.show_teacher();
			a.set_name_of_teacheer2();
			cin.ignore();
			a.show_teacher2();
			cout << "if you want to edit detail of first teacher then enter (first) : ";
			cout << "\nif you want to edit detail of second teacher then enter (second) : ";
			cin >> choose;
			if (choose == "first" || choose == "FIRST")
			{
				edit_teacher e;
				e.edit_teacher_detail();
			}
			else if (choose == "second" || choose == "SECOND")
			{
				edit_teacher f;
				f.edit_teacher_detail2();
			}
			else
			{
				cout << "That is your final result of teacher details  " << endl;
			}
		}
		else if (choice == 3)
		{
			string choose;
		//	a.display_student();
			a.set_name_of_student();
			cin.ignore();
			a.show_student();
			a.set_name_of_student2();
			cin.ignore();
			a.show_student2();
			cout << "if you want to edit detail of first student  then enter (first) : ";
			cout << "\nif you want to edit detail of second student then enter (second) : ";
			cin >> choose;
			if (choose == "first" || choose == "FIRST")
			{
				edit_student e;
				e.edit_student_detail();
			}
			else if (choose == "second" || choose == "SECOND")
			{
				edit_student f;
				f.edit_student_detail2();
			}
			else
			{
				cout << "IF you want to see fee status than enter fee" << endl;
				cin >> choose;
				if (choose == "fee")
				{
					a.show_fee_status();
				}
				else
				{
					cout << "That is your final result of student details  " << endl;
				}
			}
		}
		else if (choice == 4)
		{
			cout << "AS GIVEN DEFAULT MARKS ARE 0 " << endl;
			a.updating_marks();
			cin.ignore();
			a.updating_marks2();
			string cho;
			cout << "If you want to view all student marks then enter yes else enter other than yes" << endl;
			cin >> cho;
			if (cho == "yes")
			{
				cout << "MARKS OF ALL STUDENT ARE " << endl;
				a.view_student_marks();
			}
		}
		else if (choice == 5)
		{
			cout << "These are available course for section with details " << endl;
			a.module();
		}
		else if (choice == 6)
		{
			cout << "YOU just exit the program  " << endl;
			exit(0);
		}
	}
};
int main()
{
	administration a;
	a.set_program();
	system("pause");
	return 0;
}



