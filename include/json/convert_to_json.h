/*
 * convert_to_json.h
 *
 *  Created on: 2018年4月18日
 *      Author: jack
 */

#ifndef INCLUDE_JSON_CONVERT_TO_JSON_H_
#define INCLUDE_JSON_CONVERT_TO_JSON_H_

#include <boost/foreach.hpp>
#include <string>
#include <set>

namespace myjson {

class ConvertToJson {
 public:
  ConvertToJson() {
    json_pimpl_ = new JsonPimpl();
  }
  ~ConvertToJson() {
    delete json_pimpl_;
  }
  void Read(const std::string& s);
  void Write(const std::string& s);

 private:
  class JsonPimpl;
  JsonPimpl* json_pimpl_;

};

}   //namespace myjson

#endif /* INCLUDE_JSON_CONVERT_TO_JSON_H_ */
