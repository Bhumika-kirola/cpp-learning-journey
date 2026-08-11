#include <iostream>

class Log 
{
public:
    enum level
    {
        Error = 0, Warning, Info
    };

private:
    enum m_LogLevel = Info;

public:
    void SetLevel(level level)
    {
        m_LogLevel = level;
    }

    void Error(const char* message)
    {
        if (m_LogLevel >= Error)
            std::cout << "[ERROR]: " << message << std::endl;
    }

    void Warn(const char* message)
    {
        if (m_LogLevel >= Warning)
            std::cout << "[WARNING]: " << message << std::endl;
    }

    void Info(const char* message)
    {
        if (m_LogLevel >= Info)
            std::cout << "[INFO]: " << message << std::endl;
    }
};

int main()
{
    Log log;
    log.SetLevel(Log::level);
    log.Warn("Hello");
    log.Info("Hello");
    log.Error("Hello");
    std::cin.get();
}