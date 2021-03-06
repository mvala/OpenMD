/*
 * Copyright (c) 2005 The University of Notre Dame. All Rights Reserved.
 *
 * The University of Notre Dame grants you ("Licensee") a
 * non-exclusive, royalty free, license to use, modify and
 * redistribute this software in source and binary code form, provided
 * that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the
 *    distribution.
 *
 * This software is provided "AS IS," without a warranty of any
 * kind. All express or implied conditions, representations and
 * warranties, including any implied warranty of merchantability,
 * fitness for a particular purpose or non-infringement, are hereby
 * excluded.  The University of Notre Dame and its licensors shall not
 * be liable for any damages suffered by licensee as a result of
 * using, modifying or distributing the software or its
 * derivatives. In no event will the University of Notre Dame or its
 * licensors be liable for any lost revenue, profit or data, or for
 * direct, indirect, special, consequential, incidental or punitive
 * damages, however caused and regardless of the theory of liability,
 * arising out of the use of or inability to use software, even if the
 * University of Notre Dame has been advised of the possibility of
 * such damages.
 *
 * SUPPORT OPEN SCIENCE!  If you use OpenMD or its source code in your
 * research, please cite the appropriate papers when you publish your
 * work.  Good starting points are:
 *                                                                      
 * [1]  Meineke, et al., J. Comp. Chem. 26, 252-271 (2005).             
 * [2]  Fennell & Gezelter, J. Chem. Phys. 124, 234104 (2006).          
 * [3]  Sun, Lin & Gezelter, J. Chem. Phys. 128, 234107 (2008).          
 * [4]  Kuang & Gezelter,  J. Chem. Phys. 133, 164101 (2010).
 * [5]  Vardeman, Stocker & Gezelter, J. Chem. Theory Comput. 7, 834 (2011).
 */
#ifndef APPLICATIONS_SEQUENTIALPROPS_SEQUENTIALANALYZER_HPP
#define APPLICATIONS_SEQUENTIALPROPS_SEQUENTIALANALYZER_HPP

#include <string>
#include <vector>

#include "brains/SimInfo.hpp"
#include "brains/BlockSnapshotManager.hpp"

#include "primitives/StuntDouble.hpp"
#include "selection/SelectionEvaluator.hpp"
#include "selection/SelectionManager.hpp"

namespace OpenMD {

  /**
   * @class SequentialAnalyzer SequentialAnalyzer.hpp "applications/sequentialProps/SequentialAnalyzer"
   * @brief Base class for Sequence Analyzer
   */
 
  class SequentialAnalyzer {
  public:
    SequentialAnalyzer(SimInfo* info, const std::string& filename) : 
      info_(info), currentSnapshot_(NULL), dumpFilename_(filename), 
      step_(1)  {}
    
    virtual ~SequentialAnalyzer(){ }    
    virtual void doSequence();

    void setOutputName(const std::string& filename) {
      outputFilename_ = filename;
    }

    const std::string& getOutputFileName() const {
      return outputFilename_;
    }

    void setStep(int step) {
      assert(step > 0);
      step_ = step;    
    }

    int getStep() { return step_; }

    const std::string& getSequenceType() const {
      return sequenceType_;
    }

    void setSequenceType(const std::string& type) {
      sequenceType_ = type;
    }

    void setExtraInfo(const std::string& extra) {
      extra_ = extra;
    }

  protected:
    virtual void preSequence() {}        
    virtual void postSequence() {}
    virtual void writeSequence();
    virtual void doFrame() = 0;

    SimInfo* info_;
    Snapshot* currentSnapshot_;
    std::string dumpFilename_;        
    std::string outputFilename_;
    int step_;
    int storageLayout_;
    std::vector<RealType> times_;
    std::vector<RealType> values_;
    std::string sequenceType_;
    std::string extra_;


  };
}
#endif
