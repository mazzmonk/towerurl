/*
 * convert_to_json.cc
 *
 *  Created on: 2018年4月18日
 *      Author: jack
 */

#include "../../include/json/convert_to_json.h"

#include <boost/property_tree/ptree.hpp>
#include <boost/property_tree/json_parser.hpp>

namespace myjson {

void ConvertToJson::Read(const std::string& s) {
  boost::property_tree::ptree pt;
  boost::property_tree::read_json(s, json_pimpl_->Get_pt_());

}

void ConvertToJson::Write(const std::string& s) {

}

}  //namespace myjson

