/*
#include<iostream>
using namespace std;
class Student{
    //Properties
    string name; //Private
    public:
    float cgpa; //Public
    //Methods
    void getPercentage(){
        cout<<cgpa*10<<"%"<<endl;
    }
    //Setters
    void setName(string nameVal){
        name = nameVal;
    }
    void setCgpa(float cgpaVal){
        cgpa = cgpaVal;
    }
    //Getters
    string getName(){
        return name;
    }
    float getCgpa(){
        return cgpa;
    }
};
int main(){
    Student s1; //Object
    s1.cgpa = 9.0;
    s1.setName("Akshat");
    s1.setCgpa(9.1);
    cout<<s1.getName()<<endl;
    cout<<s1.getCgpa()<<endl;
}
*/
//Constructor
/*
#include<iostream>
using namespace std;
class Car{
    string name;
    string color;
    public:
    //Constructor 
    Car(string name , string color){
        this->name = name;
        this->color = color;
        cout<<"Constructor \n";
    }
    void start(){
        cout<<"Car has Started..\n";
    }
    void stop(){
        cout<<"Car has Stopped..\n";
    }
    //Getter
    string getName(){
        return name;
    }
    string getColor(){
        return color;
    }
};
int main(){
    Car c1 ("Maruti 800" , "White");
    cout<<"Car name: "<<c1.getName()<<endl;
    cout<<"Car color: "<<c1.getColor()<<endl;
}
*/
//Practise Question
/*
#include<iostream>
using namespace std;
class User{
    private:
    int id;
    string password;
    public:
    string username;
    User(int id){
        this->id = id;
    }
    //Getters
    string getPassword(){
        return password;
    }
    //Setters
    void setPassword(string password){
        this->password = password;
    }
};
int main(){
    User user1(101);
    user1.setPassword("akshat123");
    user1.username = "Akshat";
    cout<<"User name: "<<user1.username<<endl;
    cout<<"Password: "<<user1.getPassword()<<endl;
}
*/
//Copy Contructor
/*
#include<iostream>
using namespace std;
class Car{
    public:
    string name;
    string color;
    //Constructor 
    Car(string name , string color){
        this->name = name;
        this->color = color;
    }
    Car(Car &orignal){
        cout<<"Copying..\n";
        name = orignal.name;
        color = orignal.color;
    }
};
int main(){
    Car c1 ("Maruti 800" , "White");
    Car c2(c1); // Custom Copy
    cout<<c2.name<<endl;
    cout<<c2.color<<endl;
}
*/
//Shallow Copy
/*
#include<iostream>
using namespace std;
class Car{
    public:
    string name;
    string color;
    int *mileage;
    //Constructor 
    Car(string name , string color){
        this->name = name;
        this->color = color;
        mileage  = new int; //Dynamic Allocation
        *mileage = 12;
    }
    Car(Car &orignal){
        cout<<"Copying..\n";
        name = orignal.name;
        color = orignal.color;
        mileage = orignal.mileage;
    }
};
int main(){
    Car c1 ("Maruti 800" , "White");
    Car c2(c1); // Custom Copy
    cout<<c2.name<<endl;
    cout<<c2.color<<endl;
    cout<<*c2.mileage<<endl;
    *c2.mileage = 10; //Change in c2 will affect c1 cause they are pointing same memory in heap.
    cout<<*c1.mileage<<endl; //10
}
*/
/*
#include<iostream>
using namespace std;
class Car{
    public:
    string name;
    string color;
    int *mileage;
    //Constructor 
    Car(string name , string color){
        this->name = name;
        this->color = color;
        mileage  = new int; //Dynamic Allocation
        *mileage = 12;
    }
    Car(Car &orignal){
        cout<<"Copying..\n";
        color = orignal.color;
        name = orignal.name;
        mileage  = new int; //Dynamic Allocation
        *mileage = *orignal.mileage;
    }
};
int main(){
    Car c1 ("Maruti 800" , "White");
    Car c2(c1); // Custom Copy
    cout<<c2.name<<endl;
    cout<<c2.color<<endl;
    cout<<*c2.mileage<<endl;
    *c2.mileage = 10; //Change in c2 will not affect c1 cause they are pointing different memory in heap.
    cout<<*c1.mileage<<endl; //12
}
*/
//Dectructor
/*
#include<iostream>
using namespace std;
class Car{
    public:
    string name;
    string color;
    int *mileage;
    //Constructor 
    Car(string name , string color){
        this->name = name;
        this->color = color;
        mileage  = new int; //Dynamic Allocation
        *mileage = 12;
    }
    Car(Car &orignal){
        cout<<"Copying..\n";
        color = orignal.color;
        name = orignal.name;
        mileage  = new int; //Dynamic Allocation
        *mileage = *orignal.mileage;
    }
    //Destructor
    ~Car(){
        cout<<"Deleting...\n";
        if(mileage!=NULL){
            delete mileage;
            mileage = NULL;
        }

    }
};
int main(){
    Car c1 ("Maruti 800" , "White");
    cout<<c1.name<<endl;
    cout<<c1.color<<endl;
    cout<<*c1.mileage<<endl;
}
*/
//Inheritence
/*
#include<iostream>
#include<string>
using namespace std;
class Animal {
    public:
    string color;
    void eat(){
        cout<<"Eats..\n";
    }
    void breathe(){
        cout<<"breathes..\n";
    }
};
class Fish : protected Animal{ //inheritance
    public:
    int fins;
    void swim(){
        eat(); //Called only here in protected but in private we can't able to call it here also.
        cout<<"Swims..\n";
    }
};
int main(){
    Fish f1;
    f1.fins = 3;
    cout<<f1.fins<<endl;
    f1.swim();
    //f1.breathe(); // In protected and private its not able to call here...
}
*/
//Operator Overloading
/*
#include<iostream>
using namespace std;
class Complex{
    int real;
    int imag;
    public:
    Complex(int r , int i){
        real = r;
        imag = i;
    }
    void showNum(){
        cout<<real<<" + "<<imag<<"i \n";
    }
    //Operator overloading
    Complex operator + (Complex &c2){
        int resReal = this->real + c2.real;
        int resImag = this->imag + c2.imag;
        Complex c3(resReal , resImag);
        return c3;
    }
};
int main(){
    Complex c1(1,2);
    Complex c2(3,4);
    c1.showNum();
    c2.showNum();
    Complex c3 = c1 + c2;
    c3.showNum();
}
*/
//Static Keyword ---> Function
/*
#include<iostream>
using namespace std;
void counter(){
    static int count = 0;
    count++;
    cout<<"count = "<<count<<endl;
}
int main(){
    counter();
    counter();
    counter();
}
*/
//Static Keyword ---> Class
/*
#include<iostream>
using namespace std;
class Example{
    public:
    static int x;
};
int Example::x=0; //Scope
int main(){
Example eg1;
Example eg2;
Example eg3;
cout<<eg1.x++<<endl; //0
cout<<eg2.x++<<endl; //1
cout<<eg3.x++<<endl; //2
}
*/
//Static Keyword ---> Object
/*
#include<iostream>
using namespace std;
class Example{
    public:
    Example(){
        cout<<"Constructor..\n";
    }
    ~Example(){
        cout<<"Destructor..\n";
    }
};
int main(){
int a = 0;
if(a==0){
    static Example eg1;
}
cout<<"Code ending..\n"; //Called before the destructor
}
*/
//Friend Classes and Friend Funtion
/*
#include<iostream>
#include<string>
using namespace std;
class A{
    string secret = "Secret Data";
    friend class B;
    friend void revealSecret(A &obj);
};
class B{ //becomes a friend class of A
    public:
    void showSecret(A &obj){
        cout<<obj.secret<<endl;
    }
};
void revealSecret(A &obj){
    cout<<obj.secret<<endl;
}
int main(){
    A a1;
    B b1;
    b1.showSecret(a1); //Friend Class
    revealSecret(a1); //Friend Function
}
*/