#include <iostream>
using namespace std;

string name, gender;
int age, aclevel, calorie, protin, fat, carbohydrate, fiber;
float width, hight, level, a;
string goal;

class info
{
public:
    info()
    {
        cout << "What is your name : ";
        cin >> name;
        cout << endl;
        cout << "your age : ";
        cin >> age;
        cout << endl;
        cout << "NOTE:1 foot = 30.48CM" << endl
             << "your hight(CM) : ";
        cin >> hight;
        cout << endl;
        cout << "your width(KG) : ";
        cin >> width;
        cout << endl;
        cout << "are you male or female : ";
        cin >> gender;
        cout << endl;
        cout << "width loss, width gain or width mainten : ";
        cin >> goal;
        if (goal == "gain")
            a = 1.16;
        if (goal == "loss")
            a = 0.88;
        if (goal == "mainten")
            a = 1;
        cout << endl;

        cout << "your activity level " << endl;

        cout << "1.  Sedentary (little or no exercise)" << endl;
        cout << "2.  Lightly active (exercise 1-3 days/week)" << endl;
        cout << "3.  Moderately active (exercise 3-5 days/week)" << endl;
        cout << "4.  Active (exercise 6-7 days/week)" << endl;
        cout << "5.  Very active (hard exercise 6-7 days/week)" << endl;
        cout << "select 1 to 5 : ";
        cin >> aclevel;
        cout << endl;

        switch (aclevel)
        {
        case 1:
            level = 1.2;
            break;
        case 2:
            level = 1.37;
            break;
        case 3:
            level = 1.55;
            break;
        case 4:
            level = 1.725;
            break;
        default:
            level = 1.90;
        }
    }
    void calculate()
    {

        if (gender == "male")
            calorie = ((((10 * width) + (6.25 * hight) - (5 * age)) * level) + 5) * a;
        else
            calorie = ((((10 * width) + (6.25 * hight) - (5 * age)) * level) - 161) * a;

        cout << "you need " << calorie << "gm calories per day" << endl;

        cout << "protin = " << (calorie * 20) / 100 << "gm   "
             << "fats = " << (calorie * 30) / 100 << "gm   "
             << "carbs = " << (calorie * 50) / 100 << "gm";
    }
};

int main()
{
    info o1;
    o1.calculate();
    return 0;
}