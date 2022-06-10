//
// Created by beloin on 09/06/2022.
//

#ifndef STRATEGY_MEDIAREADERSTRATEGY_H
#define STRATEGY_MEDIAREADERSTRATEGY_H
#include "string"

using namespace std;

class MediaReaderStrategy {
public:
    virtual unsigned char** read(string path) = 0;
    virtual string getInfo(string path) = 0;
};


#endif //STRATEGY_MEDIAREADERSTRATEGY_H
