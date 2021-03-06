//
//  NSManagedObject+FromDictionary.h
//  Sample
//
//  Created by Jaehwa Han on 12/4/12.
//  Copyright (c) 2012 Jaehwa Han. All rights reserved.
//

#import <CoreData/CoreData.h>

@interface NSManagedObject (FromDictionary)
+ (id)insertWithDictionary:(NSDictionary *)dict error:(NSError **)error commit:(BOOL)commit;
+ (id)insertWithDictionary:(NSDictionary *)dict uniqueKey:(NSString *)key error:(NSError **)error commit:(BOOL)commit;

+ (id)updateWithDictionary:(NSDictionary *)dict commit:(BOOL)commit;
+ (id)updateWithDictionary:(NSDictionary *)dict error:(NSError **)error commit:(BOOL)commit;
+ (id)updateWithDictionary:(NSDictionary *)dict uniqueKey:(NSString *)key error:(NSError **)error commit:(BOOL)commit;
+ (id)updateWithDictionary:(NSDictionary *)dict uniqueKey:(NSString *)key upsert:(BOOL)upsert error:(NSError **)error commit:(BOOL)commit;

+ (id)updateWithDictionary:(NSDictionary *)dict uniqueKeys:(NSArray *)keys upsert:(BOOL)upsert error:(NSError **)error commit:(BOOL)commit;

//this doesn't persist object. Just stuffing object with dict
- (void)updateWithDictionary:(NSDictionary *)dict;
@end
