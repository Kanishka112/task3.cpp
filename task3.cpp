#include<iostream>
#include<string>
#include<vector>
using namespace std;
      struct student{
        string name;
        double grade;
      };
      int main(){
        vector<student> students;
        int number;
           cout<<"enter total number: ";
           cin>>number;
           //input the student names and their grade
           for(int i=0; i<number;i++){
            student student ;
            cout<<"enter a name of student "<<i++<<":";
            cin>>student.name;
            cout<< "enter the grade of student"<<i++<<":";
            cin>>student.grade;
            students.push_back(student);
           }
           //calculating average grade of student 
           double sum = 0.0;
           for(const auto& student: students){
            sum+= student.grade;
           }
        double averagegrade = sum/number;   
//finding highest and lowest grade
double highestgrade = students[0].grade;
double lowestgrade =  students[0].grade;
         for(const auto& student: students){
            highestgrade = max(highestgrade,student.grade);
             lowestgrade = min(lowestgrade,student.grade);
         }
         //displaying result
         cout<<"\n student grade :\n";
         for(const auto& student: students){
            cout<< student.name<<":"<<student.grade;
         }
        cout<<"\n average grade:"<<averagegrade;
  cout<<"\n highest grade:"<<highestgrade;
   cout<<"\n lowest grade:"<<lowestgrade;
       
          return 0;
          


      }


