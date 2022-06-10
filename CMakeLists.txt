cmake_minimum_required(VERSION 3.10)
project(strategy)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(mediaReaders)

add_executable(strategy
        mediaReaders/MediaReaderStrategy.h
        main.cpp
        mediaReaders/USBReaderStrategy.cpp mediaReaders/USBReaderStrategy.h mediaReaders/InternetReader.cpp mediaReaders/InternetReader.h mediaReaders/HardDriveReader.cpp mediaReaders/HardDriveReader.h ContextMediaReader.cpp ContextMediaReader.h)
