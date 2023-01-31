#include "sampleCmd.h"
// #include <maya/MFnPlugin.h>
#include <maya/MGlobal.h>

// const MString sampleCmd::kName("sampleCmd");

void *sampleCmd::creator()
{
    return new sampleCmd;
}

bool sampleCmd::isUndoable() const
{
    return false;
}

MStatus sampleCmd::doIt(const MArgList &args)
{
    MStatus status;
    MGlobal::displayInfo("Good job");
    return MS::kSuccess;
}

/*void *sampleCmd::creator()
{
    return new sampleCmd;
}

MStatus sampleCmd::doIt(const MArgList &argList)
{
    MGlobal::displayInfo("good job");
    return MS::kSuccess;
}

MStatus initializePlugin(MObject obj)
{
    MFnPlugin plugin(obj, "Jeremiah Lee", "1.0", "Any");
    MStatus status = plugin.registerCommand("good job", sampleCmd::creator);
    CHECK_MSTATUS_AND_RETURN_IT(status);
    return status;
}

MStatus uninitializePlugin(MObject obj)
{
    MFnPlugin plugin(obj);
    MStatus status = plugin.deregisterCommand("good job");
    CHECK_MSTATUS_AND_RETURN_IT(status);
    return status;
}*/