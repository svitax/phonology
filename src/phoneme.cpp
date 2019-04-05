#include "../include/Phoneme.h"

Phoneme::Phoneme() : xsampa_code(""), ipa_hex_unicode(""), cons(false), son(false),
syll(false), labial(false), round(false), coronal(false), ant(false), dist(false),
dorsal(false), high(false), low(false), back(false), tense(false), pharyngeal(false), 
atr(false), voice(false), sg(false), cg(false), cont(false), strident(false), lateral(false),
del_rel(false), nasal(false)
{
}

Phoneme::~Phoneme()
{
}

