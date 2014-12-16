#import <Mantle/Mantle.h>

@interface Beverage : MTLModel

- (id)initWithName:(NSString *)name
          caffeine:(NSNumber *)caffeine;

- (id)initWithName:(NSString *)name
           subtype:(NSString *)subtype
          caffeine:(NSNumber *)caffeine NS_DESIGNATED_INITIALIZER;

@property (readonly, strong, nonatomic) NSString *name;
@property (readonly, strong, nonatomic) NSString *subtype;
@property (readonly, strong, nonatomic) NSNumber *caffeine; // in mg

@end