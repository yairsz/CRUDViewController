//
//  CRUDViewController.h
//  LibraryBrowser
//
//  Created by Yair Szarf on 12/12/13.
//  Copyright (c) 2013 Yair Szarf. All rights reserved.
//

//This view controller is part of the Library Browser App
//It was written as a response to the code fellows challenge
//This view controller adds CRUD functionality to the library database
//if you want to see the whole app go to https://github.com/yairsz/LibraryBrowserYS


#import <UIKit/UIKit.h>
#import "Library.h"
#import "Shelf.h"
#import "Book.h"

@interface CRUDViewController : UIViewController

@property (strong, nonatomic) Book * selectedBook;
@property (strong, nonatomic) Library * selectedLibrary;
@property (strong, nonatomic) Shelf * selectedShelf;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
