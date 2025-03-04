#include<iostream>
using namespace std;

int sum(int a, int b){
    return a+b;
}
int diff(int a, int b){
    return a-b;
}
int main() {

    cout<<"the sum is: ";
    int ans= sum(5, 10);
    cout<< ans<<endl;

    cout<<"the difference is: ";
    int answ= diff (9, 6);
    cout<< answ << endl;

    //user input values
    int n, m;
    cout<<"Enter the two values to be added: ";
    cin >> n >> m;
    int answer = sum(n, m);
    cout<<"The sum is: ";
    cout<< answer<<endl;

    return 0;
}