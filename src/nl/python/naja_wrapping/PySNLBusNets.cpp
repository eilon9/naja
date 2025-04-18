// SPDX-FileCopyrightText: 2023 The Naja authors <https://github.com/najaeda/naja/blob/main/AUTHORS>
//
// SPDX-License-Identifier: Apache-2.0

#include "PySNLBusNets.h"

#include "PyInterface.h"
#include "PySNLBusNet.h"

namespace PYNAJA {

using namespace naja::NL;

PyTypeContainerObjectDefinitions(SNLBusNets)
PyTypeContainerObjectDefinitions(SNLBusNetsIterator)

PyContainerMethods(SNLBusNet, SNLBusNets)

}