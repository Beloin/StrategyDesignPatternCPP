//
// Created by beloin on 09/06/2022.
//

#ifndef STRATEGY_CONTEXTMEDIAREADER_H
#define STRATEGY_CONTEXTMEDIAREADER_H

#include <MediaReaderStrategy.h>
#include "string"

using namespace std;

class ContextMediaReader {
private:
    MediaReaderStrategy *strategy;
public:
    void setStrategy(MediaReaderStrategy *strategy);

public:
    unsigned char** read(string path);

};


#endif //STRATEGY_CONTEXTMEDIAREADER_H
