#include <iostream>

using namespace std;

class Log 
{
public:
    enum level
    {
        error = 0, warn, info
    };

private:
    level m_LogLevel = info;

public:
    void SetLevel(level level)
    {
        m_LogLevel = level;
    }

    void Error(const char* message)
    {
        if (m_LogLevel >= error)
            std::cout << "[ERROR]: " << message << std::endl;
    }

    void Warn(const char* message)
    {
        if (m_LogLevel >= warn)
            std::cout << "[WARNING]: " << message << std::endl;
    }

    void Info(const char* message)
    {
        if (m_LogLevel >= info)
            std::cout << "[INFO]: " << message << std::endl;
    }
};

int main()
{
    Log log;
    log.SetLevel(Log::info);
    log.Warn("Hello");
    log.Info("Hello");
    log.Error("Hello");
    cin.get();
}