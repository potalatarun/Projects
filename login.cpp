#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool alreadythere(){
    string username,password,un,pa;
    cout<<"Enter UserName:";cin>>username;
    cout<<"Enter PassWord: ";cin>>password;

    ifstream read("G:\projects_c++"+username+".txt");
    getline(read,un);
    getline(read,pa);
    if(un==username && password==pa){
        return true;
    }
    else return false;

}
int main(){
    string username,password;
    int choice;
    cout<<"1.Register\n"<<"2.Login\n"<<"Enter your choice";cin>>choice;
    if(choice==1){
        cout<<"Enter UserName:";cin>>username;
        cout<<"Enter PassWord:";cin>>password;
        ofstream file;
        file.open("G:\projects_c++"+ username + ".txt");
        file<<username<<"\n"<<password;
        main();
    }
    else if(choice==2){
        bool status;
        status=alreadythere();
        if(status==true){
            cout<<"Sucessfully Logedin!!"<<endl;
            system("PAUSE");
            return 1;
        }
        else{
            cout<<"False Login \n Login Failed"<<endl;
            system("PAUSE");
            return 0;
        }
    }
}