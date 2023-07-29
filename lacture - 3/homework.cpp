#include <iostream>
using namespace std;

int main(){
    char val;
    cin >> val;

    if (val >='A' && val <='Z')
    {
        cout << "this is ^case " << endl;
    }
    else if (val >='a' && val <='z')
    {
        cout<<"this is lowercase " << endl;
    }
    else{
        cout << "This is numberrrrr" << endl;
    }
    
}