#ifndef ENSPIEPLUGIN_H
#define ENSPIEPLUGIN_H

#include "Plugin.h"
#include "PluginProxy.h"
#include <string>
#include <vector>

class ENSPIEPlugin : public Plugin
{
public: 
 std::string toString() {return "ENSPIE";}
 void input(std::string file);
 void run();
 void output(std::string file);

private: 
 std::string inputfile;
 std::string outputfile;

};

#endif
