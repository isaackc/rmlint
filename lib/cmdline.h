/**
* This file is part of rmlint.
*
*  rmlint is free software: you can redistribute it and/or modify
*  it under the terms of the GNU General Public License as published by
*  the Free Software Foundation, either version 3 of the License, or
*  (at your option) any later version.
*
*  rmlint is distributed in the hope that it will be useful,
*  but WITHOUT ANY WARRANTY; without even the implied warranty of
*  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
*  GNU General Public License for more details.
*
*  You should have received a copy of the GNU General Public License
*  along with rmlint.  If not, see <http://www.gnu.org/licenses/>.
*
* Authors:
*
*  - Christopher <sahib> Pahl 2010-2020 (https://github.com/sahib)
*  - Daniel <SeeSpotRun> T.   2014-2020 (https://github.com/SeeSpotRun)
*
* Hosted on http://github.com/sahib/rmlint
*
**/

#ifndef RM_CMDLINE_H
#define RM_CMDLINE_H

#include "session.h"

/**
 * @brief Parse all arguments specified in argc/argv and set the aprop. cfg
 * in session->cfg.
 *
 * @return false on parse error (running makes no sense then)
 */
bool rm_cmd_parse_args(int argc, char **argv, RmSession *session);

/**
 * @brief Trigger the main method of rmlint.
 *
 * @return exit_status for exit()
 */
int rm_cmd_main(RmSession *session);

#endif
