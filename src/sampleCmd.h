#ifndef SAMPLECMD_H
#define SAMPLECMD_H

#include <maya/MArgList.h>
#include <maya/MObject.h>
#include <maya/MGlobal.h>
#include <maya/MPxCommand.h>

class sampleCmd : public MPxCommand
{
public:
    sampleCmd(){};
    virtual MStatus doIt(const MArgList &);
    virtual bool isUndoable() const;
    static void *creator();
};

#endif