//
//  SoftMaxLayer.cpp
//  MatlabNN
//
//  Created by Terna Kpamber on 1/22/16.
//  Copyright © 2016 Terna Kpamber. All rights reserved.
//

#include "SoftMaxLayer.hpp"

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
	vector<double> output;
		for (int i = 0; i < neurons.size(); i++) {
			output.push_back(neurons[i].fireNeuron(inputs));
		}
	return output;
}