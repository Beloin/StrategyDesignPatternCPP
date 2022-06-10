//
// Created by beloin on 09/06/2022.
//

#ifndef STRATEGY_USBREADERSTRATEGY_H
#define STRATEGY_USBREADERSTRATEGY_H


#include "MediaReaderStrategy.h"

class USBReaderStrategy : public MediaReaderStrategy {
public:
    string getInfo(string path) override;
    unsigned char **read(string path) override;
};


#endif //STRATEGY_USBREADERSTRATEGY_H
