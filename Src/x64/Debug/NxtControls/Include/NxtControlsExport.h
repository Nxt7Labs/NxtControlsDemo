#pragma once

#ifdef BUILD_NXTCONTROLS
#    define NXTCONTROL_CLASS_EXPORT __declspec(dllexport)
#else
#    define NXTCONTROL_CLASS_EXPORT __declspec(dllimport)
#endif
