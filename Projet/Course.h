#ifndef COURSE_H
#define COURSE_H

#include<cstdlib>
#include <string>

#include "lieu.h"

class Course : public Lieu{
private:
    static std::default_random_engine _generator;
    static std::uniform_int_distribution<int> _distribution;
protected:
    int nbArticlesMax;

public:
    Course(std::string name) : Lieu(name) {
        nbArticlesMax = (int)(rand()%15);
    }

    int getNbArticlesMax() const{
        return nbArticlesMax;
    }

};

#endif // COURSE_H
