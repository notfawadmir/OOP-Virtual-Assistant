#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std;

string filename="TASKS.txt";
fstream outfile("User DATA.txt", ios::app);


class Basic_AI
{
    string username;

public:
    void setuser_name(string Username);
    string getuser_name();
    void calculate();
    void greet();
    void telljoke();
    void filestart(string filename);
    void Add_Task(string filename);
    void showtask(string filename);
};

class Advanced_AI: public Basic_AI {
private:
    string name = "fawad";
    string password = "meeru";
    string Recovery_code = "eagnibal";

    string S_name, S_email, S_password, SS_password;
    string F_name, F_email, F_password, F_Recovery_code;
    string l_email, l_password;
    string U_name, U_password, Check_name, Check_Password;

public:
    void admin();
    void check();
    void sign_up();
    void login();
    void Forgot_Password();
    void interface();
    void menu();
        
};


//======================            Basic AI Member Function            ============================================\\

void Basic_AI :: setuser_name(string Username)
{
    username = Username;
}

string Basic_AI :: getuser_name()
{
    return username;
}

void Basic_AI :: greet()
{
    char option;
    cout << "\n======================" << endl;
    cout << "   Welcome " << username << " !" << endl;
    cout << "======================\n"
         << endl;
g1:
    cout << "|-----------------|" << endl;
    cout << "  How are you sir ?" << endl;
    cout << "  Reply ?" << endl;
    cout << "  1.Fine " << endl;
    cout << "  2.Not Well " << endl;
    cout << "  Option selected : ";
    cin >> option;

    if (option != '1' && option != '2')
    {
        cout << "\n\n  -------------------------------" << endl;
        cout << "  Invalid input given try again !" << endl;
        cout << "  -------------------------------\n"
             << endl;
        goto g1;
        cout << endl;
    }
    else if (option == '1')
    {
        cout << "\n  ==================" << endl;
        cout << "  Good to hear Sir !" << endl;
        cout << "  ==================\n"
             << endl;
    }

    else
    {
        cout << "\n  ================================" << endl;
        cout << "  Oh sorry to hear Sir" << endl;
        cout << "  I wish good health for you Sir !" << endl;
        cout << "  ================================\n"
             << endl;
    }
}

void Basic_AI :: calculate()
{
    float result = 0;
    int answer;
    char operation;

    cout << "==========" << endl;
    cout << "Calculator" << endl;
    cout << "==========" << endl;
    cout << "On how many values do you want to perform your operation?" << endl;
    cout << "Answer: ";
    cin >> answer;

    vector<float> number(answer);
        cout << "----------------" << endl;
    for (int i = 0; i < answer; i++)
    {
        cout << "Value " << i + 1 << ": ";
        cin >> number[i];
    }
        cout << "----------------" << endl;
    cout << endl;
    cout << "Which Operation Do You Want To Perform?" << endl;
    cout << "('+', '-', '*', '/')" << endl;
    cout << "Operation: ";
    cin >> operation;

    switch (operation)
    {
    case '+':
        result = number[0];
        for (int i = 1; i < answer; i++)
            result += number[i];
        cout << "\n============" << endl;
        cout << "Result: " << result << endl;
        cout << "============" << endl;
        break;
    case '-':
        result = number[0];
        for (int i = 1; i < answer; i++)
            result -= number[i];
        cout << "\n============" << endl;
        cout << "Result: " << result << endl;
        cout << "============" << endl;
        break;
    case '*':
        result = number[0];
        for (int i = 1; i < answer; i++)
            result *= number[i];
        cout << "\n============" << endl;
        cout << "Result: " << result << endl;
        cout << "============" << endl;
        break;
    case '/':
        result = number[0];
        for (int i = 1; i < answer; i++)
        {
            if (number[i] != 0)
                result /= number[i];
            else
            {
                cerr << "Zero Division Error" << endl;
                return;
            }
        }
        cout << "\n============" << endl;
        cout << "Result: " << result << endl;
        cout << "============" << endl;
        break;
    default:
        cout << "Invalid input" << endl;
        break;
    }




}

