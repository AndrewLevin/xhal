#include "xhal/rpc/optohybrid.h"

DLLEXPORT uint32_t broadcastRead(uint32_t ohN, char * regName, uint32_t vfatMask){
    req = wisc::RPCMsg("optohybrid.broadcastRead");

    req.set_word("oh_number",ohN);
    req.set_word("reg_name",regName);
    req.set_word("mask",vfatMask);
    wisc::RPCSvc* rpc_loc = getRPCptr();

    try {
        rsp = rpc_loc->call_method(req);
    }
    STANDARD_CATCH;

    if (rsp.get_key_exists("error")) {
        printf("Caught an error: %s\n", (rsp.get_string("error")).c_str());
        return 1;
    }
    return 0;
} //End broadcastRead

DLLEXPORT uint32_t broadcastWrite(uint32_t ohN, char * regName, uint32_t value, uint32_t vfatMask){
    req = wisc::RPCMsg("optohybrid.broadcastWrite");

    req.set_word("oh_number",ohN);
    req.set_word("reg_name",regName);
    req.set_word("value",value);
    req.set_word("mask",vfatMask);
    wisc::RPCSvc* rpc_loc = getRPCptr();

    try {
        rsp = rpc_loc->call_method(req);
    }
    STANDARD_CATCH;

    if (rsp.get_key_exists("error")) {
        printf("Caught an error: %s\n", (rsp.get_string("error")).c_str());
        return 1;
    }
    return 0;
}
