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
 
/**
 * @file Bend.hpp
 * @author    tlin
 * @date  11/01/2004
 * @version 1.0
 */ 


#ifndef PRIMITIVES_BEND_HPP
#define PRIMITIVES_BEND_HPP
#include "primitives/Atom.hpp"
#include "types/BendType.hpp"
namespace oopse {

class Bend {
    public:
        Bend(Atom* atom1, Atom* atom2, Atom* atom3, BendType* bt)
            : atom1_(atom1), atom2_(atom2), atom3_(atom3), bendType_(bt) {}


        virtual void calcForce();
        
        double getPotential() {
            return potential_;
        }

        Atom* getAtomA() {
            return atom1_;
        }

        Atom* getAtomB() {
            return atom2_;
        }

        Atom* getAtomC() {
            return atom3_;
        }

        BendType * getBendType() {
            return bendType_;
        }

    protected:
        
        double potential_;
        Atom* atom1_;
        Atom* atom2_;
        Atom* atom3_;
        BendType* bendType_; /**< bend type */

};    



} //end namespace oopse
#endif //PRIMITIVES_BEND_HPP
