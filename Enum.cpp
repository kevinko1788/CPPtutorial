#include <iostream>
#define LOG(x) std::cout << x << std::endl
class Log
{
public:
    enum Level: unsigned int
    {
        LevelInfo, LevelWarning, LevelError
    };

private:
    Level m_logLevel = LevelInfo;

public:
    void SetLevel(Level level)
    {
        m_logLevel = level;
    }

    void Info(const char* message)
    {
      if (m_logLevel <= LevelInfo)
            std::cout << "[Info]: " << message << std::endl;
    }

    void Warn(const char* message)
    {
        if (m_logLevel <= LevelWarning)
            std::cout << "[Warning]: " << message << std::endl;
    }

    void Error(const char* message)
    {
        if (m_logLevel <= LevelError)
            std::cout << "[Error]: " << message << std::endl;
    }
};

int main()
{
    Log log;
    log.SetLevel(Log::LevelError);
    log.Info("Hello World");
    log.Warn("Hello World");
    log.Error("Hello World");
}