void Basic_AI :: telljoke(){

        char option;
        j1:
        cout<<"================================"<<endl;
        cout<<"Which Joke Do You Want To Hear ?"<<endl;
        cout<<"Joke 1"<<endl;
        cout<<"Joke 2"<<endl;
        cout<<"Joke 3"<<endl;
        cout<<"Selected : ";
        cin>>option;

            if (option != '1' && option != '2' && option != '3')
    {
        cout << "\n\n  -------------------------------" << endl;
        cout << "  Invalid input given try again !" << endl;
        cout << "  -------------------------------\n"
             << endl;
        goto j1;
        cout << endl;
    }
    else if (option == '1')
    {
        cout<<"\n---------------------------------------------"<<endl;
        cout<<"Q. What do you call when 8 mosquitos bit you?\nA. A mosquito byte."<<endl;
        cout<<"---------------------------------------------"<<endl;
    }
    else if (option == '2')
    {
        cout<<"----------------------------------------------------------"<<endl;
        cout<<"Q. Why was the statement scared while the comment was not?\nA. Statements are executed."<<endl;
        cout<<"----------------------------------------------------------"<<endl;
    }

    else
    {
        cout<<"----------------------------------------------------"<<endl;
        cout<<"Q. What's the object-oriented way to become wealthy?\nA. Inheritance."<<endl;
        cout<<"----------------------------------------------------"<<endl;
    }
        
}

void Basic_AI :: filestart(string filename){
fstream infile(filename);
infile << "=====" << endl;
infile << "TASKS" << endl;
infile << "=====\n"<< endl;
}

void Basic_AI::Add_Task(string filename) {
    char option;
    t1:
    cout << "Do You Want to Add A Task?" << endl;
    cout << "1. Yes" << endl;
    cout << "2. No" << endl;
    cout << "Option Selected: ";
    cin >> option;

    if (option != '1' && option != '2') {
        cout << "\n\n  -------------------------------" << endl;
        cout << "  Invalid input given, try again!" << endl;
        cout << "  -------------------------------\n" << endl;
        goto t1;
    }
    else if (option == '1') {
        string Task;
        fstream infile(filename, ios::app); 
        if (infile.is_open()) {
            cin.ignore();
            while (true) {
                cout << "What is the Task? (Type 'done' to stop)" << endl;
                getline(cin, Task);
                
                if (Task == "done") {
                    break; 
                }

                infile << "--------------------------------" << endl;
                infile << "TASK: " << Task << endl;
                infile << "--------------------------------\n" << endl;
            }
            infile.close();
            cout << "TASK SAVED SUCCESSFULLY!!!" << endl;
        }
    }
    else {
        cout << "No Task Added!\n" << endl;
    }
}

void Basic_AI :: showtask(string filename)
    {

    fstream outfile(filename);
    string line;

     if(!outfile.is_open()){
        cout<<"No file is Open"<<endl;
     }

     else
     {
        while (getline(outfile,line))
        {
            cout<<line;
        }

        outfile.close();
     }

}

//=============================================================================================================================\\




//======================            Advanced AI Member Function            ============================================\\


void Advanced_AI::admin() {
        ofstream outfile("Privacy Data.txt");
        outfile << "Admin Name : " << name << endl;
        outfile << "Admin Password : " << password << endl;
        outfile.close();
    }

