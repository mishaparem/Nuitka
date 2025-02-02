//     Copyright 2021, Kay Hayen, mailto:kay.hayen@gmail.com
//
//     Part of "Nuitka", an optimizing Python compiler that is compatible and
//     integrates with CPython, but also works on its own.
//
//     Licensed under the Apache License, Version 2.0 (the "License");
//     you may not use this file except in compliance with the License.
//     You may obtain a copy of the License at
//
//        http://www.apache.org/licenses/LICENSE-2.0
//
//     Unless required by applicable law or agreed to in writing, software
//     distributed under the License is distributed on an "AS IS" BASIS,
//     WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//     See the License for the specific language governing permissions and
//     limitations under the License.
//
/* WARNING, this code is GENERATED. Modify the template HelperImportHard.c.j2 instead! */

/* This file is included from another C file, help IDEs to still parse it on its own. */
#ifdef __IDE_ONLY__
#include "nuitka/prelude.h"
#endif

/* C helper for hard import of module "__future__" import. */

PyObject *IMPORT_HARD___FUTURE__(void) {
    static PyObject *module_import_hard___future__ = NULL;

    if (module_import_hard___future__ == NULL) {
        module_import_hard___future__ = PyImport_ImportModule("__future__");
    }

    if (unlikely(module_import_hard___future__ == NULL)) {
#ifndef __NUITKA_NO_ASSERT__
        PyErr_PrintEx(0);
#endif
        NUITKA_CANNOT_GET_HERE("failed hard import of '__future__'");
        abort();
    }

    return module_import_hard___future__;
}
/* C helper for hard import of module "_frozen_importlib" import. */

#if PYTHON_VERSION >= 0x300
PyObject *IMPORT_HARD__FROZEN_IMPORTLIB(void) {
    static PyObject *module_import_hard__frozen_importlib = NULL;

    if (module_import_hard__frozen_importlib == NULL) {
        module_import_hard__frozen_importlib = PyImport_ImportModule("_frozen_importlib");
    }

    if (unlikely(module_import_hard__frozen_importlib == NULL)) {
#ifndef __NUITKA_NO_ASSERT__
        PyErr_PrintEx(0);
#endif
        NUITKA_CANNOT_GET_HERE("failed hard import of '_frozen_importlib'");
        abort();
    }

    return module_import_hard__frozen_importlib;
}
#endif
/* C helper for hard import of module "_frozen_importlib_external" import. */

#if PYTHON_VERSION >= 0x350
PyObject *IMPORT_HARD__FROZEN_IMPORTLIB_EXTERNAL(void) {
    static PyObject *module_import_hard__frozen_importlib_external = NULL;

    if (module_import_hard__frozen_importlib_external == NULL) {
        module_import_hard__frozen_importlib_external = PyImport_ImportModule("_frozen_importlib_external");
    }

    if (unlikely(module_import_hard__frozen_importlib_external == NULL)) {
#ifndef __NUITKA_NO_ASSERT__
        PyErr_PrintEx(0);
#endif
        NUITKA_CANNOT_GET_HERE("failed hard import of '_frozen_importlib_external'");
        abort();
    }

    return module_import_hard__frozen_importlib_external;
}
#endif
/* C helper for hard import of module "functools" import. */

PyObject *IMPORT_HARD_FUNCTOOLS(void) {
    static PyObject *module_import_hard_functools = NULL;

    if (module_import_hard_functools == NULL) {
        module_import_hard_functools = PyImport_ImportModule("functools");
    }

    if (unlikely(module_import_hard_functools == NULL)) {
#ifndef __NUITKA_NO_ASSERT__
        PyErr_PrintEx(0);
#endif
        NUITKA_CANNOT_GET_HERE("failed hard import of 'functools'");
        abort();
    }

    return module_import_hard_functools;
}
/* C helper for hard import of module "importlib" import. */

PyObject *IMPORT_HARD_IMPORTLIB(void) {
    static PyObject *module_import_hard_importlib = NULL;

    if (module_import_hard_importlib == NULL) {
        module_import_hard_importlib = PyImport_ImportModule("importlib");
    }

    if (unlikely(module_import_hard_importlib == NULL)) {
#ifndef __NUITKA_NO_ASSERT__
        PyErr_PrintEx(0);
#endif
        NUITKA_CANNOT_GET_HERE("failed hard import of 'importlib'");
        abort();
    }

    return module_import_hard_importlib;
}
/* C helper for hard import of module "importlib.metadata" import. */

#if PYTHON_VERSION >= 0x390
PyObject *IMPORT_HARD_IMPORTLIB__METADATA(void) {
    static PyObject *module_import_hard_importlib__metadata = NULL;

    if (module_import_hard_importlib__metadata == NULL) {
        module_import_hard_importlib__metadata = PyImport_ImportModule("importlib.metadata");
    }

    if (unlikely(module_import_hard_importlib__metadata == NULL)) {
#ifndef __NUITKA_NO_ASSERT__
        PyErr_PrintEx(0);
#endif
        NUITKA_CANNOT_GET_HERE("failed hard import of 'importlib.metadata'");
        abort();
    }

    return module_import_hard_importlib__metadata;
}
#endif
/* C helper for hard import of module "os" import. */

