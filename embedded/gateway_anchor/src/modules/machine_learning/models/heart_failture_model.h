#ifndef HEART_FAILTURE_MODEL_H_
#define HEART_FAILTURE_MODEL_H_

namespace HEART_FAILTURE_MODEL {

    unsigned const int NUMBER_OF_INPUTS = 2;
    unsigned const int NUMBER_OF_OUTPUTS = 2;
    unsigned const int TENSOR_ARENA_SIZE = 2048;
    unsigned const char HEART_FAILTURE_MODEL_ARRAY[] = {
            0x1c, 0x00, 0x00, 0x00, 0x54, 0x46, 0x4c, 0x33, 0x14, 0x00, 0x20, 0x00,
            0x1c, 0x00, 0x18, 0x00, 0x14, 0x00, 0x10, 0x00, 0x0c, 0x00, 0x00, 0x00,
            0x08, 0x00, 0x04, 0x00, 0x14, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00,
            0x98, 0x00, 0x00, 0x00, 0xf0, 0x00, 0x00, 0x00, 0x2c, 0x05, 0x00, 0x00,
            0x3c, 0x05, 0x00, 0x00, 0x44, 0x0b, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00,
            0x01, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0a, 0x00,
            0x10, 0x00, 0x0c, 0x00, 0x08, 0x00, 0x04, 0x00, 0x0a, 0x00, 0x00, 0x00,
            0x0c, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x00,
            0x0f, 0x00, 0x00, 0x00, 0x73, 0x65, 0x72, 0x76, 0x69, 0x6e, 0x67, 0x5f,
            0x64, 0x65, 0x66, 0x61, 0x75, 0x6c, 0x74, 0x00, 0x01, 0x00, 0x00, 0x00,
            0x04, 0x00, 0x00, 0x00, 0x90, 0xff, 0xff, 0xff, 0x0a, 0x00, 0x00, 0x00,
            0x04, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x64, 0x65, 0x6e, 0x73,
            0x65, 0x5f, 0x31, 0x32, 0x35, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
            0x04, 0x00, 0x00, 0x00, 0xba, 0xfa, 0xff, 0xff, 0x04, 0x00, 0x00, 0x00,
            0x0f, 0x00, 0x00, 0x00, 0x64, 0x65, 0x6e, 0x73, 0x65, 0x5f, 0x31, 0x32,
            0x33, 0x5f, 0x69, 0x6e, 0x70, 0x75, 0x74, 0x00, 0x02, 0x00, 0x00, 0x00,
            0x34, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0xdc, 0xff, 0xff, 0xff,
            0x0d, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x13, 0x00, 0x00, 0x00,
            0x43, 0x4f, 0x4e, 0x56, 0x45, 0x52, 0x53, 0x49, 0x4f, 0x4e, 0x5f, 0x4d,
            0x45, 0x54, 0x41, 0x44, 0x41, 0x54, 0x41, 0x00, 0x08, 0x00, 0x0c, 0x00,
            0x08, 0x00, 0x04, 0x00, 0x08, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
            0x04, 0x00, 0x00, 0x00, 0x13, 0x00, 0x00, 0x00, 0x6d, 0x69, 0x6e, 0x5f,
            0x72, 0x75, 0x6e, 0x74, 0x69, 0x6d, 0x65, 0x5f, 0x76, 0x65, 0x72, 0x73,
            0x69, 0x6f, 0x6e, 0x00, 0x0e, 0x00, 0x00, 0x00, 0x38, 0x04, 0x00, 0x00,
            0x30, 0x04, 0x00, 0x00, 0x18, 0x04, 0x00, 0x00, 0xc8, 0x03, 0x00, 0x00,
            0x98, 0x03, 0x00, 0x00, 0x48, 0x03, 0x00, 0x00, 0x38, 0x01, 0x00, 0x00,
            0xa8, 0x00, 0x00, 0x00, 0xa0, 0x00, 0x00, 0x00, 0x98, 0x00, 0x00, 0x00,
            0x90, 0x00, 0x00, 0x00, 0x88, 0x00, 0x00, 0x00, 0x68, 0x00, 0x00, 0x00,
            0x04, 0x00, 0x00, 0x00, 0x6e, 0xfb, 0xff, 0xff, 0x04, 0x00, 0x00, 0x00,
            0x54, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x08, 0x00, 0x0e, 0x00,
            0x08, 0x00, 0x04, 0x00, 0x08, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00,
            0x24, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x08, 0x00, 0x04, 0x00,
            0x06, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
            0x00, 0x00, 0x0a, 0x00, 0x10, 0x00, 0x0c, 0x00, 0x08, 0x00, 0x04, 0x00,
            0x0a, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
            0x04, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x32, 0x2e, 0x31, 0x35,
            0x2e, 0x30, 0x00, 0x00, 0xce, 0xfb, 0xff, 0xff, 0x04, 0x00, 0x00, 0x00,
            0x10, 0x00, 0x00, 0x00, 0x31, 0x2e, 0x35, 0x2e, 0x30, 0x00, 0x00, 0x00,
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x94, 0xf6, 0xff, 0xff,
            0x98, 0xf6, 0xff, 0xff, 0x9c, 0xf6, 0xff, 0xff, 0xa0, 0xf6, 0xff, 0xff,
            0xfa, 0xfb, 0xff, 0xff, 0x04, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00,
            0xb8, 0x5a, 0x96, 0x3e, 0x04, 0x0f, 0xe4, 0x3e, 0x79, 0x7b, 0x67, 0x3e,
            0xc7, 0x3c, 0xdb, 0xbe, 0xf9, 0xc4, 0xcf, 0x3e, 0xe5, 0x4b, 0xba, 0x3e,
            0xdc, 0x9f, 0xbe, 0x3e, 0xd1, 0x0f, 0xe2, 0xbe, 0x9d, 0xb8, 0xd9, 0xbe,
            0x78, 0x26, 0x00, 0x3f, 0xb9, 0x18, 0x03, 0xbf, 0xc3, 0x62, 0x9b, 0xbe,
            0x33, 0x98, 0xcd, 0x3e, 0x10, 0x8d, 0x82, 0x3d, 0x6d, 0x0b, 0x84, 0xbe,
            0xfa, 0x69, 0xac, 0xbe, 0xdc, 0x89, 0xb0, 0x3e, 0x43, 0xf7, 0x85, 0x3d,
            0x29, 0xa6, 0x25, 0xbd, 0xa4, 0x14, 0xb2, 0x3e, 0x11, 0x7b, 0x78, 0x3e,
            0xec, 0xab, 0xaa, 0xbd, 0xd0, 0x53, 0x83, 0xbe, 0xb2, 0x4d, 0xc0, 0x3b,
            0xf2, 0x66, 0xc0, 0xbe, 0x80, 0x66, 0x76, 0x3c, 0xd9, 0xa4, 0x65, 0x3e,
            0xe3, 0xb9, 0x9f, 0x3e, 0x35, 0x31, 0x8c, 0xbd, 0x12, 0xf5, 0x00, 0xbf,
            0x6c, 0xec, 0xa4, 0x3e, 0x29, 0xd5, 0x90, 0x3d, 0x86, 0xfc, 0xff, 0xff,
            0x04, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x70, 0x4b, 0x22, 0x3e,
            0xb4, 0xf9, 0xec, 0x3e, 0x48, 0xc0, 0x59, 0xbe, 0x80, 0x67, 0x9d, 0xbc,
            0xec, 0xda, 0xc1, 0xbe, 0xc0, 0xe7, 0x87, 0x3d, 0x14, 0xbc, 0xdd, 0x3e,
            0x68, 0x82, 0xd4, 0xbe, 0x00, 0xb7, 0xf6, 0xbb, 0x94, 0x05, 0x81, 0x3e,
            0x0a, 0x6d, 0xf5, 0x3e, 0x60, 0xc3, 0x9a, 0xbd, 0x50, 0x39, 0x78, 0xbe,
            0x52, 0xb3, 0xa2, 0x3e, 0xc0, 0x62, 0x11, 0x3d, 0xea, 0x22, 0xe8, 0xbd,
            0xc4, 0x4f, 0xfe, 0xbe, 0xd0, 0xbe, 0xd7, 0xbd, 0x44, 0x01, 0xe0, 0x3e,
            0x70, 0x7a, 0x7e, 0x3e, 0x64, 0x4e, 0x9f, 0x3e, 0x72, 0x3c, 0xc4, 0xbd,
            0x24, 0x15, 0xcb, 0x3e, 0x41, 0x74, 0x97, 0x3b, 0x18, 0x03, 0x46, 0x3e,
            0x00, 0x1d, 0xd1, 0x3b, 0x40, 0x53, 0x58, 0xbe, 0xe8, 0x50, 0x27, 0xbe,
            0xe0, 0x4a, 0x9e, 0xbe, 0x12, 0x65, 0xa4, 0x3e, 0xf0, 0xb1, 0x19, 0xbe,
            0x72, 0x13, 0xdb, 0xbd, 0xc4, 0xde, 0xda, 0xbe, 0x40, 0xc7, 0xe2, 0x3d,
            0x91, 0x80, 0xdd, 0x3e, 0x50, 0x6f, 0x81, 0x3d, 0x58, 0x80, 0x7d, 0xbe,
            0xc7, 0xbb, 0x06, 0x3f, 0x14, 0xcc, 0x99, 0xbe, 0xa3, 0xe0, 0xb8, 0xbe,
            0x00, 0x90, 0xa7, 0x39, 0xa0, 0x75, 0x5c, 0x3d, 0x9c, 0x86, 0x8c, 0x3e,
            0xe0, 0x6f, 0x84, 0x3d, 0x00, 0x7b, 0xeb, 0x3b, 0x1d, 0xfa, 0x3b, 0x3e,
            0x48, 0xf5, 0x47, 0xbe, 0xfa, 0x37, 0xc2, 0x3e, 0xe8, 0x0f, 0xb8, 0x3e,
            0xc0, 0x06, 0xe5, 0x3d, 0xf6, 0x9f, 0xd3, 0x3e, 0x9c, 0x64, 0xea, 0x3e,
            0x30, 0x7e, 0xd5, 0xbe, 0x15, 0xce, 0xb1, 0x3e, 0x00, 0x0e, 0x65, 0xbc,
            0x55, 0xff, 0x6d, 0xbe, 0x10, 0x38, 0xfb, 0xbd, 0x18, 0x58, 0x29, 0x3e,
            0x48, 0x8d, 0x5b, 0xbe, 0x40, 0x3a, 0x1e, 0xbe, 0x60, 0x2c, 0x59, 0x3e,
            0x78, 0x6f, 0x57, 0x3d, 0x80, 0x57, 0xb7, 0xbc, 0xbf, 0xc7, 0xa6, 0x3d,
            0xa4, 0xbd, 0xca, 0xbe, 0xb4, 0x54, 0xe2, 0x3e, 0x12, 0xfe, 0x7e, 0x3e,
            0x28, 0xcf, 0xfc, 0x3e, 0x00, 0x46, 0x64, 0xbc, 0x3c, 0x27, 0xc4, 0xbe,
            0x38, 0xf1, 0x22, 0xbe, 0xc0, 0xa9, 0x1f, 0xbd, 0xb0, 0x3b, 0x7a, 0xbe,
            0x38, 0x3b, 0xcb, 0xbe, 0xf0, 0x82, 0xb7, 0xbd, 0x30, 0x5e, 0x3e, 0xbe,
            0xac, 0x15, 0xce, 0x3e, 0xf8, 0xba, 0x83, 0xbe, 0x24, 0xb0, 0x9f, 0x3e,
            0xe4, 0xca, 0xd9, 0xbe, 0xf0, 0x0f, 0xaf, 0x3e, 0x80, 0x83, 0x24, 0x3e,
            0x29, 0x95, 0xe0, 0x3e, 0xa8, 0xa8, 0x5e, 0x3e, 0x58, 0x6a, 0x3d, 0xbe,
            0x1c, 0x88, 0x12, 0x3e, 0xa0, 0x50, 0xd0, 0x3d, 0x2b, 0x9e, 0x24, 0x3e,
            0x08, 0xe8, 0x2e, 0x3e, 0xe8, 0xd9, 0x19, 0xbe, 0xc8, 0x73, 0x6c, 0xbe,
            0x08, 0xf0, 0x47, 0x3e, 0x94, 0xd0, 0xcf, 0x3e, 0x01, 0xd3, 0x8a, 0x3e,
            0x88, 0x6a, 0x56, 0xbe, 0xcd, 0x78, 0xf1, 0x3d, 0x00, 0x35, 0xb3, 0x3b,
            0x00, 0xe6, 0x40, 0x3d, 0xa8, 0x08, 0xa0, 0xbe, 0x98, 0xfa, 0xf6, 0xbe,
            0xdc, 0xfe, 0x95, 0xbe, 0x3f, 0xd6, 0xe7, 0x3e, 0x40, 0xb3, 0x9b, 0xbc,
            0x09, 0xc9, 0xe6, 0xbe, 0x60, 0x4e, 0xfc, 0xbd, 0x88, 0xaf, 0x96, 0x3e,
            0xd8, 0xb3, 0xd4, 0xbe, 0xe8, 0x28, 0x51, 0xbe, 0xa8, 0x35, 0x9f, 0x3e,
            0x80, 0x7b, 0xe9, 0xbc, 0x38, 0x2b, 0x6e, 0xbe, 0xd8, 0x5e, 0xa4, 0xbe,
            0xd8, 0x05, 0xc0, 0x3e, 0x78, 0xc7, 0x01, 0xbe, 0xb5, 0x1b, 0x25, 0x3e,
            0x90, 0xb8, 0x34, 0xbe, 0x38, 0x3c, 0x40, 0xbe, 0x70, 0x0b, 0x71, 0x3e,
            0x40, 0x88, 0x15, 0xbd, 0xac, 0x29, 0xc5, 0xbe, 0x28, 0x03, 0x83, 0xbe,
            0x88, 0x82, 0x24, 0x3e, 0xb2, 0x9b, 0xbd, 0x3e, 0xb8, 0x6e, 0x78, 0xbe,
            0x38, 0xec, 0x23, 0x3e, 0xc2, 0x9c, 0xaf, 0x3e, 0x54, 0xfe, 0x90, 0x3e,
            0xdc, 0xc5, 0xd8, 0xbe, 0x92, 0xfe, 0xff, 0xff, 0x04, 0x00, 0x00, 0x00,
            0x40, 0x00, 0x00, 0x00, 0x0e, 0x55, 0x2b, 0xbf, 0xe6, 0x66, 0xb8, 0xbe,
            0x48, 0x51, 0x2c, 0x3e, 0x4f, 0xbb, 0x2d, 0xbf, 0xc8, 0xdf, 0xa5, 0x3e,
            0x8c, 0x3d, 0x12, 0xbf, 0x00, 0xbc, 0x38, 0xba, 0x34, 0x2a, 0xc1, 0xbe,
            0x60, 0x96, 0xf3, 0xbe, 0xa0, 0x39, 0xb0, 0xbc, 0xc0, 0x09, 0x11, 0xbf,
            0xf0, 0x2c, 0x0d, 0x3f, 0x5e, 0x2f, 0x3d, 0xbf, 0xe0, 0xa4, 0xd0, 0x3e,
            0xd0, 0xb7, 0x43, 0xbe, 0xbd, 0x19, 0x54, 0x3e, 0xde, 0xfe, 0xff, 0xff,
            0x04, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
            0x00, 0x00, 0x00, 0x00, 0x49, 0x67, 0xc4, 0xbb, 0x00, 0x00, 0x00, 0x00,
            0x00, 0x00, 0x00, 0x00, 0x21, 0x8e, 0x24, 0xbd, 0x00, 0x00, 0x00, 0x00,
            0x99, 0x80, 0x32, 0xbd, 0x0a, 0xff, 0xff, 0xff, 0x04, 0x00, 0x00, 0x00,
            0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1a, 0x23, 0x68, 0x3d,
            0x2a, 0x28, 0xab, 0x3d, 0xbd, 0x7f, 0x3f, 0xbd, 0x6f, 0xae, 0x80, 0x3d,
            0x23, 0x6b, 0x69, 0x3d, 0xef, 0x66, 0x6d, 0x3d, 0xfa, 0xfa, 0x47, 0xbd,
            0xf6, 0xfb, 0xc3, 0xbb, 0x00, 0x00, 0x00, 0x00, 0x0e, 0x89, 0x48, 0xbd,
            0x74, 0xfa, 0x48, 0xbd, 0x79, 0x9e, 0x77, 0x3d, 0x00, 0x00, 0x00, 0x00,
            0x19, 0xe5, 0x42, 0xbd, 0xaf, 0xc3, 0x2f, 0xbd, 0x56, 0xff, 0xff, 0xff,
            0x04, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x55, 0x51, 0x61, 0x3d,
            0x55, 0x51, 0x61, 0xbd, 0x14, 0xfa, 0xff, 0xff, 0x18, 0xfa, 0xff, 0xff,
            0x0f, 0x00, 0x00, 0x00, 0x4d, 0x4c, 0x49, 0x52, 0x20, 0x43, 0x6f, 0x6e,
            0x76, 0x65, 0x72, 0x74, 0x65, 0x64, 0x2e, 0x00, 0x01, 0x00, 0x00, 0x00,
            0x14, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0e, 0x00, 0x18, 0x00, 0x14, 0x00,
            0x10, 0x00, 0x0c, 0x00, 0x08, 0x00, 0x04, 0x00, 0x0e, 0x00, 0x00, 0x00,
            0x14, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x24, 0x01, 0x00, 0x00,
            0x28, 0x01, 0x00, 0x00, 0x2c, 0x01, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00,
            0x6d, 0x61, 0x69, 0x6e, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00,
            0xcc, 0x00, 0x00, 0x00, 0x84, 0x00, 0x00, 0x00, 0x50, 0x00, 0x00, 0x00,
            0x14, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0e, 0x00, 0x1a, 0x00, 0x14, 0x00,
            0x10, 0x00, 0x0c, 0x00, 0x0b, 0x00, 0x04, 0x00, 0x0e, 0x00, 0x00, 0x00,
            0x1c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x09, 0x1c, 0x00, 0x00, 0x00,
            0x20, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00,
            0x08, 0x00, 0x04, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x3f,
            0x01, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
            0x09, 0x00, 0x00, 0x00, 0x9a, 0xff, 0xff, 0xff, 0x10, 0x00, 0x00, 0x00,
            0x00, 0x00, 0x00, 0x08, 0x0c, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00,
            0xdc, 0xfa, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00,
            0x03, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00,
            0x01, 0x00, 0x00, 0x00, 0xca, 0xff, 0xff, 0xff, 0x10, 0x00, 0x00, 0x00,
            0x00, 0x00, 0x00, 0x08, 0x10, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00,
            0xba, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00,
            0x08, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00,
            0x05, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0e, 0x00,
            0x16, 0x00, 0x00, 0x00, 0x10, 0x00, 0x0c, 0x00, 0x0b, 0x00, 0x04, 0x00,
            0x0e, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08,
            0x18, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00,
            0x08, 0x00, 0x07, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01,
            0x01, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00,
            0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00,
            0x01, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
            0x00, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x4c, 0x04, 0x00, 0x00,
            0xd8, 0x03, 0x00, 0x00, 0x64, 0x03, 0x00, 0x00, 0x08, 0x03, 0x00, 0x00,
            0xb8, 0x02, 0x00, 0x00, 0x68, 0x02, 0x00, 0x00, 0x18, 0x02, 0x00, 0x00,
            0x7c, 0x01, 0x00, 0x00, 0xe0, 0x00, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00,
            0x04, 0x00, 0x00, 0x00, 0xf6, 0xfb, 0xff, 0xff, 0x00, 0x00, 0x00, 0x01,
            0x14, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00,
            0x0b, 0x00, 0x00, 0x00, 0x34, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
            0xff, 0xff, 0xff, 0xff, 0x02, 0x00, 0x00, 0x00, 0xe0, 0xfb, 0xff, 0xff,
            0x19, 0x00, 0x00, 0x00, 0x53, 0x74, 0x61, 0x74, 0x65, 0x66, 0x75, 0x6c,
            0x50, 0x61, 0x72, 0x74, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x65, 0x64, 0x43,
            0x61, 0x6c, 0x6c, 0x3a, 0x30, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
            0x01, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x4e, 0xfc, 0xff, 0xff,
            0x00, 0x00, 0x00, 0x01, 0x14, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00,
            0x1c, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x58, 0x00, 0x00, 0x00,
            0x02, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x02, 0x00, 0x00, 0x00,
            0x38, 0xfc, 0xff, 0xff, 0x3e, 0x00, 0x00, 0x00, 0x73, 0x65, 0x71, 0x75,
            0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c, 0x5f, 0x34, 0x31, 0x2f, 0x64, 0x65,
            0x6e, 0x73, 0x65, 0x5f, 0x31, 0x32, 0x35, 0x2f, 0x4d, 0x61, 0x74, 0x4d,
            0x75, 0x6c, 0x3b, 0x73, 0x65, 0x71, 0x75, 0x65, 0x6e, 0x74, 0x69, 0x61,
            0x6c, 0x5f, 0x34, 0x31, 0x2f, 0x64, 0x65, 0x6e, 0x73, 0x65, 0x5f, 0x31,
            0x32, 0x35, 0x2f, 0x42, 0x69, 0x61, 0x73, 0x41, 0x64, 0x64, 0x00, 0x00,
            0x02, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
            0xca, 0xfc, 0xff, 0xff, 0x00, 0x00, 0x00, 0x01, 0x14, 0x00, 0x00, 0x00,
            0x1c, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00,
            0x74, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff,
            0x10, 0x00, 0x00, 0x00, 0xb4, 0xfc, 0xff, 0xff, 0x5b, 0x00, 0x00, 0x00,
            0x73, 0x65, 0x71, 0x75, 0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c, 0x5f, 0x34,
            0x31, 0x2f, 0x64, 0x65, 0x6e, 0x73, 0x65, 0x5f, 0x31, 0x32, 0x34, 0x2f,
            0x4d, 0x61, 0x74, 0x4d, 0x75, 0x6c, 0x3b, 0x73, 0x65, 0x71, 0x75, 0x65,
            0x6e, 0x74, 0x69, 0x61, 0x6c, 0x5f, 0x34, 0x31, 0x2f, 0x64, 0x65, 0x6e,
            0x73, 0x65, 0x5f, 0x31, 0x32, 0x34, 0x2f, 0x52, 0x65, 0x6c, 0x75, 0x3b,
            0x73, 0x65, 0x71, 0x75, 0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c, 0x5f, 0x34,
            0x31, 0x2f, 0x64, 0x65, 0x6e, 0x73, 0x65, 0x5f, 0x31, 0x32, 0x34, 0x2f,
            0x42, 0x69, 0x61, 0x73, 0x41, 0x64, 0x64, 0x00, 0x02, 0x00, 0x00, 0x00,
            0x01, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x62, 0xfd, 0xff, 0xff,
            0x00, 0x00, 0x00, 0x01, 0x14, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00,
            0x1c, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x74, 0x00, 0x00, 0x00,
            0x02, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x08, 0x00, 0x00, 0x00,
            0x4c, 0xfd, 0xff, 0xff, 0x5b, 0x00, 0x00, 0x00, 0x73, 0x65, 0x71, 0x75,
            0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c, 0x5f, 0x34, 0x31, 0x2f, 0x64, 0x65,
            0x6e, 0x73, 0x65, 0x5f, 0x31, 0x32, 0x33, 0x2f, 0x4d, 0x61, 0x74, 0x4d,
            0x75, 0x6c, 0x3b, 0x73, 0x65, 0x71, 0x75, 0x65, 0x6e, 0x74, 0x69, 0x61,
            0x6c, 0x5f, 0x34, 0x31, 0x2f, 0x64, 0x65, 0x6e, 0x73, 0x65, 0x5f, 0x31,
            0x32, 0x33, 0x2f, 0x52, 0x65, 0x6c, 0x75, 0x3b, 0x73, 0x65, 0x71, 0x75,
            0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c, 0x5f, 0x34, 0x31, 0x2f, 0x64, 0x65,
            0x6e, 0x73, 0x65, 0x5f, 0x31, 0x32, 0x33, 0x2f, 0x42, 0x69, 0x61, 0x73,
            0x41, 0x64, 0x64, 0x00, 0x02, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
            0x08, 0x00, 0x00, 0x00, 0x6a, 0xfe, 0xff, 0xff, 0x00, 0x00, 0x00, 0x01,
            0x10, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00,
            0x2c, 0x00, 0x00, 0x00, 0xd4, 0xfd, 0xff, 0xff, 0x1e, 0x00, 0x00, 0x00,
            0x73, 0x65, 0x71, 0x75, 0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c, 0x5f, 0x34,
            0x31, 0x2f, 0x64, 0x65, 0x6e, 0x73, 0x65, 0x5f, 0x31, 0x32, 0x35, 0x2f,
            0x4d, 0x61, 0x74, 0x4d, 0x75, 0x6c, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
            0x02, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0xb6, 0xfe, 0xff, 0xff,
            0x00, 0x00, 0x00, 0x01, 0x10, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00,
            0x06, 0x00, 0x00, 0x00, 0x2c, 0x00, 0x00, 0x00, 0x20, 0xfe, 0xff, 0xff,
            0x1e, 0x00, 0x00, 0x00, 0x73, 0x65, 0x71, 0x75, 0x65, 0x6e, 0x74, 0x69,
            0x61, 0x6c, 0x5f, 0x34, 0x31, 0x2f, 0x64, 0x65, 0x6e, 0x73, 0x65, 0x5f,
            0x31, 0x32, 0x34, 0x2f, 0x4d, 0x61, 0x74, 0x4d, 0x75, 0x6c, 0x00, 0x00,
            0x02, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00,
            0x02, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x01, 0x10, 0x00, 0x00, 0x00,
            0x10, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x2c, 0x00, 0x00, 0x00,
            0x6c, 0xfe, 0xff, 0xff, 0x1e, 0x00, 0x00, 0x00, 0x73, 0x65, 0x71, 0x75,
            0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c, 0x5f, 0x34, 0x31, 0x2f, 0x64, 0x65,
            0x6e, 0x73, 0x65, 0x5f, 0x31, 0x32, 0x33, 0x2f, 0x4d, 0x61, 0x74, 0x4d,
            0x75, 0x6c, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00,
            0x02, 0x00, 0x00, 0x00, 0x4e, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x01,
            0x10, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00,
            0x3c, 0x00, 0x00, 0x00, 0xb8, 0xfe, 0xff, 0xff, 0x2e, 0x00, 0x00, 0x00,
            0x73, 0x65, 0x71, 0x75, 0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c, 0x5f, 0x34,
            0x31, 0x2f, 0x64, 0x65, 0x6e, 0x73, 0x65, 0x5f, 0x31, 0x32, 0x33, 0x2f,
            0x42, 0x69, 0x61, 0x73, 0x41, 0x64, 0x64, 0x2f, 0x52, 0x65, 0x61, 0x64,
            0x56, 0x61, 0x72, 0x69, 0x61, 0x62, 0x6c, 0x65, 0x4f, 0x70, 0x00, 0x00,
            0x01, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0xa6, 0xff, 0xff, 0xff,
            0x00, 0x00, 0x00, 0x01, 0x10, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00,
            0x03, 0x00, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x00, 0x10, 0xff, 0xff, 0xff,
            0x2e, 0x00, 0x00, 0x00, 0x73, 0x65, 0x71, 0x75, 0x65, 0x6e, 0x74, 0x69,
            0x61, 0x6c, 0x5f, 0x34, 0x31, 0x2f, 0x64, 0x65, 0x6e, 0x73, 0x65, 0x5f,
            0x31, 0x32, 0x34, 0x2f, 0x42, 0x69, 0x61, 0x73, 0x41, 0x64, 0x64, 0x2f,
            0x52, 0x65, 0x61, 0x64, 0x56, 0x61, 0x72, 0x69, 0x61, 0x62, 0x6c, 0x65,
            0x4f, 0x70, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00,
            0x00, 0x00, 0x16, 0x00, 0x18, 0x00, 0x14, 0x00, 0x00, 0x00, 0x10, 0x00,
            0x0c, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x00,
            0x16, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x10, 0x00, 0x00, 0x00,
            0x10, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x00,
            0x80, 0xff, 0xff, 0xff, 0x2e, 0x00, 0x00, 0x00, 0x73, 0x65, 0x71, 0x75,
            0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c, 0x5f, 0x34, 0x31, 0x2f, 0x64, 0x65,
            0x6e, 0x73, 0x65, 0x5f, 0x31, 0x32, 0x35, 0x2f, 0x42, 0x69, 0x61, 0x73,
            0x41, 0x64, 0x64, 0x2f, 0x52, 0x65, 0x61, 0x64, 0x56, 0x61, 0x72, 0x69,
            0x61, 0x62, 0x6c, 0x65, 0x4f, 0x70, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
            0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x16, 0x00, 0x1c, 0x00, 0x18, 0x00,
            0x00, 0x00, 0x14, 0x00, 0x10, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x00,
            0x08, 0x00, 0x07, 0x00, 0x16, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01,
            0x14, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00,
            0x01, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
            0xff, 0xff, 0xff, 0xff, 0x02, 0x00, 0x00, 0x00, 0x04, 0x00, 0x04, 0x00,
            0x04, 0x00, 0x00, 0x00, 0x21, 0x00, 0x00, 0x00, 0x73, 0x65, 0x72, 0x76,
            0x69, 0x6e, 0x67, 0x5f, 0x64, 0x65, 0x66, 0x61, 0x75, 0x6c, 0x74, 0x5f,
            0x64, 0x65, 0x6e, 0x73, 0x65, 0x5f, 0x31, 0x32, 0x33, 0x5f, 0x69, 0x6e,
            0x70, 0x75, 0x74, 0x3a, 0x30, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
            0x01, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
            0x20, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0xf4, 0xff, 0xff, 0xff,
            0x19, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x19, 0x0c, 0x00, 0x0c, 0x00,
            0x0b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x0c, 0x00, 0x00, 0x00,
            0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x09};
}

#endif