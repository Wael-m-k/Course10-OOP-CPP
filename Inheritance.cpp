#include <iostream>
using namespace std;


class clsPerson
{
private:
    int _ID;
    string _FirstName;
    string _LastName;
    string _Email;
    string _Phone;

public:
    clsPerson()
    {

    }
    clsPerson(int ID, string FirstName, string LastName, string Email, string Phone)
    {
        _ID = ID;
        _FirstName = FirstName;
        _LastName = LastName;
        _Email = Email;
        _Phone = Phone;
    }

    int Id()
    {
        return _ID;
    }

    void SetFirstName(string FirstName)
    {
        _FirstName = FirstName;
    }

    string FirstName()
    {
        return _FirstName;
    }


    void SetLastName(string LastName)
    {
        _LastName = LastName;
    }

    string LastName()
    {
        return _LastName;
    }


    void SetEmail(string Email)
    {
        _Email = Email;
    }

    string Email()
    {
        return _Email;
    }


    void SetPhone(string Phone)
    {
        _Phone = Phone;
    }

    string Phone()
    {
        return _Phone;
    }

    string FullName()
    {
        return _FirstName + " " + _LastName;
    }

    void SendEmail(string Subject, string Body)
    {
        cout << "\nThe message sent successfully to " << _Email << endl;
        cout << "Subject: " << Subject << endl;
        cout << "Body: " << Body << endl;
    }

    void SendSMS(string SMSMassage)
    {
        cout << "\nThe SMS message sent successfully to " << _Phone << endl;
        cout << SMSMassage << endl;
    }

    void Print()
    {
        cout << "\nInfo:";
        cout << "\n___________________";
        cout << "\nID : " << _ID;
        cout << "\nFirstName: " << _FirstName;
        cout << "\nLastName : " << _LastName;
        cout << "\nFull Name: " << FullName();
        cout << "\nEmail : " << _Email;
        cout << "\nPhone : " << _Phone;
        cout << "\n___________________\n";


    }



};

class clsEmployee : public clsPerson
{
private:
    string _Title;
    double _Salary;
    string _Department;

public:
  
    void SetTitle(string Title)
    {
        _Title = Title;
    }

    string Title()
    {
        return _Title;
    }

  
    void SetSalary(double Salary)
    {
        _Salary = Salary;
    }

    double Salary()
    {
        return _Salary;
    }

    
    void SetDepartment(string Department)
    {
        _Department = Department;
    }

    string Department()
    {
        return _Department;
    }
};

int main()
{
    clsPerson Person1(10, "Wail", "Mohammed", "my@gmail.com", "0098387727");
    Person1.Print();
    Person1.SendEmail("Hi", "How are you?");
    Person1.SendSMS("How are you?");

    clsEmployee Employee1;
    Employee1.SetFirstName("Wail");
    Employee1.SetLastName("Mohammed");
    Employee1.SetEmail("a@a.com");
    Employee1.Print();
    Employee1.SendEmail("Hi", "How are you?");
    Employee1.SetSalary(1000000);
    cout << "Salary is: " << Employee1.Salary();
    cout << endl;
    system("pause");
    return 0;
}