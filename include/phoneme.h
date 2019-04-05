#ifndef Phoneme_h

#include <string>

class Phoneme
{
private:
    /* data */
    std::string xsampa_code;
    std::string ipa_hex_unicode;
    bool cons, son, syll, labial, round, coronal, ant, dist, dorsal,
    high, low, back, tense, pharyngeal, atr, voice, sg, cg, cont, 
    strident, lateral, del_rel, nasal;

public:

    Phoneme(): xsampa_code(""), ipa_hex_unicode(""), cons(false), son(false),
    syll(false), labial(false), round(false), coronal(false), ant(false), dist(false), 
    dorsal(false), high(false), low(false), back(false), tense(false), pharyngeal(false), 
    atr(false), voice(false), sg(false), cg(false), cont(false), strident(false), lateral(false), 
    del_rel(false), nasal(false) {}

    ~Phoneme() {}

    void set_xsampa_code(const std::string &s) {xsampa_code = s;}
    void set_ipa_hex_unicode(const std::string &s) {ipa_hex_unicode = s;}
    void set_cons(const bool &b) {cons = b;}
    void set_son(const bool &b) {son = b;}
    void set_syll(const bool &b) {syll = b;}
    void set_labial(const bool &b) {labial = b;}
    void set_round(const bool &b) {round = b;}
    void set_coronal(const bool &b) {coronal = b;}
    void set_ant(const bool &b) {ant = b;}
    void set_dist(const bool &b) {dist = b;}
    void set_dorsal(const bool &b) {dorsal = b;}
    void set_high(const bool &b) {high = b;}
    void set_low(const bool &b) {low = b;}
    void set_back(const bool &b) {back = b;}
    void set_tense(const bool &b) {tense = b;}
    void set_pharyngeal(const bool &b) {pharyngeal = b;}
    void set_atr(const bool &b) {atr = b;}
    void set_voice(const bool &b) {voice = b;}
    void set_sg(const bool &b) {sg = b;}
    void set_cg(const bool &b) {cg = b;}
    void set_cont(const bool &b) {cont = b;}
    void set_strident(const bool &b) {strident = b;}
    void set_lateral(const bool &b) {lateral = b;}
    void set_del_rel(const bool &b) {del_rel = b;}
    void set_nasal(const bool &b) {nasal = b;}

    std::string get_xsampa_code() const {return xsampa_code;}
    std::string get_ipa_hex_unicode() const {return ipa_hex_unicode;}
    bool get_cons() const {return cons;}
    bool get_son() const {return son;}
    bool get_syll() const {return syll;}
    bool get_labial() const {return labial;}
    bool get_round() const {return round;}
    bool get_coronal() const {return coronal;}
    bool get_ant() const {return ant;}
    bool get_dist() const {return dist;}
    bool get_dorsal() const {return dorsal;}
    bool get_high() const {return high;}
    bool get_low() const {return low;}
    bool get_back() const {return back;}
    bool get_tense() const {return tense;}
    bool get_pharyngeal() const {return pharyngeal;}
    bool get_atr() const {return atr;}
    bool get_voice() const {return voice;}
    bool get_sg() const {return sg;}
    bool get_cg() const {return cg;}
    bool get_cont() const {return cont;}
    bool get_strident() const {return strident;}
    bool get_lateral() const {return lateral;}
    bool get_del_rel() const {return del_rel;}
    bool get_nasal() const {return nasal;}
    
};

#endif // !Phoneme_h
