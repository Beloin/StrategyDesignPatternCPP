//
// Created by beloin on 09/06/2022.
//

#include <iostream>
#include "USBReaderStrategy.h"

using namespace std;

string USBReaderStrategy::getInfo(string path) {
    return "Any info for this Path";
}

unsigned char **USBReaderStrategy::read(string path) {
    cout << "Reading from USB" << endl;
    auto ret = (unsigned char **) malloc(sizeof (unsigned char*) * 5);
    ret[0] = new unsigned char('Y');
    ret[1] = new unsigned char('U');
    ret[2] = new unsigned char('D');
    ret[3] = new unsigned char('I');
    ret[4] = new unsigned char('\0');
    return ret;
}
