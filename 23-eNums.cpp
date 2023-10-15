#include <iostream>


class Log{
public:
    enum Level{
        LevelError, LevelWarn, LevelInfo
    };
private:
    Level m_LogLevel = LevelInfo;
public:
    void SetLevel(Level level){
        m_LogLevel = level;
    }
    void Error(const char* message){
        if(m_LogLevel >= LevelError)
        std::cout << "[ERROR]: " << message << std::endl;
    }
    void Warn(const char* message){
        if(m_LogLevel >= LevelWarn)
        std::cout << "[WARNING]: " << message << std::endl;
    }
    void Info(const char* message){
        if(m_LogLevel >= LevelInfo)
        std::cout << "[INFO]: " << message << std::endl;
    }

};

int main(){
    Log log;
    log.SetLevel(Log::LevelError);
    log.Error("Out");
}

//     //By Default they are 32 bit int
// enum Days : unsigned char {
//     // It will auto increament the value in these enums from 0,1,2,3,4.. so on
//     S ,M , T, W, Th, F, Sa
// };

// int main(){

//     Days x = M;
//     std::cout << "Value: " << x << std::endl;

//     return 0;
// }