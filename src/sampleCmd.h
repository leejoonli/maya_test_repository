#ifndef SAMPLECMD_H
#define SAMPLECMD_H

#include <maya/MArgList.h>
#include <maya/MObject.h>
#include <maya/MGlobal.h>
#include <maya/MPxCommand.h>

class sampleCmd : public MPxcommand
{
public:
    sampleCmd(){};
    virtual MStatus doIt(const MArgList &);
    static void *creator();
}
#endif