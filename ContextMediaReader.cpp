//
// Created by beloin on 09/06/2022.
//

#include "ContextMediaReader.h"

unsigned char **ContextMediaReader::read(string path) {
    return this->strategy->read(path);
}

void ContextMediaReader::setStrategy(MediaReaderStrategy *strategy) {
    ContextMediaReader::strategy = strategy;
}
