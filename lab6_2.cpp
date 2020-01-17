#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(){
    int number=0, id ;
    string name , movie , date , text;

    cout<<"Fahsai: Sawadee ka...Can you tell me your name?"<<"\n";
    cout<< "?????: "<< name ;
    getline(cin,name);
    cout<< "Fahsai: Wow!!!"<< name << " that is a really cool name."<<"\n";
    cout<< "Fahsai: I think you are Engineering student. What is your student ID?"<<"\n";
    cout<< name << ": ";
    cin>> id ;
    cin.ignore();
    int G= (id /pow(10,7))-12;
    cout<< "Fahsai: I think you may be GEAR" << G <<"." << "I have a free movie tickets for you."<<"\n";
    cout<<"Fahsai: Let's go to cinema together!!!"<<"\n";
    cout<<"Fahsai: What movie do you want to watch?"<<"\n";
    cout<< name <<": ";
    getline(cin,movie);
    cout<<"Fahsai: So....which day are you free to go with me?"<<"\n";
    cout<< name <<": ";
    getline(cin,date);
    cout<<"Fahsai: " << date <<"....that is OK!!! I'm looking forward to watch "<< movie << "with you."<<"\n";
    cout<< name <<": ";
    getline(cin,text);
    cout<<"Fahsai: 555+ see you "<< date << ". Bye Bye \(^ ^)/ ";




}



