add_project_arguments('-DSPMOD_CORE', language : [ 'c', 'cpp' ])

if build_machine.system() == 'linux'
    add_project_link_arguments('-ldl', language : [ 'c', 'cpp'])
endif

sourceFiles = files('coreNatives.cpp',
                    'CvarsNatives.cpp',
                    'ForwardsNatives.cpp',
                    'StringNatives.cpp',
                    'MessageNatives.cpp',
                    'h_export.cpp',
                    'engine_api.cpp',
                    'dllapi.cpp',
                    'meta_api.cpp',
                    'SPGlobal.cpp',
                    'RehldsApi.cpp',
                    'ForwardSystem.cpp',
                    'PluginSystem.cpp',
                    'LoggingSystem.cpp',
                    'NativeSystem.cpp',
                    'SrvCommand.cpp',
                    'PrintfImpl.cpp',
                    'ValveInterface.cpp')

shared_library('spmod_mm', sourceFiles, include_directories : includeDirs)