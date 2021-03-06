#ifndef ZEEK_PLUGIN_ZEEK_BACNET
#define ZEEK_PLUGIN_ZEEK_BACNET

#include <plugin/Plugin.h>
#include "BACNET.h"

namespace plugin {
    namespace Zeek_BACNET {
        class Plugin : public ::plugin::Plugin {
            protected:
                // Overridden from plugin::Plugin.
                virtual plugin::Configuration Configure();
            };

        extern Plugin plugin;
        }
    }

#endif
