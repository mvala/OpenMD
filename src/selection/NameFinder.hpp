/*
 * Copyright (c) 2005 The University of Notre Dame. All Rights Reserved.
 *
 * The University of Notre Dame grants you ("Licensee") a
 * non-exclusive, royalty free, license to use, modify and
 * redistribute this software in source and binary code form, provided
 * that the following conditions are met:
 *
 * 1. Acknowledgement of the program authors must be made in any
 *    publication of scientific results based in part on use of the
 *    program.  An acceptable form of acknowledgement is citation of
 *    the article in which the program was described (Matthew
 *    A. Meineke, Charles F. Vardeman II, Teng Lin, Christopher
 *    J. Fennell and J. Daniel Gezelter, "OOPSE: An Object-Oriented
 *    Parallel Simulation Engine for Molecular Dynamics,"
 *    J. Comput. Chem. 26, pp. 252-271 (2005))
 *
 * 2. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *
 * 3. Redistributions in binary form must reproduce the above copyright
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
 */
#ifndef SELECTION_NAMEFINDER_HPP
#define SELECTION_NAMEFINDER_HPP
#include <set>
#include <string>
#include <map>
#include "brains/SimInfo.hpp"
#include "utils/OOPSEBitSet.hpp"
namespace oopse {

  class TreeNode{
  public:
    ~TreeNode();
    std::string name;
    OOPSEBitSet bs;
    std::map<std::string, TreeNode*> children;
  };

  class NameFinder{
  public:
    NameFinder(SimInfo* info);
    ~NameFinder();
    OOPSEBitSet  match(const std::string& name);

  private:
    void loadNames();
    void matchMolecule(const std::string& molName, OOPSEBitSet& bs);
    void matchStuntDouble(const std::string& molName, const std::string& sdName, OOPSEBitSet& bs);
    void matchRigidAtoms(const std::string& molName, const std::string& rbName, const std::string& rbAtomName, OOPSEBitSet& bs);

    void matchInternalIndex(const std::string& name, int internalIndex, OOPSEBitSet& bs);

    TreeNode* createNode(TreeNode* parent, const std::string& name);
    std::vector<TreeNode*> getMatchedChildren(TreeNode* node, const std::string& name);
    bool isMatched(const std::string& str, const std::string& wildcard);

    bool isInteger(const std::string str);

    SimInfo* info_;
    int nStuntDouble_;
    TreeNode* root_;
  };


}
#endif
