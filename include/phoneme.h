#ifndef Phoneme_h

#include <string>

class Phoneme
{
private:
    /* data */
    std::string xsampa_code;
    std::string ipa_hex_unicode;
    int power;

    bool cons, son, syll, labial, round, coronal, ant, dist, dorsal,
    high, low, back, tense, pharyngeal, atr, voice, sg, cg, cont,
    strident, lateral, del_rel, nasal;

public:
    Phoneme();
    ~Phoneme();
    void set_xsampa_code(const std::string &code) {
        xsampa_code = code;
    }
    void set_ipa_hex_unicode(const std::string &code) {
        ipa_hex_unicode = code;
    }
    std::string get_xsampa_code() const {
        return xsampa_code;
    }
    std::string get_ipa_hex_unicode() const {
        return ipa_hex_unicode;
    }
};

#endif // !Phoneme_h


