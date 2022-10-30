#include <iostream>
#include <fstream>
#include <string> 
#include "Student.h"

using namespace std;

bool comparator(string a, string b)
{
	return a < b;
}

class Sorting {
private :

	std::string last_name_array[5];
	std::string first_name_array[5];
	int id_array[5];

public:

	void sort(Student Sa,Student Sb, Student Sc, Student Sd, Student Se){
	

		last_name_array[0] = Sa.get_ln();
		last_name_array[1] = Sb.get_ln();
		last_name_array[2] = Sc.get_ln();
		last_name_array[3] = Sd.get_ln();
		last_name_array[4] = Se.get_ln();


		first_name_array[0] = Sa.get_fn();
		first_name_array[1] = Sb.get_fn();
		first_name_array[2] = Sc.get_fn();
		first_name_array[3] = Sd.get_fn();
		first_name_array[4] = Se.get_fn();


		id_array[0] = Sa.get_id();
		id_array[1] = Sb.get_id();
		id_array[2] = Sc.get_id();
		id_array[3] = Sd.get_id();
		id_array[4] = Se.get_id();

		int i, j, flag = 1;    
		std::string temp;           
		std::string firsttemp;
		int idtemp;
		
		for (i = 1; (i <= 5) && flag; i++)
		{
			flag = 0;
			for (j = 0; j < (5 - 1); j++)
			{
				if (last_name_array[j + 1] < last_name_array[j])    
				{
					temp = last_name_array[j];   
					idtemp = id_array[j];
					firsttemp = first_name_array[j];

					last_name_array[j] = last_name_array[j + 1];
					first_name_array[j] = first_name_array[j + 1];
					id_array[j] = id_array[j + 1];


					last_name_array[j + 1] = temp;
				first_name_array[j + 1] = firsttemp;
				id_array[j + 1] = idtemp;


					flag = 1;              
				}
			}
		}


		for (i = 0; i < 5; i++) {
		
			cout << "Id: " << id_array[i] << "\tF: " << first_name_array[i] << "\tL: " <<  last_name_array[i] << "\n";



		}





	}
};


int main() {
	std::string fn;
		std::string ln;
		int id;

		Sorting S1;

		cout << " Enter first, last, and id for the new student" << endl;
		cin >> fn;
		cin >> ln;
		cin >> id;
		Student s1(fn, ln, id);
		cout << " Enter first, last, and id for the new student" << endl;
		cin >> fn;
		cin >> ln;
		cin >> id;
		Student s2(fn, ln, id);
		cout << " Enter first, last, and id for the new student" << endl;
		cin >> fn;
		cin >> ln;
		cin >> id;
		Student s3(fn, ln, id); 
		cout << " Enter first, last, and id for the new  student" << endl;
		cin >> fn;
		cin >> ln;
		cin >> id;
		Student s4(fn, ln, id);
		cout << " Enter first, last, and id for the new student" << endl;
		cin >> fn;
		cin >> ln;
		cin >> id;
        Student s5(fn, ln, id);
		cout << "before sort: \n ";

		cout << "Id: " << s1.get_id() << "\tF: " << s1.get_fn() << "\tL: " << s1.get_ln() << "\n";
		cout << "Id: " << s2.get_id() << "\tF: " << s2.get_fn() << "\tL: " << s2.get_ln() << "\n";	
		cout << "Id: " << s3.get_id() << "\tF: " << s3.get_fn() << "\tL: " << s3.get_ln() << "\n";
		cout << "Id: " << s4.get_id() << "\tF: " << s4.get_fn() << "\tL: " << s4.get_ln() << "\n";
		cout << "Id: " << s5.get_id() << "\tF: " << s5.get_fn() << "\tL: " << s5.get_ln() << "\n";
		

		cout << "\n\nafter sort:\n";
		S1.sort(s1, s2, s3, s4, s5);
		


}