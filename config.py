def can_build(env, platform):
    return env["platform"] == "windows"

def get_doc_classes():
    return [
        "WebViewOverlay"
    ]

def get_doc_path():
    return "doc_classes"

def configure(env):
    pass
