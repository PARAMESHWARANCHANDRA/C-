#include <iostream>

using namespace std;

int main()
{
    int P;
    int C;
    int R;
    
    cout<< "Enter no.of participants =";
    cin>> P;
    
    if (P%4 == 0){
        C= P/4;
        cout<<"No.of participants in Group A="<< C << endl;
        cout<<"No.of participants in Group B="<< C << endl;
        cout<<"No.of participants in Group C="<< C << endl;
        cout<<"No.of participants in Group D="<< C << endl;
    }else{
        C=P/4;
        R=P%4;
        cout<<"No.of participants in Group A="<< C << endl;
        cout<<"No.of participants in Group B="<< C << endl;
        cout<<"No.of participants in Group C="<< C << endl;
        cout<<"No.of participants in Group D="<< C + R << endl;
        
    }

    return 0;
}
