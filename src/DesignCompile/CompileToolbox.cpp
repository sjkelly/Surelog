/*
 Copyright 2019 Alain Dargelas

 Licensed under the Apache License, Version 2.0 (the "License");
 you may not use this file except in compliance with the License.
 You may obtain a copy of the License at

 http://www.apache.org/licenses/LICENSE-2.0

 Unless required by applicable law or agreed to in writing, software
 distributed under the License is distributed on an "AS IS" BASIS,
 WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 See the License for the specific language governing permissions and
 limitations under the License.
 */

/*
 * File:   CompileToolbox.cpp
 * Author: alain
 *
 * Created on June 13, 2018, 9:36 PM
 */
#include "DesignCompile/CompileToolbox.h"

namespace SURELOG {
CompileToolbox::CompileToolbox() {}

CompileToolbox::~CompileToolbox() {}

bool CompileToolbox::compileInitialBlock_(FileContent* fC, NodeId nodeId,
                                          DesignComponent* component) {
  return true;
}
}  // namespace SURELOG
