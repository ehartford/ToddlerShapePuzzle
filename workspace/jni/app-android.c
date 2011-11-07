/* ToddlerShapePuzzle
 */
#include <jni.h>
#include <sys/time.h>
#include <time.h>
#include <android/log.h>
#include <stdint.h>

int   gAppAlive   = 1;

static int  sWindowWidth  = 320;
static int  sWindowHeight = 480;
static long sTimeOffset   = 0;
static int  sTimeOffsetInit = 0;

static long
_getTime(void)
{
    struct timeval  now;

    gettimeofday(&now, NULL);
    return (long)(now.tv_sec*1000 + now.tv_usec/1000);
}

/* Call to initialize the graphics state */
void
Java_com_StobDaoura_ToddlerShapePuzzle_DemoRenderer_nativeInit( JNIEnv*  env )
{
    importGLInit();
    appInit();
    gAppAlive    = 1;
    sTimeOffsetInit = 0;
}

void
Java_com_StobDaoura_ToddlerShapePuzzle_DemoRenderer_nativeResize( JNIEnv*  env, jobject  thiz, jint w, jint h )
{
    sWindowWidth  = w;
    sWindowHeight = h;
    __android_log_print(ANDROID_LOG_INFO, "ToddlerShapePuzzle", "resize w=%d h=%d", w, h);
}

/* Call to finalize the graphics state */
void
Java_com_StobDaoura_ToddlerShapePuzzle_DemoRenderer_nativeDone( JNIEnv*  env )
{
    appDeinit();
    importGLDeinit();
}

/* This is called to indicate to the render loop that it should
 * stop as soon as possible.
 */
void
Java_com_StobDaoura_ToddlerShapePuzzle_DemoGLSurfaceView_nativePause( JNIEnv*  env )
{

}

/* Touch input
 */
void
Java_com_StobDaoura_ToddlerShapePuzzle_DemoGLSurfaceView_nativeOnTouch( JNIEnv*  env, jobject  thiz, jint action, jint index, jfloat x1, jfloat y1, jfloat x2, jfloat y2)
{
	__android_log_print(ANDROID_LOG_INFO, "ToddlerShapePuzzle", "ontouch x=%f y=%f", x1, y1);
}

/* Call to render the next GL frame */
void
Java_com_StobDaoura_ToddlerShapePuzzle_DemoRenderer_nativeRender( JNIEnv*  env )
{
    long   curTime = _getTime() + sTimeOffset;
	if (sTimeOffsetInit == 0) {
		sTimeOffsetInit = 1;
		sTimeOffset     = -curTime;
		curTime         = 0;
	}

    //__android_log_print(ANDROID_LOG_INFO, "ToddlerShapePuzzle", "curTime=%ld", curTime);

    appRender(curTime, sWindowWidth, sWindowHeight);
}
