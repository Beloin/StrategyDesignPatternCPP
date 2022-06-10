//
// Created by beloin on 09/06/2022.
//

#include <iostream>
#include "./mediaReaders/HardDriveReader.h"
#include "./mediaReaders/InternetReader.h"
#include "./mediaReaders/USBReaderStrategy.h"

#include "ContextMediaReader.h"

int main() {
    auto context = ContextMediaReader();

    context.setStrategy(new HardDriveReader());

    auto r = context.read("path/to/file.txt");

    context.setStrategy(new InternetReader());
    context.read("path/to/file.txt");

    context.setStrategy(new USBReaderStrategy());
    context.read("path/to/file.txt");
    return 0;
}