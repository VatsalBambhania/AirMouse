"\n\237\001\022\027ImageCroppingCalculator\032\025IMAGE_GPU:input_video\032\023"
"NORM_RECT:hand_rect\"\024IMAGE_GPU:hand_imageBB\n<type.googleapis.com/mediapip"
"e.ImageCroppingCalculatorOptions\022\002@\002\n\314\001\022\035ImageTransforma"
"tionCalculator\032\024IMAGE_GPU:hand_image\" IMAGE_GPU:transformed_hand_image"
"\"#LETTERBOX_PADDING:letterbox_paddingBN\nBtype.googleapis.com/mediapipe.Image"
"TransformationCalculatorOptions\022\010\010\200\002\020\200\0020\002\n|\022 Tf"
"LiteCustomOpResolverCalculator2\013op_resolverBK\nEtype.googleapis.com/mediapi"
"pe.TfLiteCustomOpResolverCalculatorOptions\022\002\010\001\n\235\001\022\031Tf"
"LiteConverterCalculator\032 IMAGE_GPU:transformed_hand_image\"\030TENSORS_GPU:"
"image_tensorBD\n>type.googleapis.com/mediapipe.TfLiteConverterCalculatorOption"
"s\022\002\010\000\n\332\001\022\031TfLiteInferenceCalculator\032\030TENSORS_GP"
"U:image_tensor\"\026TENSORS:output_tensors*\036CUSTOM_OP_RESOLVER:op_resolverB"
"k\n>type.googleapis.com/mediapipe.TfLiteInferenceCalculatorOptions\022)\n%medi"
"apipe/models/hand_landmark.tflite\020\001\n\274\001\022!SplitTfLiteTensorVecto"
"rCalculator\032\016output_tensors\"\020landmark_tensors\"\020hand_flag_tensor"
"\"\021handedness_tensorBP\n:type.googleapis.com/mediapipe.SplitVectorCalculato"
"rOptions\022\022\n\004\010\000\020\001\n\004\010\001\020\002\n\004\010\002\020"
"\003\nV\022\037TfLiteTensorsToFloatsCalculator\032\030TENSORS:hand_flag_tensor"
"\"\031FLOAT:hand_presence_score\n\327\001\022\'TfLiteTensorsToClassificationCa"
"lculator\032\031TENSORS:handedness_tensor\"\032CLASSIFICATIONS:handednessBu\nL"
"type.googleapis.com/mediapipe.TfLiteTensorsToClassificationCalculatorOptions"
"\022%\020\001\032\037mediapipe/models/handedness.txt \001\n\221\001\022\026Thr"
"esholdingCalculator\032\031FLOAT:hand_presence_score\"\022FLAG:hand_presenceBH"
"\n;type.googleapis.com/mediapipe.ThresholdingCalculatorOptions\022\t\t\232\231"
"\231\231\231\231\271?\n\262\001\022\"TfLiteTensorsToLandmarksCalculator\032"
"\030TENSORS:landmark_tensors\"\030NORM_LANDMARKS:landmarksBX\nGtype.googleapis"
".com/mediapipe.TfLiteTensorsToLandmarksCalculatorOptions\022\r\010\025\020\200"
"\002\030\200\002-\315\314\314>\nz\022\"LandmarkLetterboxRemovalCalculator\032"
"\023LANDMARKS:landmarks\032#LETTERBOX_PADDING:letterbox_padding\"\032LANDMARKS"
":scaled_landmarks\ns\022\034LandmarkProjectionCalculator\032\037NORM_LANDMARKS"
":scaled_landmarks\032\023NORM_RECT:hand_rect\"\035NORM_LANDMARKS:hand_landmark"
"s\nC\022\031ImagePropertiesCalculator\032\025IMAGE_GPU:input_video\"\017SIZE:i"
"mage_size\n\252\001\022%SplitNormalizedLandmarkListCalculator\032\016hand_land"
"marks\"\021partial_landmarksB^\n:type.googleapis.com/mediapipe.SplitVectorCalc"
"ulatorOptions\022 \n\004\010\000\020\004\n\004\010\005\020\007\n\004\010\t\020"
"\013\n\004\010\r\020\017\n\004\010\021\020\023\030\001\n\\\022\036LandmarksToD"
"etectionCalculator\032 NORM_LANDMARKS:partial_landmarks\"\030DETECTION:hand_de"
"tection\nv\022\037HandDetectionsToRectsCalculator\032\030DETECTION:hand_detect"
"ion\032\025IMAGE_SIZE:image_size\"\"NORM_RECT:hand_rect_from_landmarks\n\313"
"\001\022\034RectTransformationCalculator\032\"NORM_RECT:hand_rect_from_landmar"
"ks\032\025IMAGE_SIZE:image_size\"\030hand_rect_for_next_frameBV\nAtype.googlea"
"pis.com/mediapipe.RectTransformationCalculatorOptions\022\021\rff\006@\025ff"
"\006@5\315\314\314\2758\001R\021IMAGE:input_videoR\023NORM_RECT:hand_rectz\030"
"LANDMARKS:hand_landmarksz\"NORM_RECT:hand_rect_for_next_framez\026PRESENCE:han"
"d_presencez\"PRESENCE_SCORE:hand_presence_scorez\025HANDEDNESS:handedness\242"
"\001\024HandLandmarkSubgraph"