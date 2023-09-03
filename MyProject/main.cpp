#include <iostream>

using namespace std;
int main()
{

    //Declare the variable
    float Helwan1 , Helwan2,hHelwan;
    float H1V , H2V , HHV ;
    float H1VC , H2VC , HHVC;
    char ans;
    cout << "- Helwan 1 : ";
    cin >> Helwan1;
    cout << "\n- Helwan 2 : ";
    cin >> Helwan2;
    cout << "\n- Hadayeq Helwan : ";
    cin >> hHelwan;


    visaCheck:
    cout << "\n- Visa? (Y/N) ";
    cin >> ans;
    if(ans == 'Y' || ans == 'y'){
        cout << "\n Helwan 1 visa : ";
        cin >> H1V;
        cout << "\n Helwan 2 visa : ";
        cin >> H2V;
        cout << "\n Hadayeq Helwan visa : ";
        cin >> HHV;
    }
    else if (ans == 'n' || ans == 'N'){
        cout << "\n OK";
    }
    else{
            cout << "\n Unknown Answer Choose Again\n";
        goto visaCheck;
    }

    vodaCheck:
    cout << "\n Vodafone Cash ? (Y/N) ";
    cin >> ans;
     if(ans == 'Y' || ans == 'y'){
        cout << "\n Helwan 1 Vodafone Cashe : ";
        cin >> H1VC;
        cout << "\n Helwan 2 Vodafone Cashe : ";
        cin >> H2VC;
        cout << "\n Hadayeq Helwan Vodafone Cashe : ";
        cin >> HHVC;
     }
     else if (ans == 'n' || ans == 'N'){
        cout << "\n OK";
    }
    else{
            cout << "\n Unknown Answer Choose Again\n";
        goto vodaCheck;
    }
    return 0;
}


