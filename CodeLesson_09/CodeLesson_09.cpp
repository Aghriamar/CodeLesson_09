#include <iostream>

enum class Result
{
    SUCCESS,
    FAIL,
    ERROR_WRITE,
    ERROR_READ,
};

enum class Another
{
    WORK,
    SUCCESS
};

Result DoWork()
{
    return Result::ERROR_WRITE;
}

enum Alphabet
{
    A,
    B,
    C
};

int main()
{
    Result workResult = DoWork();
    std::cout << static_cast<int>(workResult);
    static_cast<Result>(3);
    if (workResult == Result::SUCCESS)
    {

    }
    Another anotherRes = Another::WORK;
    /*if (anotherRes == workResult)
    {

    }*/
}