void Advanced_AI::check(){
       a1:
        ofstream outfile("Privacy Data.txt");
        admin();

        cout << "Name : ";
        cin >> Check_name;

        cout << "Password :";
        cin >> Check_Password;

        if (!outfile.is_open()) {
            cout << "\n===================" << endl;
            cout << "No Data Found !!!" << endl;
            cout << "===================\n" << endl;
        } else {
            if (Check_name == name && Check_Password == password) {
                cout << "\n==================" << endl;
                cout << "Admin Authorized !" << endl;
                cout << "Welcome Fawad" << endl;
                cout << "==================\n" << endl;
            } else {
                cout << "\n======================" << endl;
                cout << "Invalid Admin Data !!!" << endl;
                cout << "======================\n" << endl;
                goto a1;
            }
            cout << endl;
        }
}
void Advanced_AI::Forgot_Password(){
    ifstream infile("User DATA.txt");
        ofstream outfile("User DATA.txt", ios::app);
        string temp_name, temp_email, temp_password;
        bool found = false;

    F1:
        cout << "\nEnter Your Email : ";
        cin >> F_email;

        cout << "Enter Your Name : ";
        cin >> F_name;

        if (!infile.is_open()) {
            cout << "\nNo Data Found !" << endl;
            return;
        }

        while (getline(infile, temp_name) && getline(infile, temp_email) && getline(infile, temp_password)) {
            if (F_email == temp_email && F_name == temp_name) {
                found = true;
                break;
            }
        }

        if (found) {
            cout << "\nWe have Sent You A Verification Code On Email '" << F_email << "'" << endl;
            cout << "===== Verification code is '' " << Recovery_code << " '' =====" << endl;

        F0:
            cout << "\nEnter Verification Code : ";
            cin >> F_Recovery_code;

            if (Recovery_code == F_Recovery_code) {
                cout << "\nReset Password : ";
                cin >> S_password;
                cout << "Confirm New Password : ";
                cin >> SS_password;

                if (S_password == SS_password) {
                    outfile << temp_name << endl;
                    outfile << temp_email << endl;
                    outfile << S_password << endl;
                    cout << "\nPassword Reset Successfully !" << endl;
                } else {
                    cout << "\nPasswords Do Not Match! Try Again.\n" << endl;
                    goto F0;
                }
            } else {
                cout << "\nInvalid Verification Code!" << endl;
                goto F0;
            }
        } else {
            cout << "\nInvalid Email or Name! Try Again.\n" << endl;
            goto F1;
        }

        infile.close();
        outfile.close();
}
void Advanced_AI::interface(){
    int option;
        check(); 

    c2:
        cout << "\n====  Authorization Menu  ====\n" << endl;

    c1:
        cout << "\n1. Sign Up" << endl;
        cout << "2. Login" << endl;
        cout << "3. Forgot Password" << endl;
        cout << "4. Exit" << endl;
        cout << "Option Selected : ";
        cin >> option;

        if (option != 1 && option != 2 && option != 3 && option != 4) {
            cout << "\n===================" << endl;
            cout << "Invalid Input !!!" << endl;
            cout << "Try Again\n" << endl;
            cout << "===================\n" << endl;
            goto c1;
        } else if (option == 1) {
            sign_up();
            goto c2;
        } else if (option == 2) {
            login();
            goto c2;
        } else if (option == 3) {
            Forgot_Password();
            goto c2;
        } else {
            cout << "\nExiting program" << endl;
        }
}

void Advanced_AI::login(){
        ifstream infile("User DATA.txt");
        bool loginSuccess = false;

        cout << "\nEnter Email : ";
        cin >> l_email;

        cout << "Enter Password : ";
        cin >> l_password;

        if (!infile.is_open()) {
            cout << "\n-------------" << endl;
            cout << "No Data Found" << endl;
            cout << "-------------\n" << endl;
        } else {
            string temp_name, temp_email, temp_password;


            while (getline(infile, temp_name) && getline(infile, temp_email) && getline(infile, temp_password)) {
                if (temp_email == l_email && temp_password == l_password) {
                    cout << "\n==================" << endl;
                    cout << "Login Successful !" << endl;
                    cout << "==================\n" << endl;
                    loginSuccess = true;
                    break;
                }
            }

            if (!loginSuccess) {
                cout << "\n-------------------------" << endl;
                cout << "Invalid Email OR Password" << endl;
                cout << "-------------------------\n" << endl;
            }

            infile.close();
        }}

void Advanced_AI::sign_up(){
    ofstream outfile("User DATA.txt", ios::app);

        cout << "\nEnter Name : ";
        cin >> S_name;
        outfile << S_name << endl;

        cout << "Enter Email : ";
        cin >> S_email;
        outfile << S_email << endl;

        cout << "Enter Password : ";
        cin >> S_password;
        outfile << S_password << endl;

        cout << "\n====================" << endl;
        cout << "Sign Up Successful !" << endl;
        cout << "====================\n" << endl;

        outfile.close();
}

void Advanced_AI:: menu() {
        char option;
        do {
            cout << "====================================" << endl;
            cout << "       Virtual Assistant MENU" << endl;
            cout << "====================================" << endl;
            cout << "1. Greet" << endl;
            cout << "2. Calculator" << endl;
            cout << "3. Tell a joke" << endl;
            cout << "4. Add task" << endl;
            cout << "5. Show tasks" << endl;
            cout << "6. Exit" << endl;
            cout << "Choose an option: ";
            cin >> option;

            switch (option) {
            case '1':
                greet();
                break;
            case '2':
                calculate();
                break;
            case '3':
                telljoke();
                break;
            case '4':
                Add_Task(filename);
                break;
            case '5':
                showtask(filename);
                break;
            case '6':
                cout << "Exiting the program. Goodbye!" << endl;
                break;
            default:
                cout << "Invalid option, please try again." << endl;
            }
        } while (option != '6');
    }

//=============================================================================================================================\\


int main() {
    Advanced_AI admin;
    admin.interface();
    cout<<endl;
    admin.menu();

    
    

    return 0;
}