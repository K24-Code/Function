#include<iostream>
using namespace std;

// void AND INT OR OTHER RETURN TYPE FUNCTION
int getMultiplication(int x, int y, int z){
    int result = x*y*z;
    return result;
}

// to print 10  of times names
void printNameTenTimes(){
    for(int i =1; i<=10; i++){
        cout<<"babber couse complete karna hai"<<endl;
    }
}

// to print table of n
void printMultiples(int num){
    for(int i=0; i<=10;i++){
        cout<< num*i << endl;
    }
}

// to convert into celcius
int convertIntoCelcius(int far){
    int celcius= (far - 32)*5/9;
    return celcius;
} 

// to convert into upper case
char convertIntoUpperCase(char ch){
    char ans = ch - 'a' + 'A';
    return ans;
}
int main() {
    
    // function calling
    int multiplicationAnswer = getMultiplication(5, 4 ,3);
    cout<< multiplicationAnswer<<endl;

    printNameTenTimes();
    printMultiples(6);

    int ans = convertIntoCelcius(96);
    cout<<"in celcius: "<< ans << endl;

    char result = convertIntoUpperCase( 'k');
    cout<<"in upppercase: "<< result<< endl;

    return 0;
}