/*
Fast Artificial Neural Network Library (fann)
Copyright (C) 2003-2012 Steffen Nissen (sn@leenissen.dk)

This library is free software; you can redistribute it and/or
modify it under the terms of the GNU Lesser General Public
License as published by the Free Software Foundation; either
version 2.1 of the License, or (at your option) any later version.

This library is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
Lesser General Public License for more details.

You should have received a copy of the GNU Lesser General Public
License along with this library; if not, write to the Free Software
Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
*/

#include "fann.h"

int main()
{
	const unsigned int num_input = 4;
	const unsigned int num_output = 2;
	const unsigned int num_layers = 4;
	const unsigned int num_neurons_hidden = 3;
	const float desired_error = (const float) 0.001;
	const unsigned int max_epochs = 500000;
	const unsigned int epochs_between_reports = 1000;
	struct fann_layer_type *layers = fann_create_layer_types(num_layers);
	fann_add_layer_type(layers, 0, FANN_INPUT_LAYER, num_input, 0, 0);
	fann_add_layer_type(layers, 1, FANN_CONVOLUTIONAL_LAYER, 3, 2, 1);
	fann_add_layer_type(layers, 2, FANN_MAXPOOLING_LAYER, 2, 2, 1);
	fann_add_layer_type(layers, 3, FANN_FCONNECTED_LAYER, num_output, 0, 0);


	struct fann *ann = fann_create_convolutional(num_layers, layers);

	/*fann_set_activation_function_hidden(ann, FANN_SIGMOID_SYMMETRIC);
	fann_set_activation_function_output(ann, FANN_SIGMOID_SYMMETRIC);

	fann_train_on_file(ann, "xor.data", max_epochs, epochs_between_reports, desired_error);

	fann_save(ann, "xor_float.net");

	fann_destroy(ann);

	return 0;*/
}
