/*
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * Written (W) 1999-2007 Soeren Sonnenburg
 * Copyright (C) 1999-2007 Fraunhofer Institute FIRST and Max-Planck-Society
 */

#include "classifier/SparseLinearClassifier.h"

CSparseLinearClassifier::CSparseLinearClassifier() : CClassifier(), w_dim(0), w(NULL), bias(0), features(NULL)
{
}

CSparseLinearClassifier::~CSparseLinearClassifier()
{
}
