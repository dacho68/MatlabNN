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

class NeuralNet {
private:
	vector<Layer*> layers;
	
public:
	NeuralNet(vector<Layer*> layers);
	vector<double> predict(vector<double> input);
};

#endif /* NeuralNet_hpp */
