#include <iostream>
using namespace std;

int main(){
    //hume sare no mtlb jitna input diya hai us no tk ka sum nikalna hai

    int n;
    cin >> n;

    // toh iske liye hume ek (i) or (sum) ki need lgegi or i hume output dega or sum hume output lane me
    int i = 1;
    int sum = 0;

    //ab ek while loop bnaege 
    while (i<=n)
    {
        sum = sum + i;
        i = i + 1;
    }
    //hum ise bahar isliye likh rhe hai taki hume sidha sum kiya hua no hi mile sare no ni mtlb last wala n
    cout << "The sum of all no is :" << sum << endl; 

}