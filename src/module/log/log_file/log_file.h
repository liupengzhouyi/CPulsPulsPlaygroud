#ifndef MODULE_LOG_LOGFILE_LOGFILE_H
#define MODULE_LOG_LOGFILE_LOGFILE_H

#include <iostream>
#include <string>

namespace Module {
namespace Log{
namespace LogFile {

class LogFile
{
    public:
        LogFile();

        ~LogFile();

    private:

        std::string log_file_path;
        int64_t log_size;

};

}; // namespace LogFile
}; // namespace Log
}; // namespace Module

#endif