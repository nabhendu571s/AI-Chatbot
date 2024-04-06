#include<bits/stdc++.h>
#include<algorithm>
#include<math.h>
#include<string>
#include<iostream>
using namespace std;
void display(){
    unordered_map<string,string>v;
    string s;
    transform(s.begin(),s.end(),s.begin(),::tolower);
    cout<<"BOT: "<<" "<<"Welcome user , i am a chatbot! "<<endl;
    while(true)
    {  
        cout<<"Your message: ";
        getline(cin,s);
        transform(s.begin(),s.end(),s.begin(),::tolower);
        if(s=="hi"||s=="hello"||s=="hey")
        {
            cout<<"BOT:"<<" "<<"Hello ! How can I help you ?"<<endl;
        }
        else if(s=="how are you!"||s=="are you ok!")
        {
            cout<<"BOT:"<<" "<<"As a chatbot i have no emotional states"<<endl;
        }
        else if(s=="what's my name")
        {
            if(v.find("name")!=v.end())
            {
                cout<<"BOT:"<<" "<<"Your name is "<<v["name"]<<endl;
            }
            else
            {
                cout<<"BOT:"<<" "<<"Sorry you didn't tell me your name yet. Tell me your name"<<endl;
            }
        } else if(s.find("my name is")!=string::npos)
            {
             size_t pos=s.find("my name is");
             string name =s.substr(pos+11);
             v["name"]= name;
             cout<<"BOT:"<<" "<<"Nice to meet you "<<name<<endl; 
        }
        else if(s=="bye"||s=="see you later"||s=="later")
        {
            cout<<"BOT:"<<" "<<"Bye";
            break;
        }
        else
        {
            cout<<"BOT:"<<" "<<"I didn't get that , sorry"<<endl;
        }
    }
    
}
int main(){
    int t=1;
    while(t--){
        display();
    }
    return 0;
}