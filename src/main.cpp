/* 
    TODO:
    - IPA(Unicode-hex) to X-SAMPA converter
        1. insert an X-SAMPA code, return IPA unicode-hex code
        2. insert an IPA unicode-hex code, return X-SAMPA code
    - X-SAMPA to IPA(Unicode-hex) converter
        1. insert X-SAMPA string, return IPA string
        2. insert IPA string, return X-SAMPA string
    TODO:
    - Input and store system for X-SAMPA or IPA Unicode
        create classe for a phoneme that can hold phonetic features,
        IPA and X-SAMPA codes
        input X-SAMPA and IPA codes, create corresponding 
    TODO:
    - Minimal and near-minimal pair finder from a dataset
    TODO:
    - Compiler for local environments from a dataset
    TODO:
    - Function to establish complementary distribution between multiple phonemes
*/

#include <iostream>
#include "../include/Phoneme.h"

int main() {
    std::cout << "Hello Easy C++ project!" << std::endl;
    Phoneme c;
    std::string test = c.get_xsampa_code;
}
