/*
   +----------------------------------------------------------------------+
   | PHP Version 4                                                        |
   +----------------------------------------------------------------------+
   | Copyright (c) 1997-2002 The PHP Group                                |
   +----------------------------------------------------------------------+
   | This source file is subject to version 2.02 of the PHP license,      |
   | that is bundled with this package in the file LICENSE, and is        |
   | available at through the world-wide-web at                           |
   | http://www.php.net/license/2_02.txt.                                 |
   | If you did not receive a copy of the PHP license and are unable to   |
   | obtain it through the world-wide-web, please send a note to          |
   | license@php.net so we can mail you a copy immediately.               |
   +----------------------------------------------------------------------+
   | Authors: Matthew Sachs <matthewg@zevils.com>                         |
   +----------------------------------------------------------------------+
*/
 
/* $Id: php_libsmbclient.h 1216 2003-02-27 04:43:22Z matthewg $ */
 
#ifndef PHP_LIBSMBCLIENT_H
#define PHP_LIBSMBCLIENT_H

#include <libsmbclient.h>

extern zend_module_entry libsmbclient_module_entry;
#define phpext_libsmbclient_ptr &libsmbclient_module_entry

typedef struct {
} php_libsmbclient_globals;

PHP_MINIT_FUNCTION(smbclient);
PHP_MSHUTDOWN_FUNCTION(smbclient);
PHP_RINIT_FUNCTION(smbclient);
PHP_MINFO_FUNCTION(smbclient);
PHP_FUNCTION(smbclient_opendir);
PHP_FUNCTION(smbclient_rename);
PHP_FUNCTION(smbclient_mkdir);
PHP_FUNCTION(smbclient_closedir);
PHP_FUNCTION(smbclient_readdir);
PHP_FUNCTION(smbclient_stat);
PHP_FUNCTION(smbclient_open);
PHP_FUNCTION(smbclient_creat);
PHP_FUNCTION(smbclient_read);
PHP_FUNCTION(smbclient_close);
PHP_FUNCTION(smbclient_write);
PHP_FUNCTION(smbclient_unlink);
PHP_FUNCTION(smbclient_rmdir);

#ifdef ZTS
#define LIBSMBCLIENT(v) TSRMG(libsmbclient_globals_id, php_libsmbclient_globals *, v)
#else
#define LIBSMBCLIENT(v) (libsmbclient_globals.v)
#endif

#endif /* _SMBCLIENT_MODULE_H */
