//
//  NeuralNet.cpp
//  MatlabNN
//
//  Created by Terna Kpamber on 1/22/16.
//  Copyright © 2016 Terna Kpamber. All rights reserved.
//

#include "NeuralNet.hpp"



/**
 * Constructor to initialize the network's layers
 * @param layers vector<Layer> the netwoks layer from input-output
 * @return
 */
NeuralNet::NeuralNet(vector<Layer*> layers){
//	this->layers = layers;
}

/**
 * Predict the output class probabilities given an input
 * @param inputs vector<double> a vector representing the inpiut features
 * @return vector<double> of the probabilities of each class
 */
vector<double> NeuralNet::predict(vector<double> inputs){
	vector<double> output = layers[0]->transferLayer(inputs);
	
	for(int i = 1; i < layers.size(); i++){
		output = layers[i]->transferLayer(output);
	}
	
	return output;
}