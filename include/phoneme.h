#ifndef Phoneme_h

#include <string>

class Phoneme
{
private:
    /* data */
    std::string xsampa_code;
    std::string ipa_hex_unicode;

public:
    Phoneme(/* args */);
    ~Phoneme();
};

#endif // !Phoneme_h


