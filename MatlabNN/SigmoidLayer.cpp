//
//  SigmoidLayer.cpp
//  MatlabNN
//
//  Created by Terna Kpamber on 1/22/16.
//  Copyright © 2016 Terna Kpamber. All rights reserved.
//

#include "SigmoidLayer.hpp"
#include <math.h>

/**
 * Constructor simply initilizes base class (Layer)
 * @param neurons vector<Neuron> the neurons present in the layer
 * @return nil
 */
SigmoidLayer::SigmoidLayer(vector<Neuron> neurons): Layer(neurons){
	
}


/**
 * Perform the transfer function of the Layer
 * @param inputs vector<double> the inputs to the layer
 * @return a vector<double> of the layer's neurons' outputs
 */
vector<double> SigmoidLayer::transferLayer(vector<double> inputs){
	vector<double> output;
	for (int i = 0; i < neurons.size(); i++) {
		double result = neurons[i].fireNeuron(inputs);
		result = (2.0 / (1.0 + exp(-2.0*result)))-1;
		output.push_back(neurons[i].fireNeuron(inputs));
	}
	return output;
}