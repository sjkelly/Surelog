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
 * File:   UhdmWriter.h
 * Author: alain
 *
 * Created on January 17, 2020, 9:12 PM
 */

#ifndef UHDMWRITER_H
#define UHDMWRITER_H

#include <string>

#include "Design/Design.h"
#include "DesignCompile/CompileDesign.h"
#include "SourceCompile/VObjectTypes.h"

namespace SURELOG {

class UhdmWriter final {
 public:
  UhdmWriter(CompileDesign* compiler, Design* design)
      : m_compileDesign(compiler), m_design(design) {}

  vpiHandle write(const std::string& uhdmFile) const;

  static unsigned int getVpiDirection(VObjectType type);

  static unsigned int getVpiNetType(VObjectType type);

  static unsigned int getVpiOpType(VObjectType type);

  static unsigned int getStrengthType(VObjectType type);

 private:
  CompileDesign* const m_compileDesign;
  Design* const m_design;
};

}  // namespace SURELOG

#endif /* UHDMWRITER_H */
