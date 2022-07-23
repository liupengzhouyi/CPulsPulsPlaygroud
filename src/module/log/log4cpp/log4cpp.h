#ifndef MODULE_LOG_LOG4CPP_LOG4CPP_H
#define MODULE_LOG_LOG4CPP_LOG4CPP_H

#include <iostream>
#include <string>

namespace Module {
namespace Log{
namespace Log4cpp {

class Log4cpp
{
    public:
        Log4cpp();

        ~Log4cpp();

        void log();

        void check_log();

    private:

        std::string log_info;
        size_t log_level;
        std::string log_file;

};

}; // namespace Log4cpp
}; // namespace Log
}; // namespace Module

#endif