//
// Created by beloin on 09/06/2022.
//

#ifndef STRATEGY_HARDDRIVEREADER_H
#define STRATEGY_HARDDRIVEREADER_H
#include "MediaReaderStrategy.h"


class HardDriveReader : public MediaReaderStrategy {
public:
    string getInfo(string path) override;
    unsigned char **read(string path) override;
};


#endif //STRATEGY_HARDDRIVEREADER_H
