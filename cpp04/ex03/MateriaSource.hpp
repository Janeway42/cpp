#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include <iostream>
#include "IMateriaSource.hpp"
#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

class MateriaSource: public IMateriaSource
{
    private:
        AMateria* _learnedMateria[4];
        int _indexLearned;

    public:
        MateriaSource(void);
        MateriaSource(const MateriaSource &existing);
        ~MateriaSource(void);

        MateriaSource& operator = (MateriaSource const &existing);

        int getIndex(void)const;
        AMateria* getLearnedMateria(int location)const;

        void learnMateria(AMateria* m);
        AMateria* createMateria(std::string const &learned);
};

#endif