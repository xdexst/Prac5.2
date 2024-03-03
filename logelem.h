#ifndef LOGELEM_H
#define LOGELEM_H

class LogicalElement {
public:
    bool Statement;
    LogicalElement();
    LogicalElement(bool a);
    void SetStatement(bool State);
    bool GetStatement();
    bool StateReverse();
};

bool logMore(bool a, bool b);
bool logLess(bool a, bool b);
bool logEqul(bool a, bool b);
bool StateConvert(bool a);

#endif