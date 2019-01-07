#include "runTests.h"
#include "errors.h"
#include "io.h"
#include "stream.h"
#include "cbor.h"
#include "assert.h"
#include "test_utils.h"
#include "hex_utils.h"
#include <stdbool.h>
#include <os.h>

void handleRunTests(
        uint8_t p1,
        uint8_t p2,
        uint8_t *dataBuffer,
        uint16_t dataLength)
{
	BEGIN_ASSERT_NOEXCEPT {
		run_hex_test();
		run_stream_test();
		run_cbor_test();
	} END_ASSERT_NOEXCEPT;

	io_send_buf(SUCCESS, NULL, 0);
}
