/*
 * Copyright 2010-2012 Amazon.com, Inc. or its affiliates. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License").
 * You may not use this file except in compliance with the License.
 * A copy of the License is located at
 *
 *  http://aws.amazon.com/apache2.0
 *
 * or in the "license" file accompanying this file. This file is distributed
 * on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
 * express or implied. See the License for the specific language governing
 * permissions and limitations under the License.
 */




/**
 * Provisioned Throughput
 *
 * \ingroup DynamoDB
 */

@interface DynamoDBProvisionedThroughput:NSObject

{
    NSNumber *readCapacityUnits;
    NSNumber *writeCapacityUnits;
}




/**
 * Default constructor for a new  object.  Callers should use the
 * property methods to initialize this object after creating it.
 */
-(id)init;

/**
 * ReadCapacityUnits are in terms of strictly consistent reads, assuming
 * items of 1KB. 2KB items require twice the ReadCapacityUnits.
 * Eventually consistent reads only require half the ReadCapacityUnits of
 * stirctly consistent reads.
 * <p>
 * <b>Constraints:</b><br/>
 * <b>Range: </b>1 - <br/>
 */
@property (nonatomic, retain) NSNumber *readCapacityUnits;

/**
 * WriteCapacityUnits are in terms of strictly consistent reads, assuming
 * items of 1KB. 2KB items require twice the WriteCapacityUnits.
 * <p>
 * <b>Constraints:</b><br/>
 * <b>Range: </b>1 - <br/>
 */
@property (nonatomic, retain) NSNumber *writeCapacityUnits;

/**
 * Returns a string representation of this object; useful for testing and
 * debugging.
 *
 * @return A string representation of this object.
 */
-(NSString *)description;


@end
