/***************************************************************************
 *   Copyright (C) 2007 by carm   *
 *   carm@localhost   *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 ***************************************************************************/


#ifndef QPROJECTM_FILEDIALOG_H
#define QPROJECTM_FILEDIALOG_H


#define CONFIG_FILE "/share/projectM/config.inp"

#include <QMainWindow>
#include <QCloseEvent>
#include <cassert>
#include "libprojectM/projectM.hpp"

#include <iostream>
#include <QFileDialog>

 class QProjectMFileDialog : public QFileDialog
 {
     Q_OBJECT        // must include this if you use Qt signals/slots

 public:
     QProjectMFileDialog(QWidget * parent = 0): 
		QFileDialog(parent, "Add preset files", QString(), "Presets (*.prjm *.milk)" ) {

		this->setFileMode(QFileDialog::ExistingFiles);
	}
	
     ~QProjectMFileDialog() { }
 private:
	
	
};
#endif
