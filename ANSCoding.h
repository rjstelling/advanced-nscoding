//
//  ANSCoding.h
//  Advanced NSCoding
//
//  Created by Richard Stelling on 14/01/2014.
//  Copyright (c) 2014 Empirical Magic Ltd. All rights reserved.
//

// Encode
#define ANSEncode(encoder, key) [encoder encodeObject:key forKey:@#key]
#define ANSEncodeNumber(encoder, key) [encoder encodeObject:@(key) forKey:@#key]
#define ANSEncodeCGRect(encoder, key) [encoder encodeObject:[NSValue valueWithCGRect:key] forKey:@#key]
#define ANSEncodeCGPoint(encoder, key) [encoder encodeObject:[NSValue valueWithCGPoint:key] forKey:@#key]
#define ANSEncodeUIEdgeInsets(encoder, key) [encoder encodeObject:[NSValue valueWithUIEdgeInsets:key] forKey:@#key]
#define ANSEncodeCGSize(encoder, key) [encoder encodeObject:[NSValue valueWithCGSize:key] forKey:@#key]
#define ANSEncodeNSRange(encoder, key) [encoder encodeObject:[NSValue valueWithRange:key] forKey:@#key]

// Decode
#define ANSDecode(decoder, key) key = [decoder decodeObjectForKey:@#key]
#define ANSDecodeInteger(decoder, key) key = [[decoder decodeObjectForKey:@#key] integerValue]
#define ANSDecodeFloat(decoder, key) key = [[decoder decodeObjectForKey:@#key] floatValue]
#define ANSDecodeCGRect(decoder, key) key = [[decoder decodeObjectForKey:@#key] CGRectValue]
#define ANSDecodeCGPoint(decoder, key) key = [[decoder decodeObjectForKey:@#key] CGPointValue]
#define ANSDecodeUIEdgeInsets(decoder, key) key = [[decoder decodeObjectForKey:@#key] UIEdgeInsetsValue]
#define ANSDecodeCGSize(decoder, key) key = [[decoder decodeObjectForKey:@#key] CGSizeValue]
#define ANSDecodeBool(decoder, key) key = [[decoder decodeObjectForKey:@#key] boolValue]
#define ANSDecodeNSRange(decoder, key) key = [[decoder decodeObjectForKey:@#key] rangeValue]
