//
//  Layer.cpp
//  MatlabNN
//
//  Created by Terna Kpamber on 1/22/16.
//  Copyright © 2016 Terna Kpamber. All rights reserved.
//

#include "Layer.hpp"

/**
 * Constructor to initilaize neurons in a layer
 * @param neurons vector<Neuron> the neurons present in the layer
 * @return nil
 */
Layer::Layer(vector<Neuron> neurons){
	this->neurons = neurons;
}

/**
 * Get the number of neurons in the layer
 * @param nil
 * @return int the number of neurons
 */
int Layer::numNeurons(){
	return (int)neurons.size();
}