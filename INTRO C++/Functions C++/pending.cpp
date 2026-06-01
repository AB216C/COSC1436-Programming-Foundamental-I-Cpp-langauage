







#include <iostream>

using namespace std;

//Function prototype

char menu();
void addFractions(int n1, int d1, int n2, int d2);
void subtractFractions(int n1, int d1, int n2, int d2);
void multiplyFractions(int n1, int d1, int n2, int d2);
void divideFractions(int n1, int d1, int n2, int d2);

int main() 
{
    int n1, n2, d1, d2;
    

    cout<<"Enter numerator of the first fraction:";
    cin>>n1;

    cout<<"Enter denominator of the first fraction:";
    cin>>d1;

    char op = menu();

    cout<<"Enter numerator of the second fraction:";
    cin>>n2;

    cout<<"Enter denominator of the second fraction:";
    cin>>d2;

    if(d1==0 || d2==0)
    {
        cout<<"Error:Denominator can not be zero"<<endl;
        return 1;
    }

    switch(op)
    {
        case '+':
            addFractions(n1,d1,n2,d2);
            break;
        case '-':
            subtractFractions(n1,d1,n2,d2);
            break;
        case '*':
            multiplyFractions(n1,d1,n2,d2);
            break;
        case '/':
            if(n2==0)
            {
                cout<<"can not divide by zero"<<endl;
                return 1;
            }
            divideFractions(n1,d1,n2,d2);
            break;
        default:
            cout<<"Invalid operation";
            return 1;
    }

    return 0;

}
//FUNCTIONS LIST

char menu()
{
    char op;
    cout<<"Fraction Calculator \n";
    cout<<"Enter fraction as numerator denominator\n";
    cout<<"Chose Operation( + , - , * , / ):";
    cin>>op;
    return op;
}

void addFractions(int n1, int d1, int n2, int d2)
{
    int num = n1*d2 + n2*d1;
    int den = d1*d2;

   cout <<n1<<"/"<<d1<<"+"<<n2<<"/"<<d2<<"="<< num << "/" << den << endl;
}
void subtractFractions(int n1, int d1, int n2, int d2)
{
    int num = n1*d2 - n2*d1;
    int den = d1*d2;

    cout <<n1<<"/"<<d1<<"-"<<n2<<"/"<<d2<<"="<< num << "/" << den << endl;}
void multiplyFractions(int n1, int d1, int n2, int d2)
{
    int num = n1*n2;
    int den = d1*d2;

   cout <<n1<<"/"<<d1<<"*"<<n2<<"/"<<d2<<"="<< num << "/" << den << endl;
}
void divideFractions(int n1, int d1, int n2, int d2)
{
    int num = n1*d2;
    int den = d1*n2;

   cout <<n1<<"/"<<d1<<" / "<<n2<<"/"<<d2<<"="<< num << "/" << den << endl;
}




