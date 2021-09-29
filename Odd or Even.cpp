#include <iostream>

using namespace std;

int main()
{
    int number;
    cout<<"Enter number:"<<endl;
    cin>>number;
    
    if(number!=0){
        if ((number%2)==0){
            cout<<"The given number is even"<<endl;
        }else{
            cout<<"The given number is negative"<<endl;
        }
    }else{
        cout<<"The given is zero and it is neither even nor odd"<<endl;
    }
        
    return 0;
}
