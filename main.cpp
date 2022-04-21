#include <iostream>
#include <fstream>

using namespace std;

struct UserModel
{
    string name;
    string status = "online";
};

struct MessageModel
{

    string content;
    float time;
};

int main()
{

    ofstream read("messanger.txt");
    ifstream write("messanger.txt");
    MessageModel message;
    UserModel user;
    string text;
    cout << text << endl;

    // What is your name?

    cout << "What is your name?" << endl;
    cin >> user.name;

    // Enter your message...

    cout << "Enter your message" << endl;
    cin >> message.content;
    read << user.name << endl;
    read << user.status << endl;
    read << message.content << endl;

    if (!write.is_open())
    {
        cout << "Can't get access to messages!" << endl;
    }
    else
    {
        write >> text;
    }
    cout << text << endl;
    write.close();
    read.close();
    return 0;
}
