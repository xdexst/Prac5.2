#include <iostream>
#include "logelem.h"
using namespace std;

int main() {
    LogicalElement A(true);
    LogicalElement B(false);

    cout << "What we have now:" << endl;
    cout << "A: " << A.GetStatement() << endl;
    cout << "B: " << B.GetStatement() << endl;

    cout << endl;

    cout << "Methods from header: " << endl;
    cout << "logMore: " << logMore(A.GetStatement(), B.GetStatement()) << endl;
    cout << "logLess: " << logLess(A.GetStatement(), B.GetStatement()) << endl;
    cout << "logEqul: " << logEqul(A.GetStatement(), B.GetStatement()) << endl;
    cout << "Convert for A: " << StateConvert(A.GetStatement()) << endl;
    cout << "Convert for B: " << StateConvert(B.GetStatement()) << endl;

    cout << endl;

    cout << "Methods from .cpp file:" << endl;
    cout << "Reverse for A: " << A.StateReverse() << endl;
    cout << "A: " << A.GetStatement() << endl;
    cout << "Reverse for B: " << B.StateReverse() << endl;
    cout << "B: " << B.GetStatement() << endl;

    return 0;
}