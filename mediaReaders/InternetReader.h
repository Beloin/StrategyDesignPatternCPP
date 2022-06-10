//
// Created by beloin on 09/06/2022.
//

#ifndef STRATEGY_INTERNETREADER_H
#define STRATEGY_INTERNETREADER_H
#include "MediaReaderStrategy.h"

class InternetReader : public MediaReaderStrategy {
public:
    string getInfo(string path) override;
    unsigned char **read(string path) override;
};


#endif //STRATEGY_INTERNETREADER_H
