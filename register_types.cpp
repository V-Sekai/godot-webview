/*************************************************************************/
/*  register_types.cpp                                                   */
/*************************************************************************/

#include "register_types.h"

#include "core/object/class_db.h"
#include "core/config/engine.h"

#include "webview.h"

void register_webview_module_types() {
	ClassDB::register_class<WebViewOverlay>();
	WebViewOverlay::init();
}

void unregister_webview_module_types() {
	WebViewOverlay::finish();
}
