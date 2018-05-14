#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float gallons, r = 2.89, p = 3.09, s = 3.39, gasTotal, carWash, pricePerGallons;
    char carWashReq, gasChoice;
    
    cout<<"Enter number of gallons and press <Enter>"<<endl;
    cin>>gallons;
    
    cout<<"Enter gas type (R, P, S, or N) and press <Enter>"<<endl;
    cin>> gasChoice;
    
    cout<<"Enter Y or N for car wash and press <Enter>"<<endl;
    cin>> carWashReq;
    
    if (gasChoice == 'R')
    {
        gasTotal = r * gallons;
        pricePerGallons = r;
    }
    else if (gasChoice == 'P')
    {
        gasTotal = p * gallons;
        pricePerGallons = p;
    }
    else if (gasChoice == 'S')
    {
        gasTotal = s * gallons;
        pricePerGallons = s;
    }
    else if (gasChoice == 'N')
        gasTotal = 0;
    else
        cout<<"Please enter a valid gas type."<<endl;
    
    if (carWashReq == 'N')
        carWash = 0;
    else if (carWashReq == 'Y')
    {
        if(gasTotal >= 10.00)
            carWash = 1.25;
        else
            carWash = 3.00;
    }
    else
        cout<<"Please enter a valid car wash choice"<<endl;
    
    cout<<"\n\n**************************************\n\n";
    cout<<"*" << setw(37) <<"*"<<endl<<endl;
    cout<<"*" << setw(37) <<"*"<<endl<<endl;
    cout<<"*     Gas-N-Clean Service Station    *"<<endl<<endl;
    cout<<"*" << setw(37) <<"*"<<endl<<endl;
    cout<<"*            March 2, 2004           *"<<endl<<endl;
    cout<<"*" << setw(37) <<"*"<<endl<<endl;
    cout<<"**************************************\n\n\n";
    
    cout<<"Amount Gasoline purchases:" <<setw(20) <<fixed <<right <<setprecision(1) <<gallons <<" Gallons"<<endl<<endl;
    cout<< fixed <<setprecision(2) <<right;
    cout<<"Price per gallons:" <<setw(20) <<"$" <<setw(8) <<pricePerGallons <<endl<<endl;
    cout<<"Total gasoline cost:" <<setw(18) <<"$" <<setw(8) <<pricePerGallons*gallons <<endl<<endl;
    cout<<"Car wash cost:" <<setw(24) <<"$" <<setw(8) <<carWash <<endl<<endl;
    cout<<"Total due:" <<setw(28) <<"$" <<setw(8) <<(pricePerGallons*gallons)+carWash <<endl<<endl;
    
    cout<<"Thank you for stopping\n\nPlease come again\n\nRemember to buckle up and drive safely\n\n\n";
    
    return 0;
    
}
