#include "PredictCaffeImpl.h"

namespace ka
{
    //
    PredictCaffeImpl::PredictCaffeImpl()
    {

    }

    //
    PredictCaffeImpl::~PredictCaffeImpl()
    {
        
    }

    //
    eErrorCode PredictCaffeImpl::load_model_from_file(const char * pPathName)
    {
        eErrorCode ret = err_ok;

        return ret;
    }
    
    //
    eErrorCode PredictCaffeImpl::set_data(
        const char * layer_name, 
        void * data, 
        int n,
        int c,
        int h,
        int w
    )
    {
        eErrorCode ret = err_ok;
        
        return ret;
    }

    //
    eErrorCode PredictCaffeImpl::predict()
    {
        eErrorCode ret = err_ok;
        
        return ret;
    }

    //
    eErrorCode PredictCaffeImpl::get_result(void * data_out, int * buf_len)
    {
        eErrorCode ret = err_ok;
        
        return ret;
    }

    //
    std::shared_ptr<IPredict> create_caffe()
    {
        return std::shared_ptr<PredictCaffeImpl>(new PredictCaffeImpl());
    }
}