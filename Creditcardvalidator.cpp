// creditcard validation project 

#include<iostream>
#include<string>
using namespace std;
bool isValidCredit(  string & Creditcardnumber){
    int length=Creditcardnumber.length();
    int total=0;
    int parity=length%2;                //to check even or odd
    for (int i = 0; i < length; i++)
    {
        int digit=Creditcardnumber[i]-'0';

        //double every even places number 
        if(i%2==parity){                               //2 4 5 7 8
            digit*=2;                                    // *   *2  
            if(digit>9){                                        //16-9    
                digit-=9;
            }
        }
        total+=digit;
    }
    return total%10==0;

}

int main(){
    string str;
    cout<<"  Enter credit card Number to check Valid or not?"<<endl;             //2655206758915257
    cin>>str;
    if(isValidCredit(str)){
    cout<<"Credit card is valid ";
    }
    else{
        cout<<"Credit card is not valid ";
    }
}


    
