#include "DescribeParameters_Request_SplDcps.h"
#include "ccpp_DescribeParameters_Request_.h"
#include "dds_type_aliases.h"

const char *
__rcl_interfaces_srv_dds__DescribeParameters_Request___name(void)
{
    return (const char*)"rcl_interfaces::srv::dds_::DescribeParameters_Request_";
}

const char *
__rcl_interfaces_srv_dds__DescribeParameters_Request___keys(void)
{
    return (const char*)"";
}

#include <v_kernel.h>
#include <v_topic.h>
#include <os_stdlib.h>
#include <string.h>
#include <os_report.h>

c_bool
__rcl_interfaces_srv_dds__DescribeParameters_Request___copyIn(
    c_base base,
    struct ::rcl_interfaces::srv::dds_::DescribeParameters_Request_ *from,
    struct _rcl_interfaces_srv_dds__DescribeParameters_Request_ *to)
{
    c_bool result = OS_C_TRUE;
    (void) base;

    {
/* Code generated by /home/erle/opensplice/src/tools/idlpp/code/idl_genCorbaCxxCopyin.c at line 774 */

        static c_type type0 = NULL;
        c_type subtype0;
        c_long length0;
        c_string *dest0;
        ::rcl_interfaces::srv::dds_::DescribeParameters_Request_::_names__seq *src = &from->names_;

        if (type0 == NULL) {
            subtype0 = c_type(c_metaResolve (c_metaObject(base), "c_string"));
            type0 = c_metaSequenceTypeNew(c_metaObject(base),"C_SEQUENCE<c_string>",subtype0,0);
            c_free(subtype0);
        }
        length0 = (c_long)(*src).length();
#ifdef OSPL_BOUNDS_CHECK
         dest0 = (c_string *)c_newSequence(c_collectionType(type0),length0);
        {
        /* Code generated by /home/erle/opensplice/src/tools/idlpp/code/idl_genCorbaCxxCopyin.c at line 1928 */
            unsigned int i0;
            for (i0 = 0; (i0 < (unsigned int)length0) && result; i0++) {
#ifdef OSPL_BOUNDS_CHECK
                if((*src)[i0]){
                    dest0[i0] = c_stringNew(base, (*src)[i0]);
                } else {
                    OS_REPORT (OS_ERROR, "copyIn", 0,"Element of 'rcl_interfaces::srv::dds_::DescribeParameters_Request_.*src' of type 'c_string' is NULL.");
                    result = OS_C_FALSE;
                }
#else
                dest0[i0] = c_stringNew(base, (*src)[i0]);
#endif
            }
        }
        to->names_ = (c_sequence)dest0;
#else
        dest0 = (c_string *)c_newSequence(c_collectionType(type0),length0);
        {
        /* Code generated by /home/erle/opensplice/src/tools/idlpp/code/idl_genCorbaCxxCopyin.c at line 1928 */
            unsigned int i0;
            for (i0 = 0; (i0 < (unsigned int)length0) && result; i0++) {
#ifdef OSPL_BOUNDS_CHECK
                if((*src)[i0]){
                    dest0[i0] = c_stringNew(base, (*src)[i0]);
                } else {
                    OS_REPORT (OS_ERROR, "copyIn", 0,"Element of 'rcl_interfaces::srv::dds_::DescribeParameters_Request_.*src' of type 'c_string' is NULL.");
                    result = OS_C_FALSE;
                }
#else
                dest0[i0] = c_stringNew(base, (*src)[i0]);
#endif
            }
        }
        to->names_ = (c_sequence)dest0;
#endif
    }
    return result;
}

void
__rcl_interfaces_srv_dds__DescribeParameters_Request___copyOut(
    void *_from,
    void *_to)
{
    struct _rcl_interfaces_srv_dds__DescribeParameters_Request_ *from = (struct _rcl_interfaces_srv_dds__DescribeParameters_Request_ *)_from;
    struct ::rcl_interfaces::srv::dds_::DescribeParameters_Request_ *to = (struct ::rcl_interfaces::srv::dds_::DescribeParameters_Request_ *)_to;
    {
        long size0;
        c_string *src0 = (c_string *)from->names_;
        ::rcl_interfaces::srv::dds_::DescribeParameters_Request_::_names__seq *dst = &to->names_;

        size0 = c_arraySize(c_sequence(from->names_));
        to->names_.length(size0);
        {
            long i0;
            for (i0 = 0; i0 < size0; i0++) {
                (*dst)[i0] = DDS::string_dup(src0[i0]);
            }
        }
    }
}
