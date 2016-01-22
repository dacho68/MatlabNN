//
//  Neuron.cpp
//  MatlabNN
//
//  Created by Terna Kpamber on 1/22/16.
//  Copyright © 2016 Terna Kpamber. All rights reserved.
//

#include "Neuron.hpp"

/**
 * Constructor to initialize weights and biases
 * @param weights vector<double> neuron weights for the inputs
 * @param bias double neuron bias for the inputs
 * @return nil
 */
Neuron::Neuron(vector<double> weights, double bias){
	this->weights = weights;
	this->bias = bias;
}


/**
 * Fire a neuron and compute the output
 * @param inputs vector<double> inputs to the neuron
 * @return double output of th neuron
 */
double Neuron::fireNeuron(vector<double> inputs){
	assert(inputs.size() == weights.size());
	
	double output = 0;
	for (int i = 0; i < weights.size(); i++) {
		output += weights[i]*inputs[i];
	}
	return output + bias;
}


/**
 * Get the number of inputs in the neuron
 * @param nil
 * @return int the number of neurons
 */
int Neuron::numInputs(){
	return (int)weights.size();
}