/* Test of calloc function.
   Copyright (C) 2010-2013 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

#include <config.h>

#include <stdlib.h>

int
main ()
{
  /* Check that calloc (0, 0) is not a NULL pointer.  */
  if (calloc (0, 0) == NULL)
    return 1;

  /* Check that calloc fails when requested to allocate a block of memory
     larger than SIZE_MAX bytes.  */
  if (calloc ((size_t) -1 / 8 + 1, 8) != NULL)
    return 1;

  return 0;
}
