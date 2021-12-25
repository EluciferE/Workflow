cmake_minimum_required(VERSION 3.17)
project(Workflow)

set(CMAKE_CXX_STANDARD 14)

add_executable(Workflow main.cpp Workers/worker.h Workers/worker_sort.cpp Workers/worker_sort.h
        Workers/worker_grep.cpp Workers/worker_grep.h Workers/worker_read.cpp
        Workers/worker_read.h Workers/worker_write.cpp Workers/worker_write.h
        Workers/worker_replace.cpp Workers/worker_replace.h Workers/worker_dump.cpp
        Workers/worker_dump.h WorkExecutor/work_executor.cpp WorkExecutor/work_executor.h
        ConfigReader/config_reader.cpp ConfigReader/config_reader.h Exceptions/exception.h
        Exceptions/worker_exception.cpp Exceptions/worker_exception.h Exceptions/executor_exceptions.cpp
        Exceptions/executor_exceptions.h WorkExecutor/work_data.cpp WorkExecutor/work_data.h)

set(CMAKE_CXX_STANDARD_LIBRARIES "-static-libgcc -static-libstdc++ -lwsock32 -lws2_32 ${CMAKE_CSS_STANDARD_LIBRARIES}")
set (CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -Wl,-Bstatic,--whole-archive -lwinpthread -Wl,--no-whole-archive")