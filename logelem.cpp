#include "logelem.h"

LogicalElement::LogicalElement() {
    Statement = NULL;
}

LogicalElement::LogicalElement(bool a) {
    Statement = a;
}

void LogicalElement::SetStatement(bool State) {
    Statement = State;
}

bool LogicalElement::GetStatement() {
    return Statement;
}

bool LogicalElement::StateReverse() {
    Statement = StateConvert(Statement);
}