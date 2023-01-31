#include <maya/MFnPlugin.h>

#include "sampleCmd.h"

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
}