#include "JoyFeedbackArray_SplDcps.h"
#include "ccpp_JoyFeedbackArray_.h"
#include "dds_type_aliases.h"

const char *
__sensor_msgs_msg_dds__JoyFeedbackArray___name(void)
{
    return (const char*)"sensor_msgs::msg::dds_::JoyFeedbackArray_";
}

const char *
__sensor_msgs_msg_dds__JoyFeedbackArray___keys(void)
{
    return (const char*)"";
}

#include <v_kernel.h>
#include <v_topic.h>
#include <os_stdlib.h>
#include <string.h>
#include <os_report.h>

c_bool
__sensor_msgs_msg_dds__JoyFeedbackArray___copyIn(
    c_base base,
    struct ::sensor_msgs::msg::dds_::JoyFeedbackArray_ *from,
    struct _sensor_msgs_msg_dds__JoyFeedbackArray_ *to)
{
    c_bool result = OS_C_TRUE;
    (void) base;

    {
/* Code generated by /home/erle/opensplice/src/tools/idlpp/code/idl_genCorbaCxxCopyin.c at line 774 */

        static c_type type0 = NULL;
        c_type subtype0;
        c_long length0;
        struct _sensor_msgs_msg_dds__JoyFeedback_ *dest0;
        ::sensor_msgs::msg::dds_::JoyFeedbackArray_::_array__seq *src = &from->array_;

        if (type0 == NULL) {
            subtype0 = c_type(c_metaResolve (c_metaObject(base), "sensor_msgs::msg::dds_::JoyFeedback_"));
            type0 = c_metaSequenceTypeNew(c_metaObject(base),"C_SEQUENCE<sensor_msgs::msg::dds_::JoyFeedback_>",subtype0,0);
            c_free(subtype0);
        }
        length0 = (c_long)(*src).length();
#ifdef OSPL_BOUNDS_CHECK
         dest0 = (struct _sensor_msgs_msg_dds__JoyFeedback_ *)c_newSequence(c_collectionType(type0),length0);
        {
        /* Code generated by /home/erle/opensplice/src/tools/idlpp/code/idl_genCorbaCxxCopyin.c at line 1873 */
                    struct _sensor_msgs_msg_dds__JoyFeedback_ *buf0;
            buf0 = (struct _sensor_msgs_msg_dds__JoyFeedback_ *)(*src).get_buffer();
            memcpy (dest0,buf0,length0* sizeof(*dest0));
        }
        to->array_ = (c_sequence)dest0;
#else
        dest0 = (struct _sensor_msgs_msg_dds__JoyFeedback_ *)c_newSequence(c_collectionType(type0),length0);
        {
        /* Code generated by /home/erle/opensplice/src/tools/idlpp/code/idl_genCorbaCxxCopyin.c at line 1873 */
                    struct _sensor_msgs_msg_dds__JoyFeedback_ *buf0;
            buf0 = (struct _sensor_msgs_msg_dds__JoyFeedback_ *)(*src).get_buffer();
            memcpy (dest0,buf0,length0* sizeof(*dest0));
        }
        to->array_ = (c_sequence)dest0;
#endif
    }
    return result;
}

void
__sensor_msgs_msg_dds__JoyFeedbackArray___copyOut(
    void *_from,
    void *_to)
{
    struct _sensor_msgs_msg_dds__JoyFeedbackArray_ *from = (struct _sensor_msgs_msg_dds__JoyFeedbackArray_ *)_from;
    struct ::sensor_msgs::msg::dds_::JoyFeedbackArray_ *to = (struct ::sensor_msgs::msg::dds_::JoyFeedbackArray_ *)_to;
    {
        long size0;
        struct _sensor_msgs_msg_dds__JoyFeedback_ *src0 = (struct _sensor_msgs_msg_dds__JoyFeedback_ *)from->array_;
        ::sensor_msgs::msg::dds_::JoyFeedbackArray_::_array__seq *dst = &to->array_;

        size0 = c_arraySize(c_sequence(from->array_));
        to->array_.length(size0);
        {
            struct _sensor_msgs_msg_dds__JoyFeedback_ *buf0;
            buf0 = (struct _sensor_msgs_msg_dds__JoyFeedback_ *)(*dst).get_buffer();
            memcpy (buf0,src0,size0* sizeof(*buf0));
        }
    }
}
