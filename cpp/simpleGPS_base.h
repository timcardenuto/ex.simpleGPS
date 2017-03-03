#ifndef SIMPLEGPS_BASE_IMPL_BASE_H
#define SIMPLEGPS_BASE_IMPL_BASE_H

#include <boost/thread.hpp>
#include <ossie/Device_impl.h>
#include <ossie/ThreadedComponent.h>

#include <ossie/MessageInterface.h>
#include "struct_props.h"

class simpleGPS_base : public Device_impl, protected ThreadedComponent
{
    public:
        simpleGPS_base(char *devMgr_ior, char *id, char *lbl, char *sftwrPrfl);
        simpleGPS_base(char *devMgr_ior, char *id, char *lbl, char *sftwrPrfl, char *compDev);
        simpleGPS_base(char *devMgr_ior, char *id, char *lbl, char *sftwrPrfl, CF::Properties capacities);
        simpleGPS_base(char *devMgr_ior, char *id, char *lbl, char *sftwrPrfl, CF::Properties capacities, char *compDev);
        ~simpleGPS_base();

        void start() throw (CF::Resource::StartError, CORBA::SystemException);

        void stop() throw (CF::Resource::StopError, CORBA::SystemException);

        void releaseObject() throw (CF::LifeCycle::ReleaseError, CORBA::SystemException);

        void loadProperties();

    protected:
        // Member variables exposed as properties
        /// Property: device_kind
        std::string device_kind;
        /// Property: device_model
        std::string device_model;
        /// Message structure definition for gpsinfo
        gpsinfo_struct gpsinfo;

        // Ports
        /// Port: gpsinfo_out
        MessageSupplierPort *gpsinfo_out;

    private:
        void construct();
};
#endif // SIMPLEGPS_BASE_IMPL_BASE_H
