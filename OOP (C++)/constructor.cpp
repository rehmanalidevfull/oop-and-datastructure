# include <iostream>
using namespace std;

/* constructor is function created in class that auto call when an object of class is created.
 it has no return type and same name as class name.
 it called once.
 it allocate memory when it is created and called.
 it has types parametral and non parametral constructor.
*/
class Teacher{
public:
    string teacherName;
    //simple constructor
    Teacher(){
        cout<<"Teacher constructor called."<< endl;
    }
    // parametral constructor
    Teacher(string name){
        this->teacherName = name;
    }
    // copy constructor
    Teacher(Teacher &orgObj){
        cout<< "I am copy constructor" <<endl;
        this->teacherName = orgObj.teacherName;
    }
    void getInfo(){
        cout<<"Teacher Name: "<<this->teacherName<< endl;
    }
    // destructor
    ~Teacher(){
        cout<<"I am Deleting Constructor"<<endl;
    }
};
int main(){
    Teacher T1("Rehman Ali"); // auto call constructor
    T1.getInfo();
    Teacher T2(T1); // copy constructor
    T2.getInfo();
    return 0;
}