PyObject *IMPORT_HARD_OS(void) {
    static PyObject *module_import_hard_os = NULL;

    if (module_import_hard_os == NULL) {
        module_import_hard_os = PyImport_ImportModule("os");
    }

    if (unlikely(module_import_hard_os == NULL)) {
#ifndef __NUITKA_NO_ASSERT__
        PyErr_PrintEx(0);
#endif
        NUITKA_CANNOT_GET_HERE("failed hard import of 'os'");
        abort();
    }

    return module_import_hard_os;
}
/* C helper for hard import of module "pkg_resources" import. */

PyObject *IMPORT_HARD_PKG_RESOURCES(void) {
    static PyObject *module_import_hard_pkg_resources = NULL;

    if (module_import_hard_pkg_resources == NULL) {
        module_import_hard_pkg_resources = PyImport_ImportModule("pkg_resources");
    }

    if (unlikely(module_import_hard_pkg_resources == NULL)) {
#ifndef __NUITKA_NO_ASSERT__
        PyErr_PrintEx(0);
#endif
        NUITKA_CANNOT_GET_HERE("failed hard import of 'pkg_resources'");
        abort();
    }

    return module_import_hard_pkg_resources;
}
/* C helper for hard import of module "pkgutil" import. */

PyObject *IMPORT_HARD_PKGUTIL(void) {
    static PyObject *module_import_hard_pkgutil = NULL;

    if (module_import_hard_pkgutil == NULL) {
        module_import_hard_pkgutil = PyImport_ImportModule("pkgutil");
    }

    if (unlikely(module_import_hard_pkgutil == NULL)) {
#ifndef __NUITKA_NO_ASSERT__
        PyErr_PrintEx(0);
#endif
        NUITKA_CANNOT_GET_HERE("failed hard import of 'pkgutil'");
        abort();
    }

    return module_import_hard_pkgutil;
}
/* C helper for hard import of module "site" import. */

PyObject *IMPORT_HARD_SITE(void) {
    static PyObject *module_import_hard_site = NULL;

    if (module_import_hard_site == NULL) {
        module_import_hard_site = PyImport_ImportModule("site");
    }

    if (unlikely(module_import_hard_site == NULL)) {
#ifndef __NUITKA_NO_ASSERT__
        PyErr_PrintEx(0);
#endif
        NUITKA_CANNOT_GET_HERE("failed hard import of 'site'");
        abort();
    }

    return module_import_hard_site;
}
/* C helper for hard import of module "sys" import. */

PyObject *IMPORT_HARD_SYS(void) {
    static PyObject *module_import_hard_sys = NULL;

    if (module_import_hard_sys == NULL) {
        module_import_hard_sys = PyImport_ImportModule("sys");
    }

    if (unlikely(module_import_hard_sys == NULL)) {
#ifndef __NUITKA_NO_ASSERT__
        PyErr_PrintEx(0);
#endif
        NUITKA_CANNOT_GET_HERE("failed hard import of 'sys'");
        abort();
    }

    return module_import_hard_sys;
}
/* C helper for hard import of module "sysconfig" import. */

PyObject *IMPORT_HARD_SYSCONFIG(void) {
    static PyObject *module_import_hard_sysconfig = NULL;

    if (module_import_hard_sysconfig == NULL) {
        module_import_hard_sysconfig = PyImport_ImportModule("sysconfig");
    }

    if (unlikely(module_import_hard_sysconfig == NULL)) {
#ifndef __NUITKA_NO_ASSERT__
        PyErr_PrintEx(0);
#endif
        NUITKA_CANNOT_GET_HERE("failed hard import of 'sysconfig'");
        abort();
    }

    return module_import_hard_sysconfig;
}
/* C helper for hard import of module "types" import. */

PyObject *IMPORT_HARD_TYPES(void) {
    static PyObject *module_import_hard_types = NULL;

    if (module_import_hard_types == NULL) {
        module_import_hard_types = PyImport_ImportModule("types");
    }

    if (unlikely(module_import_hard_types == NULL)) {
#ifndef __NUITKA_NO_ASSERT__
        PyErr_PrintEx(0);
#endif
        NUITKA_CANNOT_GET_HERE("failed hard import of 'types'");
        abort();
    }

    return module_import_hard_types;
}
/* C helper for hard import of module "typing" import. */

#if PYTHON_VERSION >= 0x350
PyObject *IMPORT_HARD_TYPING(void) {
    static PyObject *module_import_hard_typing = NULL;

    if (module_import_hard_typing == NULL) {
        module_import_hard_typing = PyImport_ImportModule("typing");
    }

    if (unlikely(module_import_hard_typing == NULL)) {
#ifndef __NUITKA_NO_ASSERT__
        PyErr_PrintEx(0);
#endif
        NUITKA_CANNOT_GET_HERE("failed hard import of 'typing'");
        abort();
    }

    return module_import_hard_typing;
}
#endif
