/*
   +----------------------------------------------------------------------+
   | HipHop for PHP                                                       |
   +----------------------------------------------------------------------+
   | Copyright (c) 2010-2013 Facebook, Inc. (http://www.facebook.com)     |
   +----------------------------------------------------------------------+
   | This source file is subject to version 3.01 of the PHP license,      |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | http://www.php.net/license/3_01.txt                                  |
   | If you did not receive a copy of the PHP license and are unable to   |
   | obtain it through the world-wide-web, please send a note to          |
   | license@php.net so we can mail you a copy immediately.               |
   +----------------------------------------------------------------------+
*/

#ifndef incl_HPHP_TEST_EXT_ERROR_H_
#define incl_HPHP_TEST_EXT_ERROR_H_

// >>>>>> Generated by idl.php. Do NOT modify. <<<<<<

#include "hphp/test/test_cpp_ext.h"

///////////////////////////////////////////////////////////////////////////////

class TestExtError : public TestCppExt {
 public:
  virtual bool RunTests(const std::string &which);

  bool test_debug_backtrace();
  bool test_debug_print_backtrace();
  bool test_error_get_last();
  bool test_error_log();
  bool test_error_reporting();
  bool test_restore_error_handler();
  bool test_restore_exception_handler();
  bool test_set_error_handler();
  bool test_set_exception_handler();
  bool test_trigger_error();
  bool test_user_error();
};

///////////////////////////////////////////////////////////////////////////////

#endif // incl_HPHP_TEST_EXT_ERROR_H_
