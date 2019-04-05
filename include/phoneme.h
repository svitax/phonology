#ifndef Phoneme_h

#include <string>

class Phoneme
{
private:
    /* data */
    std::string xsampa_code;
    std::string ipa_hex_unicode;
    bool cons, son, syll, labial, coronal, dorsal,pharyngeal, voice, 
    sg, cg, cont, strident, lateral, del_rel, nasal;

public:

    Phoneme(): xsampa_code(""), ipa_hex_unicode(""), cons(false), son(false),
    syll(false), labial(false), coronal(false), dorsal(false), pharyngeal(false), 
    voice(false), sg(false), cg(false), cont(false), strident(false), lateral(false), 
    del_rel(false), nasal(false) {}

    ~Phoneme() {}

    void set_xsampa_code(const std::string &s) {xsampa_code = s;}
    void set_ipa_hex_unicode(const std::string &s) {ipa_hex_unicode = s;}
    void set_cons(const bool &b) {cons = b;}
    void set_son(const bool &b) {son = b;}
    void set_syll(const bool &b) {syll = b;}
    void set_labial(const bool &b) {labial = b;}
    void set_coronal(const bool &b) {coronal = b;}
    void set_dorsal(const bool &b) {dorsal = b;}
    void set_pharyngeal(const bool &b) {pharyngeal = b;}
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
    bool get_coronal() const {return coronal;}
    bool get_dorsal() const {return dorsal;}
    bool get_pharyngeal() const {return pharyngeal;}
    bool get_voice() const {return voice;}
    bool get_sg() const {return sg;}
    bool get_cg() const {return cg;}
    bool get_cont() const {return cont;}
    bool get_strident() const {return strident;}
    bool get_lateral() const {return lateral;}
    bool get_del_rel() const {return del_rel;}
    bool get_nasal() const {return nasal;}
    
};

class CoronalObstruent : public Phoneme
{
private:
    bool m_ant, m_dist;
public:
    CoronalObstruent(): m_ant(false), m_dist(false) {set_coronal(true);}

    ~CoronalObstruent() {}

    CoronalObstruent(const bool &dist, const bool &ant) {
        set_coronal(true);
        m_dist = dist;
        m_ant = ant;
    }

    void set_ant(const bool &b) {m_ant = b;}
    void set_dist(const bool &b) {m_dist = b;}

    bool get_ant() const {return m_ant;}
    bool get_dist() const {return m_dist;}

};

#endif // !Phoneme_h


