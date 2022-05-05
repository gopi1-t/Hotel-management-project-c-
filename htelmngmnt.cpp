#include <iostream>
using namespace std;
int main()
{
    int qnt;
    int choice;
    // quantity

    int qrms = 0, qpasta = 0, qburger = 0, qchkburger = 0, qshake = 0, qmutton = 0, qchowmin = 0;
    // food items sold
    int srms = 0, spasta = 0, sburger = 0, schkburger = 0, sshake = 0, smutton = 0, schowmin = 0;
    // toatal proce of items
    int Total_rooms = 0, Total_pasta = 0, Total_burger = 0, Total_chkburger = 0, Total_shake = 0, Total_mutton = 0, Total_chowmin = 0;

    cout << "\n\t Quantity of rooms we have: ";
    cout << "\n rooms available: ";
    cin >> qrms;
    cout << "\n Quantity of burger: ";
    cin >> qburger;
    cout << "\n Quantity of pasta: ";
    cin >> qpasta;
    cout << "\n Quantity of chicken burger: ";
    cin >> qchkburger;
    cout << "\n Quantity of shake: ";
    cin >> qshake;
    cout << "\n Quantity of mutton : ";
    cin >> qmutton;
    cout << "\n Quantity of chowmin :";
    cin >> qchowmin;
    m:
    cout << "\n\t\t Please select from the menu options ";
    cout << "\n\n1) Rooms";
    cout << "\n\n2) Pasta";
    cout << "\n\n3) Burger";
    cout << "\n\n4) Chiken Burger";
    cout << "\n\n5) Shake";
    cout << "\n\n6) Mutton";
    cout << "\n\n7) Chowmin";
    cout << "\n\n8) Information Regarding sales and collections";
    cout << "\n\n9) Exit";

    cout << "\n\n Please Enter your choice! ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "Enter the numbers of rooms that you want";
        cin >> qnt;
        if (qrms - srms >= qnt)
        {
            srms = srms + qnt;
            Total_rooms = Total_rooms + qnt;
            cout << "\n\n\t\t" << qnt << " rooms allted to you "
                 << "price has to be paid is  " << qnt * 1200;
        }
        else
            cout << "\n\t" << qrms - srms << "Rooms are available in hotel";
        break;

    case 2:
        cout << "Enter the numbers of pasta plate: ";
        cin >> qnt;
        if (qpasta - spasta >= qnt)
        {
            spasta = spasta + qnt;
            Total_pasta = Total_pasta + qnt;
            cout << "\n\n\t\t" << qnt << "pasta ordered "
                 << "price has to be paid is  " << qnt * 120;
        }
        else
            cout << "\n\t" << qpasta - spasta << " pasta are available in hotel";
        break;

    case 3:
        cout << "enter the burger you want ";
        cin >> qnt;
        if (qburger - sburger >= qnt)
        {
            sburger = sburger + qnt;
            Total_burger = Total_burger + qnt;
            cout << "\n\n\t\t" << qnt << "burger ordered "
                 << "price has to be paid is  " << qnt * 140;
        }
        else
            cout << "\n\t" << qburger - sburger << " burger are available in hotel";
        break;

    case 4:
    cout<<"enter the burger u want";
    cin>>qnt;
        if (qchkburger - qchkburger >= qnt)
        {
            schkburger = schkburger + qnt;
            Total_burger = Total_burger + qnt * 140;
            cout << "\n\n\t\t" << qnt << "chicken burger ordered "
                 << "price has to be paid is  " << qnt * 140;
        }
        else
            cout << "\n\t" << qchkburger - schkburger << "chieken burger  are available in hotel";
        break;

    case 5:
    cout<<"enter the shake u want";
    cin>>qnt;
        if (qshake - sshake >= qnt)
        {
            sshake = sshake + qnt;
            Total_shake = Total_shake + qnt;
            cout << "\n\n\t\t" << qnt << "shake ordered "
                 << "price has to be paid is  " << qnt * 90;
        }
        else
            cout << "\n\t" << qshake - sshake << " shake are available in hotel";
        break;

    case 6:
    cout<<"enter mutton";
    cin>>qnt;
        if (qmutton - smutton >= qnt)
        {
            smutton = smutton + qnt;
            Total_mutton = Total_mutton + qnt;
            cout << "\n\n\t\t" << qnt << "mutton ordered "
                 << "price has to be paid is  " << qnt * 300;
        }
        else
            cout << "\n\t" << qmutton - smutton << " shake are available in hotel";
        break;
    case 7:
    cout<<"enter chowmin";
    cin>>qnt;
        if (qchowmin - schowmin >= qnt)
        {
            schowmin = schowmin + qnt;
            Total_chowmin = Total_chowmin + qnt;
            cout << "\n\n\t\t" << qnt << "mutton ordered "
                 << "price has to be paid is  " << qnt * 300;
        }

        else
            cout << "\n\t" << qchowmin - schowmin << " shake are available in hotel";
        break;

    case 8:
        exit(0);
    default:
        cout << "\n please select the numbers mentioned above!";
    }
    goto m;
}
