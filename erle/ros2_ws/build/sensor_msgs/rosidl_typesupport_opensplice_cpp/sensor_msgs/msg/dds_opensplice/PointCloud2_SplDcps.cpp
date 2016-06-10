#include "PointCloud2_SplDcps.h"
#include "ccpp_PointCloud2_.h"
#include "dds_type_aliases.h"

const char *
__sensor_msgs_msg_dds__PointCloud2___name(void)
{
    return (const char*)"sensor_msgs::msg::dds_::PointCloud2_";
}

const char *
__sensor_msgs_msg_dds__PointCloud2___keys(void)
{
    return (const char*)"";
}

#include <v_kernel.h>
#include <v_topic.h>
#include <os_stdlib.h>
#include <string.h>
#include <os_report.h>

c_bool
__sensor_msgs_msg_dds__PointCloud2___copyIn(
    c_base base,
    struct ::sensor_msgs::msg::dds_::PointCloud2_ *from,
    struct _sensor_msgs_msg_dds__PointCloud2_ *to)
{
    c_bool result = OS_C_TRUE;
    (void) base;

    if(result){
        extern c_bool __std_msgs_msg_dds__Header___copyIn(c_base, ::std_msgs::msg::dds_::Header_ *, _std_msgs_msg_dds__Header_ *);
        result = __std_msgs_msg_dds__Header___copyIn(base, &from->header_, &to->header_);
    }
    to->height_ = (c_ulong)from->height_;
    to->width_ = (c_ulong)from->width_;
    {
/* Code generated by /home/erle/opensplice/src/tools/idlpp/code/idl_genCorbaCxxCopyin.c at line 774 */

        static c_type type0 = NULL;
        c_type subtype0;
        c_long length0;
        struct _sensor_msgs_msg_dds__PointField_ *dest0;
        ::sensor_msgs::msg::dds_::PointCloud2_::_fields__seq *src = &from->fields_;

        if (type0 == NULL) {
            subtype0 = c_type(c_metaResolve (c_metaObject(base), "sensor_msgs::msg::dds_::PointField_"));
            type0 = c_metaSequenceTypeNew(c_metaObject(base),"C_SEQUENCE<sensor_msgs::msg::dds_::PointField_>",subtype0,0);
            c_free(subtype0);
        }
        length0 = (c_long)(*src).length();
#ifdef OSPL_BOUNDS_CHECK
         dest0 = (struct _sensor_msgs_msg_dds__PointField_ *)c_newSequence(c_collectionType(type0),length0);
        {
        /* Code generated by /home/erle/opensplice/src/tools/idlpp/code/idl_genCorbaCxxCopyin.c at line 1928 */
            unsigned int i0;
            for (i0 = 0; (i0 < (unsigned int)length0) && result; i0++) {
                extern c_bool __sensor_msgs_msg_dds__PointField___copyIn(c_base base,
                    sensor_msgs::msg::dds_::PointField_ *From,
                    struct _sensor_msgs_msg_dds__PointField_ *To);

                result = __sensor_msgs_msg_dds__PointField___copyIn(base, &(*src)[i0], (struct _sensor_msgs_msg_dds__PointField_ *)&dest0[i0]);
            }
        }
        to->fields_ = (c_sequence)dest0;
#else
        dest0 = (struct _sensor_msgs_msg_dds__PointField_ *)c_newSequence(c_collectionType(type0),length0);
        {
        /* Code generated by /home/erle/opensplice/src/tools/idlpp/code/idl_genCorbaCxxCopyin.c at line 1928 */
            unsigned int i0;
            for (i0 = 0; (i0 < (unsigned int)length0) && result; i0++) {
                extern c_bool __sensor_msgs_msg_dds__PointField___copyIn(c_base base,
                    sensor_msgs::msg::dds_::PointField_ *From,
                    struct _sensor_msgs_msg_dds__PointField_ *To);

                result = __sensor_msgs_msg_dds__PointField___copyIn(base, &(*src)[i0], (struct _sensor_msgs_msg_dds__PointField_ *)&dest0[i0]);
            }
        }
        to->fields_ = (c_sequence)dest0;
#endif
    }
    to->is_bigendian_ = (c_bool)from->is_bigendian_;
    to->point_step_ = (c_ulong)from->point_step_;
    to->row_step_ = (c_ulong)from->row_step_;
    {
/* Code generated by /home/erle/opensplice/src/tools/idlpp/code/idl_genCorbaCxxCopyin.c at line 774 */

        static c_type type0 = NULL;
        c_type subtype0;
        c_long length0;
        c_octet *dest0;
        ::sensor_msgs::msg::dds_::PointCloud2_::_data__seq *src = &from->data_;

        if (type0 == NULL) {
            subtype0 = c_type(c_metaResolve (c_metaObject(base), "c_octet"));
            type0 = c_metaSequenceTypeNew(c_metaObject(base),"C_SEQUENCE<c_octet>",subtype0,0);
            c_free(subtype0);
        }
        length0 = (c_long)(*src).length();
#ifdef OSPL_BOUNDS_CHECK
         dest0 = (c_octet *)c_newSequence(c_collectionType(type0),length0);
        {
        /* Code generated by /home/erle/opensplice/src/tools/idlpp/code/idl_genCorbaCxxCopyin.c at line 1873 */
                    c_octet *buf0;
            buf0 = (c_octet *)(*src).get_buffer();
            memcpy (dest0,buf0,length0* sizeof(*dest0));
        }
        to->data_ = (c_sequence)dest0;
#else
        dest0 = (c_octet *)c_newSequence(c_collectionType(type0),length0);
        {
        /* Code generated by /home/erle/opensplice/src/tools/idlpp/code/idl_genCorbaCxxCopyin.c at line 1873 */
                    c_octet *buf0;
            buf0 = (c_octet *)(*src).get_buffer();
            memcpy (dest0,buf0,length0* sizeof(*dest0));
        }
        to->data_ = (c_sequence)dest0;
#endif
    }
    to->is_dense_ = (c_bool)from->is_dense_;
    return result;
}

