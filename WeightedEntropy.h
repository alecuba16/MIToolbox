/*******************************************************************************
** WeightedEntropy.h
** Part of the mutual information toolbox
**
** Contains functions to calculate the entropy of a single variable H(X), 
** the joint entropy of two variables H(X,Y), and the conditional entropy
** H(X|Y), while using a weight vector to modify the calculation.
** 
** Author: Adam Pocock
** Created: 20/6/2011 
**
**  Copyright 2010/2011 Adam Pocock, The University Of Manchester
**  www.cs.manchester.ac.uk
**
**  This file is part of MIToolbox, licensed under the 3-clause BSD license.
*******************************************************************************/

#ifndef __WeightedEntropy_H
#define __WeightedEntropy_H

#ifdef __cplusplus
extern "C" {
#endif 

/*******************************************************************************
** calculateWeightedEntropy returns the entropy in log base 2 of dataVector
** H_w(X), weighted by weightVector
**
** length(vectors) == vectorLength otherwise it will segmentation fault
*******************************************************************************/
double calculateWeightedEntropy(double *dataVector, double *weightVector, int vectorLength);

/*******************************************************************************
** calculateWeightedJointEntropy returns the entropy in log base 2 of the joint 
** variable of firstVector and secondVector, H_w(XY), weighted by weightVector
**
** length(vectors) == vectorLength otherwise it will segmentation fault
*******************************************************************************/
double calculateWeightedJointEntropy(double *firstVector, double *secondVector, double *weightVector, int vectorLength);

/*******************************************************************************
** calculateWeightedConditionalEntropy returns the entropy in log base 2 of 
** dataVector conditioned on conditionVector, H_w(X|Y), weighted by weightVector
**
** length(vectors) == vectorLength otherwise it will segmentation fault
*******************************************************************************/
double calculateWeightedConditionalEntropy(double *dataVector, double *conditionVector, double *weightVector, int vectorLength);

#ifdef __cplusplus
}
#endif

#endif

