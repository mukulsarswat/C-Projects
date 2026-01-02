#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>

using namespace std;

string passwordGenerator(int size, int num = 0, int symb = 0)   {  // Already defined values of num and symbols to add into your password if not taken as input.
    string resultPassword = "";
    string numbers = "1234567890";
    string alphabets = "qwertyuiopasdfghjklzxcvbnmQWERTYUIOPASDFGHJKLZXCVBNM";
    string symbols = "!~#$&_-=?/";
    srand(time(0));

    while (size)    {
        resultPassword += alphabets[rand() % alphabets.size()];
        size--;

        if(num && size) {
            resultPassword += numbers[rand() % 10];
            size--;
            num--;
        }

        if(symb && size) {
            resultPassword += symbols[rand() % symbols.size()];
            size--;
            symb--;
        }
    }
    return resultPassword;
}

int main() {
    while(true) {
        int number,specials,len;
        cout<<"Password length"<<endl;
        cin>>len;
    cout<<"How many numbers do you want to add into your password"<<endl;
    cin>>number;
   cout<<"How many specials do you want to add into your password" <<endl;
   cin>>specials;
   if(len<number+specials){
       cout<<"Error,check inputs"<<endl;
       
   }
    else cout<<passwordGenerator(len,number,specials);
    cout<<endl;
       
   }
    return 0;
}
