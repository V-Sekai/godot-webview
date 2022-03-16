/*************************************************************************/
/*  register_types.cpp                                                   */
/*************************************************************************/

#include "register_types.h"

#include "core/config/engine.h"
#include "core/object/class_db.h"


#include "webview.h"

void register_webview_types() {
	ClassDB::register_class<WebViewOverlay>();
	WebViewOverlay::init();
}

void unregister_webview_types() {
	WebViewOverlay::finish();
}
