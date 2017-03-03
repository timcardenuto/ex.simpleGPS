#ifndef STRUCTPROPS_H
#define STRUCTPROPS_H

/*******************************************************************************************

    AUTO-GENERATED CODE. DO NOT MODIFY

*******************************************************************************************/

#include <ossie/CorbaUtils.h>
#include <CF/cf.h>
#include <ossie/PropertyMap.h>

struct gpsinfo_struct {
    gpsinfo_struct ()
    {
    };

    static std::string getId() {
        return std::string("gpsinfo");
    };

    double lat;
    double lon;
    std::string timestamp;
};

inline bool operator>>= (const CORBA::Any& a, gpsinfo_struct& s) {
    CF::Properties* temp;
    if (!(a >>= temp)) return false;
    const redhawk::PropertyMap& props = redhawk::PropertyMap::cast(*temp);
    if (props.contains("gpsinfo::lat")) {
        if (!(props["gpsinfo::lat"] >>= s.lat)) return false;
    }
    if (props.contains("gpsinfo::lon")) {
        if (!(props["gpsinfo::lon"] >>= s.lon)) return false;
    }
    if (props.contains("gpsinfo::timestamp")) {
        if (!(props["gpsinfo::timestamp"] >>= s.timestamp)) return false;
    }
    return true;
}

inline void operator<<= (CORBA::Any& a, const gpsinfo_struct& s) {
    redhawk::PropertyMap props;
 
    props["gpsinfo::lat"] = s.lat;
 
    props["gpsinfo::lon"] = s.lon;
 
    props["gpsinfo::timestamp"] = s.timestamp;
    a <<= props;
}

inline bool operator== (const gpsinfo_struct& s1, const gpsinfo_struct& s2) {
    if (s1.lat!=s2.lat)
        return false;
    if (s1.lon!=s2.lon)
        return false;
    if (s1.timestamp!=s2.timestamp)
        return false;
    return true;
}

inline bool operator!= (const gpsinfo_struct& s1, const gpsinfo_struct& s2) {
    return !(s1==s2);
}

#endif // STRUCTPROPS_H
