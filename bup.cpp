#include<iostream>
#include<string>
using namespace std;

user guest;

struct user{
    char uid[30];
    char pass[10];
    char role[10];
};

struct det{
    char name[30];
    char disease[50];
    char symp[50];
    char famhis[250];
    char medi[250];
    char diet[250];
    char proc[250];
    char res[200];
};

user one{
    "Parth",
    "abc",
    "patient",
};

user two{
    "Anish",
    "abc",
    "doctor",
};

user three{
    "Om",
    "abc",
    "thirdp",
};

det done{
   "Parth",
   "dengue",
   "nausea, vomiting, rash, aches and eye pain",
   "no particular family history",
   "over-the-counter drug acetaminophen(tylenol) helped reduce muscle pain and fever.",
   "daily consumption of papaya and herbal tea along with blend of medicinal(neem) leaves. Diet was mostly liquid based.",
   "patient was given regular doses of pain relievers and was resting for 3 straight days. Adequate amount of liquids were provided through diet.",
   "The patient was cured of dengue in about 4 days due to proper procedure and medication.",
};

void checkuser(){
    char uname[30];
char upass[10];
cout<<"Enter you uid: "<<endl;
cin>>uname;
cout<<"enter the password for the uid "<<uname<<endl;
cin>>upass;
if(uname=="Parth"){
    if(upass=="abc"){
        guest=one;}}
else if(uname=="Anish"){
    if(upass=="abc"){
        guest=two;}}
else if(uname=="Om"){
    if(upass=="abc"){
        guest=three;}}
else{
    cout<<"that usernme does not exist."<<endl;}
};


int main(){
checkuser();

}