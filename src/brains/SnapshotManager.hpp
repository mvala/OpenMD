/*
 * Copyright (C) 2000-2004  Object Oriented Parallel Simulation Engine (OOPSE) project
 * 
 * Contact: oopse@oopse.org
 * 
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public License
 * as published by the Free Software Foundation; either version 2.1
 * of the License, or (at your option) any later version.
 * All we ask is that proper credit is given for our work, which includes
 * - but is not limited to - adding the above copyright notice to the beginning
 * of your source code files, and to any copyright notice that you may distribute
 * with programs based on this work.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 * 
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
 *
 */
 
 /**
  * @file SnapshotManager.hpp
  * @author tlin
  * @date 10/20/2004
  * @time 23:56am
  * @version 1.0
  */
#ifndef BRAINS_SNAPSHOTMANAGER_HPP
#define BRAINS_SNAPSHOTMANAGER_HPP

#include "brains/Snapshot.hpp"

namespace oopse{

    /**
     * @class SnapshotManager SnapshotManager.hpp "brains/SnapshotManager.hpp"
     * @brief SnapshotManager class is an abstract class which maintains 
     * a series of snapshots.
     * 
     * @see SimSnapshotManager
     * @see PropSnapshotManager
     */
    class SnapshotManager {
        public:
            SnapshotManager() : currentSnapshot_(NULL), previousSnapshot_(NULL) {
            }
            virtual ~SnapshotManager();
            virtual bool advance() = 0;

            virtual Snapshot* getSnapshot(int id) = 0;

            /**
             * Returns the pointer of previous snapshot
             * @return the pointer of previous snapshot
             */
            Snapshot* getPrevSnapshot() {
                return previousSnapshot_;
            }

            /**
             * Returns the pointer of current snapshot
             * @return the pointer of current snapshot
             */            
            Snapshot* getCurrentSnapshot() {
                return currentSnapshot_;
            }
            
            int getCapacity();

            virtual void setCapacity(int capacity);

            bool getNotifyStatus();
            
            void setNotifyStatus(bool status);

            void attach(SnapshotObserver*);

            void detach(SnapshotObserver*);

            void notify();

        protected:
            Snapshot* currentSnapshot_;
            Snapshot* previousSnapshot_;
            
        private:
            vector<SnapshotObserver*> observers_;

    };

}
#endif //BRAINS_SNAPSHOTMANAGER_HPP

