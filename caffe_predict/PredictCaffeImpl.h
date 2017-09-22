#pragma once

#include "IPredict.h"

namespace ka
{
//
class PredictCaffeImpl : public IPredict
{
public:
    PredictCaffeImpl();
    ~PredictCaffeImpl();

    //
    virtual eErrorCode load_model_from_file(const char * pPathName) override;

    //
    virtual eErrorCode set_data(
        const char * layer_name, 
        void * data, 
        int n,
        int c,
        int h,
        int w
    ) override;

    //
    virtual eErrorCode predict() override;

    //
    virtual eErrorCode get_result(void * data_out, int * buf_len) override;
};

}