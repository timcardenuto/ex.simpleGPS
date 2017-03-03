#ifndef SIMPLEGPS_I_IMPL_H
#define SIMPLEGPS_I_IMPL_H

#include "simpleGPS_base.h"

class simpleGPS_i : public simpleGPS_base
{
    ENABLE_LOGGING
    public:
        simpleGPS_i(char *devMgr_ior, char *id, char *lbl, char *sftwrPrfl);
        simpleGPS_i(char *devMgr_ior, char *id, char *lbl, char *sftwrPrfl, char *compDev);
        simpleGPS_i(char *devMgr_ior, char *id, char *lbl, char *sftwrPrfl, CF::Properties capacities);
        simpleGPS_i(char *devMgr_ior, char *id, char *lbl, char *sftwrPrfl, CF::Properties capacities, char *compDev);
        ~simpleGPS_i();

        void constructor();

        int serviceFunction();

    protected:
        void updateUsageState();

};

#endif // SIMPLEGPS_I_IMPL_H
