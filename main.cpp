#include <iostream>
#include <stdlib.h>
#include <string>
#include <mysql.h>


#include <cppconn/driver.h>
#include <cppconn/exception.h>
#include <cppconn/resultset.h>
#include <cppconn/statement.h>


using namespace std;

string name;
string pass;
string role;

struct user{
    string uid;
    string pass;
    string role;
};

user guest;

struct det{
    string name;
    string disease;
    string symp;
    string famhis;
    string medi;
    string diet;
    string proc;
    string res;
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
string uname;
string upass;
cout<<"Enter you uid: "<<endl;
cin>>uname;
cout<<"enter the password for the uid "<<uname<<endl;
cin>>upass;
if(uname=="Parth"){
    if(upass=="abc"){
        cout<<"hello"<<endl;
        guest=one;}}
if(uname=="Anish"){
    if(upass=="abc"){
        guest=two;}}
if(uname=="Om"){
    if(upass=="abc"){
        guest=three;}}
};

int main(){
 cout << endl;
cout << "Running 'SELECT 'Hello World!' »AS _message'..." << endl;
try {
    MYSQL 
sql::Driver *driver;
sql::Connection *con;
sql::Statement *stmt;
sql::ResultSet *res;
/* Create a connection */
driver = get_driver_instance();
con = driver->connect("tcp://127.0.0.1:3306", "root", "root");
/* Connect to the MySQL test database */
con->setSchema("sphack");
stmt = con->createStatement();
res = stmt->executeQuery("SELECT 'Hello World!' AS _message");
while (res->next()) {
cout << "\t... MySQL replies: ";
/* Access column data by alias or column name */
cout << res->getString("_message") << endl;
cout << "\t... MySQL says it again: ";
/* Access column data by numeric offset, 1 is the first column */
cout << res->getString(1) << endl;
}
delete res;
delete stmt;
delete con;
} catch (sql::SQLException &e) {
cout << "# ERR: SQLException in " << __FILE__;
cout << "(" << __FUNCTION__ << ") on line " »
<< __LINE__ << endl;
cout << "# ERR: " << e.what();
cout << " (MySQL error code: " << e.getErrorCode();
cout << ", SQLState: " << e.getSQLState() << " )" << endl;
}
cout << endl;
checkuser();
string data;
cout<<"welcome Mr."<<guest.uid<<endl;
cout<<"please select which details would you like to access:" <<endl;
if(guest.role=="patient"){
    cout<<" name, family history, disease, symptoms, medication, diet, medical process and result"<<endl;
    cin>>data;
    if(data=="name"){cout<<done.name<<endl;}
    else if(data=="family history"){cout<<done.famhis<<endl;}
    else if(data=="disease"){cout<<done.disease<<endl;}
    else if(data=="symptoms"){cout<<done.symp<<endl;}
    else if(data=="medication"){cout<<done.medi<<endl;}
    else if(data=="diet"){cout<<done.diet<<endl;}
    else if(data=="medical process"){cout<<done.proc<<endl;}
    else if(data=="result"){cout<<done.res<<endl;}}
if(guest.role=="doctor"){
    cout<<"name, disease, medication, diet, medical process and result"<<endl;
     if(data=="name"){cout<<done.name<<endl;}
     else if(data=="disease"){cout<<done.disease<<endl;}
     else if(data=="medication"){cout<<done.medi<<endl;}
    else if(data=="diet"){cout<<done.diet<<endl;}
    else if(data=="medical process"){cout<<done.proc<<endl;}
    else if(data=="result"){cout<<done.res<<endl;}}
if(guest.role=="thirdp"){
    cout<<"name, disease, diet and result"<<endl;
     if(data=="name"){cout<<done.name<<endl;}
     else if(data=="disease"){cout<<done.disease<<endl;}
     else if(data=="diet"){cout<<done.diet<<endl;}
     else if(data=="result"){cout<<done.res<<endl;}}
return EXIT_SUCCESS;
}
   
}
