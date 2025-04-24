#import <Foundation/Foundation.h>

#include <exception>
#include <string>

int gameEntry(int argc, char *argv[]);

const char* build_version(void) {
    return "1.36";
}

int main(int argc, char *argv[])
{
    NSFileManager *fileManager = [NSFileManager defaultManager];
    NSError *error;

    NSString *docFolderPath = [[fileManager URLsForDirectory:NSDocumentDirectory inDomains:NSUserDomainMask] lastObject].path;
    
    NSArray *dirs = @[ @"Profiles", @"Resources", @"Setups", @"TC" ];
    
    for (NSString *dir in dirs) {
        NSString *dstPath = [docFolderPath stringByAppendingPathComponent:dir];
        if ([fileManager fileExistsAtPath:dstPath] == NO)
        {
            NSString *srcPath = [[NSBundle mainBundle] pathForResource:dir ofType:nil];
            [fileManager copyItemAtPath:srcPath toPath:dstPath error:&error];
        }
    }
    
    char *args[] = { "openliero", "openliero", "--config-root", (char*)[docFolderPath cString] };
    
	return gameEntry(4, args);
}
