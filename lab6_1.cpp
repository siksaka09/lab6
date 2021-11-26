#include<iostream>
using namespace std;

int main(){
    int i=0, even=0, odd=0;
    int x;


    while(i< 1){

        cout << "Enter an integer: ";
        cin >> x;

        if(x%2 == 0 and x != 0){
            even++;
        }
        else if(x%2 == 1 and x !=0){
            odd++;
        }
        else{
            i++;
        }
    }

    cout  << "#Even numbers = " << even << "\n";
    cout  << "#Odd numbers = " << odd ;

    return 0;
    
}
