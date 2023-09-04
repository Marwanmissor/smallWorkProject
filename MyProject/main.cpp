#include <iostream>
#include <fstream>
#include <ctime>

using namespace std;
int main()
{

    // Declare the variable
    float Helwan1 = 0, Helwan2 = 0, hHelwan = 0, Ghelwan = 0;
    float H1V = 0, H2V = 0, HHV = 0, GHV = 0;
    float H1VC = 0, H2VC = 0, HHVC = 0, GHVC = 0;
    float TH1, TH2, THH , TGH;
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
    if (ans == 'Y' || ans == 'y')
    {
        cout << "\n Helwan 1 visa : ";
        cin >> H1V;
        cout << "\n Helwan 2 visa : ";
        cin >> H2V;
        cout << "\n Hadayeq Helwan visa : ";
        cin >> HHV;
    }
    else if (ans == 'n' || ans == 'N')
    {
        cout << "\n \t\tOK\n";
    }
    else
    {
        cout << "\n\t\t Unknown Answer Choose Again\n";
        goto visaCheck;
    }

vodaCheck:
    cout << "\n Vodafone Cash ? (Y/N) ";
    cin >> ans;
    if (ans == 'Y' || ans == 'y')
    {
        cout << "\n Helwan 1 Vodafone Cashe : ";
        cin >> H1VC;
        cout << "\n Helwan 2 Vodafone Cashe : ";
        cin >> H2VC;
        cout << "\n Hadayeq Helwan Vodafone Cashe : ";
        cin >> HHVC;
    }
    else if (ans == 'n' || ans == 'N')
    {
        cout << "\n \t\tOK\n";
    }
    else
    {
        cout << "\n \t\tUnknown Answer Choose Again\n";
        goto vodaCheck;
    }
    TH1 = Helwan1 - H1V - H1VC;
    TH2 = Helwan2 - H2V - H2VC;
    THH = hHelwan - HHV - HHVC;
    cout << "\nHelwan 1 = " << TH1 << endl;
    cout << "\nHelwan 2 = " << TH2 << endl;
    cout << "\nHadayeq Helwan = " << THH << endl;

    // Get the current time
    time_t currentTime = time(nullptr);

    // Convert the current time to a struct tm
    tm *timeInfo = localtime(&currentTime);

    // Check if today is Saturday (where Saturday is represented as 6)
    if (timeInfo->tm_wday == 6)
    {
        cout << "\n Friday : ";
        cin >> Ghelwan;

    GvisaCheck:
        cout << "\n- Visa? (Y/N) ";
        cin >> ans;
        if (ans == 'Y' || ans == 'y')
        {
            cout << "\n Visa : ";
            cin >> GHV;
        }
        else if (ans == 'n' || ans == 'N')
        {
            cout << "\n \t\tOK\n";
        }
        else
        {
            cout << "\n\t\t Unknown Answer Choose Again\n";
            goto GvisaCheck;
        }
    GvodaCheck:
        cout << "\n Vodafone Cash ? (Y/N) ";
        cin >> ans;
        if (ans == 'Y' || ans == 'y')
        {
            cout << "\n Helwan 1 Vodafone Cashe : ";
            cin >> GHVC;
        }
        else if (ans == 'n' || ans == 'N')
        {
            cout << "\n \t\tOK\n";
        }
        else
        {
            cout << "\n \t\tUnknown Answer Choose Again\n";
            goto GvodaCheck;
        }
    }
    TGH = Ghelwan - GHV - GHVC;
    // file i/o
    ofstream out;
    out.open("الايراد.txt");
    ///////////////////////////////////////////////////////////
    if(H1V == 0 && H1VC == 0){
        out << "\n اجمالي ايراد حلوان 1 = "<< TH1 << endl;
        out << "\n================================\n";
    }
    else if (H1V !=0 && H1VC == 0){
        out << "\n ايراد حلوان 1 = "<< Helwan1 << endl;
        out << "\n فيزا حلوان 1 = " << H1V << endl;
        out << "\n اجمالي ايراد حلوان 1 يعد خصم الفيزا = " << TH1 << endl;
        out << "\n=======================================\n";
    }
    else if (H1V == 0 && H1VC !=0 ){
        out << "\n ايراد حلوان 1 = "<< Helwan1 << endl;
        out << "\n فودافون كاش حلوان 1 = " << H1VC << endl;
        out << "\n اجمالي حلوان 1 بعد خصم فودافون كاش = " << H1VC;
        out << "\n=======================================\n";
    }
    else if ( H1V != 0 && H1VC != 0){
        out << "\n ايراد حلوان 1 = "<< Helwan1 << endl;
        out << "\n فيزا حلوان 1 = " << H1V << endl;
        out << "\n فودافون كاش حلوان 1 = " << H1VC << endl;
        out << "\n اجمالي حلوان 1 بعد خصم الفيزا و فودافون كاش = "<<TH1<<endl;
        out << "\n=======================================\n";
    }
////////////////////////////////////////////////////////////////////////
    if (H2V == 0 && H2VC == 0){
        out << "\n اجمالي ايراد حلوان 2 = " << TH2 << endl;
        out << "\n=======================================\n";

    }
    else if(H2V != 0 && H2VC == 0){
        out << "\n ايراد حلوان 2 = " << Helwan2 << endl;
        out << "\n فيزا حلوان 2 = "<< H2V<<endl;
        out << "\n اجمالي حلوان 2 بعد خصم حلوان 2 = " << TH2 << endl;
        out << "\n=======================================\n";
    }
    else if (H2V == 0 && H2VC !=0 ){
    out << "\n ايراد حلوان 2 = " << Helwan2 << endl;
    out << "\n فودافون كاش حلوان 2 = "<< H2VC << endl;
    out << "\n اجمالي حلوان 2 بعد خصم فودافون كاش = " << TH2 << endl;
    out << "\n=======================================\n";
    }
    else if (H2V != 0 && H2VC != 0){
        out << "\n ايراد حلوان 2 = " << Helwan2 << endl;
        out << "\n فيزا حلوان 2 = "<< H2V<<endl;
        out << "\n فودافون كاش حلوان 2 = "<< H2VC << endl;
        out << "\n اجمالي حلوان 2 بعد خصم الفيزا و فودافون كاش = " << TH2 << endl;
        out << "\n=======================================\n";
    }
////////////////////////////////////////////////////////////////////////
    if (HHV == 0 && HHVC == 0 ){
    out << "\n اجمالي حدايق حلوان = " << hHelwan << endl;
    out << "\n=======================================\n";
    }
    else if (HHV != 0 && HHVC == 0 ){
        out << "\n ايراد حدايق حلوان = " << hHelwan << endl;
        out << "\n فيزا حدايق حلوان = "<< HHV << endl;
        out << "\n اجمالي حدايق حلوان بعد خصم الفيزا = " << THH<<endl;
        out << "\n=======================================\n";
    }
    else if (HHV == 0 && HHVC != 0 ){
    out << "\n ايراد حدايق حلوان = " << hHelwan << endl;
    out << "\n فودافون كاش حدايق حلوان = " << HHVC << endl;
    out << "\n اجمالي حدايق حلوان بعد خصم فودافون كاش = " << THH << endl;
    out << "\n=======================================\n";
    }
    else if (HHV != 0 && HHVC != 0 ){
        out << "\n ايراد حدايق حلوان = " << hHelwan << endl;
        out << "\n فيزا حدايق حلوان = "<< HHV << endl;
        out << "\n فودافون كاش حدايق حلوان = " << HHVC << endl;
        out << "\n اجمالي حدايق حلوان بعد خصم فوافون كاش و الفيزا = " << THH << endl;
        out << "\n==================================================\n";
    }


//////////////////////////////////////////////////////////////////////////
    if (Ghelwan != 0 ){
        if (GHV == 0 && GHVC == 0){
            out << "\n ايراد يوم الجمعه = " << Ghelwan << endl;
            out << "\n=======================================\n";
        }
        else if (GHV != 0 && GHVC == 0 ){
            out << "\n ايراد يوم الجمعه = " << Ghelwan << endl;
            out << "\n فيزا يوم الجمعه = "<< GHV << endl;
            out << "\n اجمالي يوم الجمعه بعد خصم الفيزا = " << TGH << endl;
            out << "\n=======================================\n";
        }
        else if (GHV == 0 && GHVC != 0){
            out << "\n ايراد يوم الجمعه = " << Ghelwan << endl;
            out << "\n فودافون كاش يوم الجمعه = " << GHVC << endl;
            out << "\n اجمالي يوم الجمعه بعد خصم فوافون كاش = "  << TGH << endl;
            out << "\n=======================================\n";
        }
        else if (GHV != 0 && GHVC != 0 ){
            out << "\n ايراد يوم الجمعه = " << Ghelwan << endl;
            out << "\n فيزا يوم الجمعه = "<< GHV << endl;
            out << "\n فودافون كاش يوم الجمعه = " << GHVC << endl;
            out << "\n اجمالي يوم الجمعه بعد خصم الفيزا و فودافون كاش = "  << TGH << endl;
            out << "\n====================================================\n";
        }
    }
    out << "\n اجمالي الكل = " << TH1 + TH2 + THH + TGH;
    out.close();
    return 0;
}
