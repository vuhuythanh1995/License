#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    int choose;
    string saveText,saveText2,saveText3;
    cin>>choose;
    switch(choose)
    {
    case 1:{
        system("clear");
        //ifstream myfile("/home/october/Desktop/data.cfg",ios::in);
        ifstream myfile("/home/october/Works/unique/ics_license/license.cfg",ios::in);

        getline(myfile,saveText);
            if(myfile.is_open()){
                cout<<"license ok \ncheck license ..."<<saveText<<endl;
                myfile.close();
            }
            else{
                cout<<"license not ok"<<endl;
            }
            break;
        }
    case 2:{
        system("clear");
        ifstream getLicence("/home/october/Works/unique/ics_license/license.cfg",ios::in);
            getline(getLicence,saveText2);

        ifstream getLicence2("/home/october/Works/unique/ics_license/license.cfg",ios::in);
            getline(getLicence2,saveText3);

            if(saveText2==saveText3){
                cout<<"License OK"<<endl;
            }
            else{
                cout<<"License NOT OK"<<endl;
            }

            break;
        }
    return 0;
    }
}

