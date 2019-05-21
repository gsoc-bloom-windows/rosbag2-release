// Copyright 2018, Bosch Software Innovations GmbH.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef ROSBAG2__SERIALIZER_TEST_PLUGIN_HPP_
#define ROSBAG2__SERIALIZER_TEST_PLUGIN_HPP_

#include <memory>

#include "rosbag2/converter_interfaces/serialization_format_serializer.hpp"

class SerializerTestPlugin
  : public rosbag2::converter_interfaces::SerializationFormatSerializer
{
public:
  void serialize(
    std::shared_ptr<const rosbag2_introspection_message_t> ros_message,
    const rosidl_message_type_support_t * type_support,
    std::shared_ptr<rosbag2::SerializedBagMessage> serialized_message) override;
};

#endif  // ROSBAG2__SERIALIZER_TEST_PLUGIN_HPP_
