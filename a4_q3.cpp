/*
Multiple Inheritance
Create these classes:
Academic — stores marks
Sports — stores sports_score
Result — inherits from both Academic and Sports
*/
#include<iostream>
using namespace std;
class academic
{
    public:
      float marks;
      void display()
      {
        cout<<"marks> "<<marks<<endl;
      }
};
class sports 
{
    public:
      int sports_score;
      void display_sport()
      {
        cout<<"sports_score> "<<sports_score<<endl;
      }
};
class result : public academic ,public sports
{
    public:
    void display_result
    {
        cout << "Total Score> " << marks + sports_score << endl;
    }
};
int main()
{
    result s1;
    s1.marks=88;
    s1.sports_score=20;
    s1.display();
    s1.display_sport();
    return 0;
}