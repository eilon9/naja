// SPDX-FileCopyrightText: 2024 The Naja authors <https://github.com/najaeda/naja/blob/main/AUTHORS>
//
// SPDX-License-Identifier: Apache-2.0

#include "PySNLInstTermOccurrences.h"

#include "PyInterface.h"
#include "PySNLInstTermOccurrence.h"

namespace PYNAJA {

using namespace naja::NL;

PyTypeContainerObjectDefinitions(SNLInstTermOccurrences)
PyTypeContainerObjectDefinitions(SNLInstTermOccurrencesIterator)

PyContainerMethodsForNonPointers(SNLInstTermOccurrence, SNLInstTermOccurrences)

}