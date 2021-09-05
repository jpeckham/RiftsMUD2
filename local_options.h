// This file contains detailed readme for each local_options option.

/****************************************************************************
 * EVERY time you change ANYTHING in this file, RECOMPILE from scratch.     *
 * (type "make clean" then "make" on a UNIX system) Failure to do so may    *
 * cause the driver to behave oddly.                                        *
 ****************************************************************************/

#ifndef _LOCAL_OPTIONS_H_
#define _LOCAL_OPTIONS_H_

/****************************************************************************
 *                              COMPAT                                      *
 ****************************************************************************/

#undef NO_ADD_ACTION
#undef NO_SNOOP
#undef NO_WIZARDS
#undef NO_LIGHT
#define OLD_ED
#undef ED_INDENT_CASE
#define ED_INDENT_SPACES 4
#undef ED_USE_TABS
#define ED_TAB_WIDTH 8
#undef RECEIVE_ED
#define RESTRICTED_ED
#undef SENSIBLE_MODIFIERS

/****************************************************************************
 *                           MISCELLANEOUS                                  *
 ****************************************************************************/

#define DEFAULT_PRAGMAS PRAGMA_WARNINGS + PRAGMA_SAVE_TYPES + PRAGMA_ERROR_CONTEXT + PRAGMA_OPTIMIZE
#define SAVE_EXTENSION ".o"
#undef PRIVS
#undef NO_SHADOWS
#undef USE_ICONV
#undef IPV6

/****************************************************************************
 *                              PACKAGES                                    *
 ****************************************************************************/

// PACKAGES are moved to CMAKE options, please don't try to add #define PACKAGE_* here.

/****************************************************************************
 *                              PACKAGES CONFIGS                            *
 ****************************************************************************/

// configs for PACKAGE_COMPRESS
#define SAVE_GZ_EXTENSION ".o.gz"

// configs for PACKAGE_UIDS
#define AUTO_SETEUID
#undef AUTO_TRUST_BACKBONE

// configs for PACKAGE_PARSE
#define PARSE_DEBUG /* Only take effect in DEBUG build */

#endif /* _LOCAL_OPTIONS_H_ */