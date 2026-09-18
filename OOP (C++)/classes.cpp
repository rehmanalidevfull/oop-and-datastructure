#include <iostream>
#include <string>
using namespace std;


// Classes are the blue print of an entity. it explain or tell what an object has and what it can perfom.

class HelloWorld{
private:
    string contact = "0321-xxxxxxxx";
public:
    string name = "Rehman ALi";
    string rollno = "BSSE-E2-55";
    string className = "SE";

    // action 
    void showDetail(){
        cout<<"Name: "<<this->name<<endl;
        cout<<"Class: "<<this->className<<endl;
        cout<<"RollNo: "<<this->rollno<<endl;
        cout<<"Contact: "<<this->contact<<endl;
    }
    void changename(string name){
        this->name = name;
        cout<<"Name Changed to "<< name<< endl;
    }
    void setContact(string cont){
        this->contact = cont;
    }
};

int main(){
    // creating object of class
    HelloWorld obj;
    obj.showDetail();
    obj.changename("Ali");
    obj.showDetail();
    return 0;
}
