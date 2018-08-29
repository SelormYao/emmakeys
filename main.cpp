#include <iostream>

using namespace std;

int main()
{
   string name;
   cout << "enter name" << endl << endl;
   cin >> name;
   cout << "your name is " << name << endl << endl;

   int age;
   cout << "enter age" << endl << endl;
   cin >> age;
   if (age<=20)
   {
       cout << "you cannot vote" << endl << endl;
   }
   else
   {
       cout << "you can vote" << endl << endl;
   }

   cout << "next two years you will be " << age+2 << " years of age" << endl << endl;

   if (age+2 > 20)
   {
       cout << "you can vote at this age" << endl << endl;
   }
   else
   {
       cout << "you have to wait " << 20 - (age+2) << " more year(s) to vote" << endl;
   }


    return 0;
}
