#pragma once

#include <variant>
#include <iostream>
#include <string>

enum TokenType  {
    None = 0,
    Print,
    In,
    Store,
    Delete,
    Copy,
    Jump,
    If
};

struct Token    {
    
};