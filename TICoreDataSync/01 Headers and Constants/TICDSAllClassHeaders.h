//
//  TICDSAllClassHeaders.h
//  ShoppingListMac
//
//  Created by Tim Isted on 21/04/2011.
//  Copyright 2011 Tim Isted. All rights reserved.
//

#pragma mark -
#pragma mark Primary Classes
#import "TICDSApplicationSyncManager.h"
#import "TICDSDocumentSyncManager.h"
#import "TICDSSynchronizedManagedObjectContext.h"

#pragma mark Operations
#import "TICDSOperation.h"
#import "TICDSApplicationRegistrationOperation.h"
#import "TICDSDocumentRegistrationOperation.h"

#pragma mark File Manager-Based
#import "TICDSFileManagerBasedApplicationSyncManager.h"
#import "TICDSFileManagerBasedDocumentSyncManager.h"
#import "TICDSFileManagerBasedApplicationRegistrationOperation.h"
#import "TICDSFileManagerBasedDocumentRegistrationOperation.h"

#pragma mark -
#pragma mark Utilities
#import "TICDSUtilities.h"
#import "TICDSLog.h"
#import "TICDSError.h"

#pragma mark -
#pragma mark External Sources
#import "NSObject+TIDelegateCommunications.h"
#import "TICoreDataFactory.h"