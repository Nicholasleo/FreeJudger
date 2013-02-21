#pragma once
#include "matcher.h"

namespace IMUST
{

class SpecailMatcher : public IMatcher
{
public:
    SpecailMatcher(const OJString & specialCode);
    virtual ~SpecailMatcher(void);

    virtual bool run(const OJString & answerOutputFile, 
        const OJString & userOutputFile);
};

}//namespace IMUST