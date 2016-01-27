//
//  SoftMaxLayer.cpp
//  MatlabNN
//
//  Created by Terna Kpamber on 1/22/16.
//  Copyright © 2016 Terna Kpamber. All rights reserved.
//

#include "SoftMaxLayer.hpp"
#include <math.h>
#include <numeric>

/**
 * Constructor simply initilizes base class (Layer)
 * @param neurons vector<Neuron> the neurons present in the layer
 * @return nil
 */
SoftMaxLayer::SoftMaxLayer(vector<Neuron> neurons): Layer(neurons){
	
}


/**
 * Perform the transfer function of the Layer
 * @param inputs vector<double> the inputs to the layer
 * @return a vector<double> of the layer's neurons' outputs
 */
vector<double> SoftMaxLayer::transferLayer(vector<double> inputs){
	
	double max = *max_element(inputs.begin(), inputs.end());
	
	vector<double> output;
	double sum = 0;
	for (int i = 0; i < neurons.size(); i++) {
		double subt = neurons[i].fireNeuron(inputs) - max;
		double numer = exp(subt);
		output.push_back(numer);
		sum += numer;
	}
	sum = sum == 0 ? 1: sum;
	
	for (int i = 0; i < neurons.size(); i++) {
		output[i] = output[i]/sum;
	}
	
	
	return output;
}