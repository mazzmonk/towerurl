/*
 * json-pimpl.cc
 *
 *  Created on: 2018年4月18日
 *      Author: jack
 */

#include "convert_to_json.h"
#include "convert_to_json.cc"

#include <string>
#include <iostream>

namespace myjson {

class ConvertToJson::JsonPimpl {
 public:
  boost::property_tree::ptree Get_pt_()  {
    return pt_;
  }

 private:
  boost::property_tree::ptree pt_;


};

}  //namespace myjson

