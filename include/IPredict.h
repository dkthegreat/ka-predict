#pragma once

#include "TypeDefs.h"
#include <memory>

namespace ka
{

//
class IPredict
{
public:
    IPredict() {}
    virtual ~IPredict() {}

    //
    virtual eErrorCode load_model_from_file(const char * pPathName) = 0;

    //
    virtual eErrorCode set_data(
        const char * layer_name, 
        void * data, 
        int n,
        int c,
        int h,
        int w
    ) = 0;

    //
    virtual eErrorCode predict() = 0;

    //
    virtual eErrorCode get_result(void * data_out, int * buf_len) = 0;
};

std::shared_ptr<IPredict> create_caffe();

}