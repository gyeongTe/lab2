#include <iostream>
#include <map>

struct Student {
	int mid_term_score;
	int final_score;
};

int main() {
	int numStudents;
	std::cout << "Please enter the number of student: ";
	std::cin >> numStudents;

	std::map<std::string, Student> studentMap;

	for(int i=0; i<numStudents; i++){
		std::string name;
		Student student;

		std::cout << "Please enter your student name: ";
		std::cin >> name;
		std::cout << "Please enter the interim score: ";
		std::cin >> student.mid_term_score;
		std::cout << "Please enter your final score: ";
		std::cin >> student.final_score;

		studentMap[name] = student;

	}

	std::cout << "Student information:\n";
	for (const auto& pair : studentMap) {
		std::cout << "name:" << pair.first << ", mid score:" << pair.second.mid_term_score << ", final score:" << pair.second.final_score << "\n";
	}

	return 0;
}