void
__sensor_msgs_msg_dds__PointCloud2___copyOut(
    void *_from,
    void *_to)
{
    struct _sensor_msgs_msg_dds__PointCloud2_ *from = (struct _sensor_msgs_msg_dds__PointCloud2_ *)_from;
    struct ::sensor_msgs::msg::dds_::PointCloud2_ *to = (struct ::sensor_msgs::msg::dds_::PointCloud2_ *)_to;
    {
        extern void __std_msgs_msg_dds__Header___copyOut(void *, void *);
        __std_msgs_msg_dds__Header___copyOut((void *)&from->header_, (void *)&to->header_);
    }
    to->height_ = (::DDS::ULong)from->height_;
    to->width_ = (::DDS::ULong)from->width_;
    {
        long size0;
        struct _sensor_msgs_msg_dds__PointField_ *src0 = (struct _sensor_msgs_msg_dds__PointField_ *)from->fields_;
        ::sensor_msgs::msg::dds_::PointCloud2_::_fields__seq *dst = &to->fields_;

        size0 = c_arraySize(c_sequence(from->fields_));
        to->fields_.length(size0);
        {
            long i0;
            for (i0 = 0; i0 < size0; i0++) {
                extern void __sensor_msgs_msg_dds__PointField___copyOut(void *from, void *to);
                __sensor_msgs_msg_dds__PointField___copyOut((void *)&src0[i0], (void *)&(*dst)[i0]);
            }
        }
    }
    to->is_bigendian_ = (::DDS::Boolean)(from->is_bigendian_ != 0);
    to->point_step_ = (::DDS::ULong)from->point_step_;
    to->row_step_ = (::DDS::ULong)from->row_step_;
    {
        long size0;
        c_octet *src0 = (c_octet *)from->data_;
        ::sensor_msgs::msg::dds_::PointCloud2_::_data__seq *dst = &to->data_;

        size0 = c_arraySize(c_sequence(from->data_));
        to->data_.length(size0);
        {
            c_octet *buf0;
            buf0 = (c_octet *)(*dst).get_buffer();
            memcpy (buf0,src0,size0* sizeof(*buf0));
        }
    }
    to->is_dense_ = (::DDS::Boolean)(from->is_dense_ != 0);
}

