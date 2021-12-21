/*
 * Copyright (C) 2021 Huawei Device Co., Ltd.
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 */
/* libexfat/config.h.in.  Generated from configure.ac by autoheader.  */

#ifndef CONFIG_H
#define CONFIG_H

/* Name of package */
#define PACKAGE "exfat"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT "relan@users.noreply.github.com"

/* Define to the full name of this package. */
#define PACKAGE_NAME "Free exFAT implementation"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "Free exFAT implementation 1.3.0"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "exfat"

/* Define to the home page for this package. */
#define PACKAGE_URL "https://github.com/relan/exfat"

/* Define to the version of this package. */
#define PACKAGE_VERSION "1.3.0"

/* Define if block devices are not supported. */
/* #undef USE_UBLIO */

/* Version number of package */
#define VERSION "1.3.0"

/* Enable large inode numbers on Mac OS X 10.5.  */
#ifndef _DARWIN_USE_64_BIT_INODE
# define _DARWIN_USE_64_BIT_INODE 1
#endif

/* Enable vsyslog(). */
#define _DEFAULT_SOURCE /**/

/* Number of bits in a file offset, on hosts where this is settable. */
/* #undef _FILE_OFFSET_BITS */

/* Define for large files, on AIX-style hosts. */
/* #undef _LARGE_FILES */

/* Enable pread() and pwrite(). */
#define _XOPEN_SOURCE 500
#endif
