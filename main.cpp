#include<iostream>  
using namespace std; 

int main(){
    int grade;
    cout<<"\nWelcome to final score calculator\n";
    while (1)
    {
        cout<<"\nEnter your score of the exam (-1 to quit): ";
        cin >> grade;
        switch (grade)
        {
        case 90 ... 100:
            cout<<"\nYour grade: A";
            break;
        case 80 ... 89:
            cout<<"\nYour grade: B";
            break;
        case 70 ... 79:
            cout<<"\nYour grade: C";
            break;
        case 60 ... 69:
            cout<<"\nYour grade: D";
            break;
        case 0 ... 59:
            cout<<"\nYour grade: F";
            break;
        case -1:
            return 0; 
        default:
            break;
        }
    }
}







// #include<iostream>  
// using namespace std; 

// string name, Confirm, Pass;
// int Balance;

// int main();

// void newAcc(){

//     cout<<"Good day.\n First enter your full name:";
//     cin>>name;
//     cout<<"\nPlease create your password:";
//     cin>> Pass;
//     cout<<"\nConfirm your password: ";
//     cin >> Confirm;      
//     while (Pass!=Confirm){
//         cout<<"\nyour passwords are not identical\n";
//         cout<<"\nPlease create your password:";
//         cin>> Pass;
//         cout<<"\nConfirm your password: ";
//         cin >> Confirm;       
//     }
//     cout<<"\n Your new bank accaunt has been created\n";
//     main();

// }

// int main(){
//     int dep;
//     int wthd;
//     int userAction;

//     while (1)
//     {
//         cout << "-INHA Bank Program-"<< endl;
//         cout << "--------Menu-------"<< endl;
//         cout << "1.Make Accout\n2.Deposit\n3.Withdrawal\n4.Display all info\n5.Exit program\n";
//         cin>>userAction;        
//         switch (userAction)
//         {
//         case 1:
//             newAcc();
//             return 0;
//             break;
//         case 2:
//             cout<<"\nHow much money you want to deposit?\n";
//             cin>>dep;
//             Balance+=dep;
//             cout<<"Your current balance is: "<< Balance<<"\n";      
//             break;
//         case 3:
//             cout<<"\nHow much money you want to Withdraw?\n";
//             cin>>wthd; 
//             Balance-=wthd;
//             cout<<"Your current balance is: "<< Balance<<"\n";           
//             break;
//         case 4:
//             cout<<"\n-----Youe Bank Info---------\n Your name: "<<name<<"\nyour password: "<<Pass<<"\n Your current balance is: "<< Balance<<"\n";

//             break;
//         case 5:
//             return 0;
//         default:
//         cout<<"Wrong input";
//             break;
//         }
//     }
// }

