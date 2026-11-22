#include <iostream>
using namespace std;

class clsaCalculator
{
private:
    float _Number = 0;
    float _LastNumber = 0;
    float _PreviousNumber = 0;
    string OpName = "Clear";

    bool _IsZero(float Number)
    {
        return (Number == 0);
    }

public:
    void Add(float Number)
    {
        _LastNumber = Number;
        _PreviousNumber = _Number;
        OpName = "Adding";
        _Number += Number;
    }

    void Subtract(float Number)
    {
        _LastNumber = Number;
        _PreviousNumber = _Number;
        OpName = "Subtracting";
        _Number -= Number;
    }

    void Divide(float Number)
    {
        _LastNumber = Number;
        if (_IsZero(Number))
        {
            Number = 1;
        }
        _PreviousNumber = _Number;
        OpName = "Dividing";
        _Number /= Number;
    }

    void Multiply(float Number)
    {
        _LastNumber = Number;
        _PreviousNumber = _Number;
        OpName = "Multiplying";
        _Number *= Number;
    }

    float GetFinalResults()
    {
        return _Number;
    }

    void Clear()
    {
        _LastNumber = 0;
        _PreviousNumber = 0;
        OpName = "Clearing";
        _Number = 0;
    }

    void CancelLastOperation()
    {
        _LastNumber = 0;
        OpName = "Cancelling Last Operation";
        _Number = _PreviousNumber;
    }

    void PrintResults()
    {
        cout << "Result after " << OpName << " " << _LastNumber << " is: " << _Number << endl;
    }
};

int main()
{
    clsaCalculator cal;

    cal.Clear();
    cal.Add(10);
    cal.PrintResults();

    cal.Add(100);
    cal.PrintResults();

    cal.Subtract(20);
    cal.PrintResults();

    cal.Divide(0);
    cal.PrintResults();

    cal.Divide(2);
    cal.PrintResults();

    cal.Multiply(3);
    cal.PrintResults();

    cal.CancelLastOperation();
    cal.PrintResults();

    system("pause");
    return 0;
}