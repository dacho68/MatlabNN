//
//  NeuralNet.hpp
//  MatlabNN
//
//  Created by Terna Kpamber on 1/22/16.
//  Copyright © 2016 Terna Kpamber. All rights reserved.
//

#ifndef NeuralNet_hpp
#define NeuralNet_hpp

#include "SigmoidLayer.hpp"
#include "SoftMaxLayer.hpp"

/**
 * This class models a neural network. 
 * It DOES NOT preform training or testing.
 * The weights and biases must be provided for each neuron in each layer.
 */

class NeuralNet {
private:
	vector<Layer*> layers;
	
public:
	NeuralNet(vector<Layer*> layers);
	vector<double> predict(vector<double> input);
};

#endif /* NeuralNet_hpp */
