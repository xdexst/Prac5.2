
#ifndef LOGELEM_H
#define LOGELEM_H

bool logMore(bool a, bool b);
bool logLess(bool a, bool b);
bool logEqul(bool a, bool b);
bool StateConvert(bool a);

class LogicalElement {
public:
    bool Statement;
    LogicalElement();
    LogicalElement(bool a);
    void SetStatement(bool State);
    bool GetStatement();
    bool StateReverse();
};

#endif