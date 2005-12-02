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
 
#ifndef TYPES_MOLECULESTAMP_HPP
#define TYPES_MOLECULESTAMP_HPP
#include <vector>
#include <utility>
#include "types/AtomStamp.hpp"
#include "types/BondStamp.hpp"
#include "types/BendStamp.hpp"
#include "types/TorsionStamp.hpp"
#include "types/RigidBodyStamp.hpp"
#include "types/CutoffGroupStamp.hpp"
#include "types/FragmentStamp.hpp"

namespace oopse {
class MoleculeStamp : public DataHolder {
    DeclareParameter(Name, std::string);
  public:
    MoleculeStamp();
    virtual ~MoleculeStamp();
    
    bool addAtomStamp( AtomStamp* atom);
    bool addBondStamp( BondStamp* bond);
    bool addBendStamp( BendStamp* bend);
    bool addTorsionStamp( TorsionStamp* torsion);  
    bool addRigidBodyStamp( RigidBodyStamp* rigidbody);
    bool addCutoffGroupStamp( CutoffGroupStamp* cutoffgroup);
    bool addFragmentStamp( FragmentStamp* fragment);
  
    int  getNAtoms() { return atomStamps_.size(); }
    int  getNBonds() { return bondStamps_.size(); }
    int  getNBends() { return bendStamps_.size(); }
    int  getNTorsions() { return torsionStamps_.size(); }
    int  getNRigidBodies() { return rigidBodyStamps_.size(); }
    int  getNCutoffGroups() { return cutoffGroupStamps_.size(); }  
    int getNIntegrable() { return nintegrable_;}
    virtual void validate();
    
    AtomStamp* getAtomStamp(int index) { return atomStamps_[index]; }
    BondStamp* getBondStamp(int index) { return bondStamps_[index]; }
    BendStamp* getBendStamp(int index) { return bendStamps_[index]; }
    TorsionStamp* getTorsionStamp(int index) { return torsionStamps_[index]; }
    RigidBodyStamp* getRigidBodyStamp(int index) { return rigidBodyStamps_[index]; }
    CutoffGroupStamp* getCutoffGroupStamp(int index) { return cutoffGroupStamps_[index]; }
    FragmentStamp* getFragmentStamp(int index) { return fragmentStamps_[index]; }

    bool isBondInSameRigidBody(BondStamp*bond);
    bool isAtomInRigidBody(int atomIndex);  
    bool isAtomInRigidBody(int atomIndex, int& whichRigidBody, int& consAtomIndex);  
    std::vector<std::pair<int, int> > getJointAtoms(int rb1, int rb2);
  
  private:

    void fillBondInfo();
    void findBends();
    void findTorsions();
    
    template <class Cont, class T>
    bool addIndexSensitiveStamp(Cont& cont, T* stamp) {
    typename Cont::iterator i;
    int index = stamp->getIndex();
    bool ret = false;
    size_t size = cont.size();
    
    if (size >= index +1) {
        if (cont[index]!= NULL) {
            ret = false;
        }else {
            cont[index] = stamp;
            ret = true;
        }
    } else {
        cont.insert(cont.end(), index - cont.size() + 1, NULL);
        cont[index] = stamp;
        ret = true;
    }
    
    return ret;
    }
    
    std::vector<AtomStamp*> atomStamps_;
    std::vector<BondStamp*> bondStamps_;
    std::vector<BendStamp*> bendStamps_;
    std::vector<TorsionStamp*> torsionStamps_;
    std::vector<RigidBodyStamp*> rigidBodyStamps_;
    std::vector<CutoffGroupStamp*> cutoffGroupStamps_;
    std::vector<FragmentStamp*> fragmentStamps_;
    std::vector<int> atom2Rigidbody;
    int nintegrable_;
};

}
#endif
