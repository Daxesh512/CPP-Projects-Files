#include <iostream>
#include <vector>

struct Course {
    std::string name;
    double grade;
    double creditHours;
};

int main() {
    int numCourses;
    std::cout << "Enter the number of courses: ";
    std::cin >> numCourses;

    std::vector<Course> courses;

    for (int i = 0; i < numCourses; i++) {
        Course course;
        std::cout << "Enter the name of course " << i + 1 << ": ";
        std::cin >> course.name;
        std::cout << "Enter the grade for " << course.name << " (in GPA scale): ";
        std::cin >> course.grade;
        std::cout << "Enter the credit hours for " << course.name << ": ";
        std::cin >> course.creditHours;
        courses.push_back(course);
    }

    double totalGradePoints = 0.0;
    double totalCreditHours = 0.0;

    for (const Course& course : courses) {
        totalGradePoints += course.grade * course.creditHours;
        totalCreditHours += course.creditHours;
    }

    if (totalCreditHours > 0) {
        double gpa = totalGradePoints / totalCreditHours;
        std::cout << "Your GPA is: " << gpa << std::endl;
    } else {
        std::cout << "No credit hours entered. GPA cannot be calculated." << std::endl;
    }

    return 0;
}
