/*#include <iostream>
using namespace std;
int main() {
    cout << "Hello, World!" << endl;
    std::cout<< " This project uses the C++17 language standard version. ie if "<<"\n using name space std \n isn't used " << std::endl;
    return 0;
}*/

/*#include "iostream"
int main() {
    int y=5;  // x is called as variable or identifier 
    // OR
    int x;
    x=5;
    std::cout<< x << y;
    // no need of return 0 in modern compilers
}*/

/*#include <iostream>
int main(){
    //integer
    int x=9.8;
    //double
    double y=9.8;
    //string 
    std::string z="Rehaan";
    //char
    char a='d';
    //boolean
    bool b=true;
}*/

/*#include <iostream>
int main() {
    const double PI=3.12;
    std::cout<<PI;
}*/

/*#include <iostream>
namespace x1{
    int x=1;
}
int main(){
    int x=0;
    std::cout<<x<<x1::x;
}
int main(){
    using namespace x1;
    std::cout<<x;
}*/

/*#include <iostream>
int main(){
    using std::string;
    string name="Rehaan";
}
int main(){
    using namespace std;
    int x=5;
    cout<<x;
}*/

/*#include <iostream>
typedef std::string text_t;
using integer=int;
int main(){
    text_t name="rehaan";
    integer marks=90;
    std::cout<<name<<'\t'<<marks;
}*/

//Arthmetic Operators! - Use Serpent Notebook!

/*#include <iostream>
int main(){
    double x=10.66;
    double y=(int) x;
    char c=100;
    std::cout<<x<<y;
    std::cout<<c;
    int a=8;
    int b=10;
    double scr=a/(double)b *100;
    std::cout<<scr;
}*/

/*#include <iostream>
int main(){
    std::string nm;
    std::cout<<"Whats your name?\n";
    std::cin>>nm;
    std::cout<<nm;      // << Insertion Operator >> Extersion Operator
}*/
/*#include <iostream>
int main(){
    int age;
    std::string nme;                            
                                                Works fine until age is getline is used at beginning
                                                but if getline is used after using cin then it skips the getline part 
                                                as cin has inbuilt \n as getline takes \n as input.                                                                                                           
    std::cout<<"Enter your full name\n";             
    std::getline(std::cin,nme);
    std::cout<<"Enter your age\n";
    std::cin>>age;  
    std::cout<<age<<'\n'<<nme;
}*/
/*#include <iostream>
int main(){
    int age;
    std::string nme; 
    std::cout<<"Enter your age\n";
    std::cin>>age;                                                                                                                           
    std::cout<<"Enter your full name\n";              //See the error as run this code
    std::getline(std::cin,nme);
    std::cout<<age<<'\n'<<nme;
}*/
/*#include <iostream>
int main(){
    int age;
    std::string nme; 
    std::cout<<"Enter your age\n";
    std::cin>>age;                                                                                                                           
    std::cout<<"Enter your full name\n"; 
    std::getline(std::cin>>std::ws,nme);                     //Issue Resolved!
    std::cout<<age<<'\n'<<nme;
}*/

//Mathematical Operations - https://cplusplus.com/reference/

/*#include <iostream>
int main(){
    int Age;
    std::cout<<"Whats your age?"<<std::endl;
    std::cin>>Age;
    if(Age>18 || Age==18){
        std::cout<<"You are eligible to vote!"<<std::endl;
    }
    else if(Age<0 && Age!=0){
        std::cout<<"You are not eligible to vote! as you're not born yet!"<<std::endl;
    }
    else{
        std::cout<<"You are not eligible to vote!"<<std::endl;
    }
}*/

//Bitwise Operators - AND | OR | NOT | XOR