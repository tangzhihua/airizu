//
//  SystemMessageParseDomainBeanToDD.h
//  airizu
//
//  Created by 唐志华 on 13-1-1.
//
//

#import "IParseDomainBeanToDataDictionary.h"

@interface SystemMessageParseDomainBeanToDD : NSObject <IParseDomainBeanToDataDictionary> {
  
}

- (NSDictionary *) parseDomainBeanToDataDictionary:(in id) netRequestDomainBean;
@end