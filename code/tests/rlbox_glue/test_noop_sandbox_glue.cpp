// NOLINTNEXTLINE
#define RLBOX_USE_STATIC_CALLS() rlbox_noop_sandbox_lookup_symbol
#define RLBOX_USE_EXCEPTIONS
#define RLBOX_ENABLE_DEBUG_ASSERTIONS
#include "rlbox_noop_sandbox.hpp"

// NOLINTNEXTLINE
#define TestType rlbox::rlbox_noop_sandbox
// NOLINTNEXTLINE
#define CreateSandbox(sandbox) sandbox.create_sandbox()

#include "test_sandbox_glue.inc.cpp"