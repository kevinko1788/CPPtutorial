#include <iostream>
#define LOG(x) std::cout << x << std::endl
class Log
{
public:
    const int LogLevelInfo = 0;
    const int LogLevelWarning = 1;
    const int LogLevelError = 2;

private:
    int m_logLevel = LogLevelError;

public:
    void SetLevel(int level)
    {
        m_logLevel = level;
    }

    void Info(const char* message)
    {
      if (m_logLevel <= LogLevelInfo)
            std::cout << "[Info]: " << message << std::endl;
    }

    void Warn(const char* message)
    {
        if (m_logLevel <= LogLevelWarning)
            std::cout << "[Warning]: " << message << std::endl;
    }

    void Error(const char* message)
    {
        if (m_logLevel <= LogLevelError)
            std::cout << "[Error]: " << message << std::endl;
    }
};

int main()
{
    Log log;
    log.SetLevel(log.LogLevelError);
    log.Info("Hello World");
    log.Warn("Hello World");
    log.Error("Hello World");
}
