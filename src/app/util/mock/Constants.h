/*
 *
 *    Copyright (c) 2021 Project CHIP Authors
 *    All rights reserved.
 *
 *    Licensed under the Apache License, Version 2.0 (the "License");
 *    you may not use this file except in compliance with the License.
 *    You may obtain a copy of the License at
 *
 *        http://www.apache.org/licenses/LICENSE-2.0
 *
 *    Unless required by applicable law or agreed to in writing, software
 *    distributed under the License is distributed on an "AS IS" BASIS,
 *    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *    See the License for the specific language governing permissions and
 *    limitations under the License.
 */

/**
 *    @file
 *     This file contains the constants for the mocked attribute-storage.cpp
 */

#pragma once

#include <lib/core/DataModelTypes.h>

namespace chip {
namespace Test {
constexpr EndpointId kMockEndpoint1 = 0xFFFE;
constexpr EndpointId kMockEndpoint2 = 0xFFFD;
constexpr EndpointId kMockEndpoint3 = 0xFFFC;

constexpr AttributeId MockAttributeId(const uint16_t & id)
{
    return (0xFFF1'0000 | id);
}

constexpr AttributeId MockClusterId(const uint16_t & id)
{
    return (0xFFF1'0000 | id);
}

} // namespace Test
} // namespace chip
