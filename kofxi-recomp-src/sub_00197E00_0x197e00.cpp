#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00197E00
// Address: 0x197e00 - 0x197f80
void sub_00197E00_0x197e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00197E00_0x197e00");
#endif

    ctx->pc = 0x197e00u;

    // 0x197e00: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x197e00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x197e04: 0x3c06009c  lui         $a2, 0x9C
    ctx->pc = 0x197e04u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)156 << 16));
    // 0x197e08: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x197e08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x197e0c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x197e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x197e10: 0x238c0  sll         $a3, $v0, 3
    ctx->pc = 0x197e10u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x197e14: 0x24c6dbc8  addiu       $a2, $a2, -0x2438
    ctx->pc = 0x197e14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294958024));
    // 0x197e18: 0xe42021  addu        $a0, $a3, $a0
    ctx->pc = 0x197e18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x197e1c: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x197e1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x197e20: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x197e20u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x197e24: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x197e24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197e28: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x197e28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x197e2c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x197e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x197e30: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x197e30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x197e34: 0x8c640010  lw          $a0, 0x10($v1)
    ctx->pc = 0x197e34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x197e38: 0xa08503a6  sb          $a1, 0x3A6($a0)
    ctx->pc = 0x197e38u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 934), (uint8_t)GPR_U32(ctx, 5));
    // 0x197e3c: 0x8c830364  lw          $v1, 0x364($a0)
    ctx->pc = 0x197e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 868)));
    // 0x197e40: 0xa06503a6  sb          $a1, 0x3A6($v1)
    ctx->pc = 0x197e40u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 934), (uint8_t)GPR_U32(ctx, 5));
    // 0x197e44: 0x906d035c  lbu         $t5, 0x35C($v1)
    ctx->pc = 0x197e44u;
    SET_GPR_U32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 860)));
    // 0x197e48: 0x906c035d  lbu         $t4, 0x35D($v1)
    ctx->pc = 0x197e48u;
    SET_GPR_U32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 861)));
    // 0x197e4c: 0x906b035e  lbu         $t3, 0x35E($v1)
    ctx->pc = 0x197e4cu;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 862)));
    // 0x197e50: 0x906a035f  lbu         $t2, 0x35F($v1)
    ctx->pc = 0x197e50u;
    SET_GPR_U32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 863)));
    // 0x197e54: 0x8c690360  lw          $t1, 0x360($v1)
    ctx->pc = 0x197e54u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 864)));
    // 0x197e58: 0x8c680364  lw          $t0, 0x364($v1)
    ctx->pc = 0x197e58u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 868)));
    // 0x197e5c: 0x90670368  lbu         $a3, 0x368($v1)
    ctx->pc = 0x197e5cu;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x197e60: 0x90660369  lbu         $a2, 0x369($v1)
    ctx->pc = 0x197e60u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 873)));
    // 0x197e64: 0x9065036c  lbu         $a1, 0x36C($v1)
    ctx->pc = 0x197e64u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 876)));
    // 0x197e68: 0xa065035c  sb          $a1, 0x35C($v1)
    ctx->pc = 0x197e68u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 860), (uint8_t)GPR_U32(ctx, 5));
    // 0x197e6c: 0x9065036d  lbu         $a1, 0x36D($v1)
    ctx->pc = 0x197e6cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 877)));
    // 0x197e70: 0xa065035d  sb          $a1, 0x35D($v1)
    ctx->pc = 0x197e70u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 861), (uint8_t)GPR_U32(ctx, 5));
    // 0x197e74: 0x9065036e  lbu         $a1, 0x36E($v1)
    ctx->pc = 0x197e74u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 878)));
    // 0x197e78: 0xa065035e  sb          $a1, 0x35E($v1)
    ctx->pc = 0x197e78u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 862), (uint8_t)GPR_U32(ctx, 5));
    // 0x197e7c: 0x9065036f  lbu         $a1, 0x36F($v1)
    ctx->pc = 0x197e7cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 879)));
    // 0x197e80: 0xa065035f  sb          $a1, 0x35F($v1)
    ctx->pc = 0x197e80u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 863), (uint8_t)GPR_U32(ctx, 5));
    // 0x197e84: 0x8c650370  lw          $a1, 0x370($v1)
    ctx->pc = 0x197e84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 880)));
    // 0x197e88: 0xac650360  sw          $a1, 0x360($v1)
    ctx->pc = 0x197e88u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 864), GPR_U32(ctx, 5));
    // 0x197e8c: 0x8c650374  lw          $a1, 0x374($v1)
    ctx->pc = 0x197e8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 884)));
    // 0x197e90: 0xac650364  sw          $a1, 0x364($v1)
    ctx->pc = 0x197e90u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 868), GPR_U32(ctx, 5));
    // 0x197e94: 0x90650378  lbu         $a1, 0x378($v1)
    ctx->pc = 0x197e94u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 888)));
    // 0x197e98: 0xa0650368  sb          $a1, 0x368($v1)
    ctx->pc = 0x197e98u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 872), (uint8_t)GPR_U32(ctx, 5));
    // 0x197e9c: 0x90650379  lbu         $a1, 0x379($v1)
    ctx->pc = 0x197e9cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 889)));
    // 0x197ea0: 0xa0650369  sb          $a1, 0x369($v1)
    ctx->pc = 0x197ea0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 873), (uint8_t)GPR_U32(ctx, 5));
    // 0x197ea4: 0xa06d036c  sb          $t5, 0x36C($v1)
    ctx->pc = 0x197ea4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 876), (uint8_t)GPR_U32(ctx, 13));
    // 0x197ea8: 0xa06c036d  sb          $t4, 0x36D($v1)
    ctx->pc = 0x197ea8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 877), (uint8_t)GPR_U32(ctx, 12));
    // 0x197eac: 0xa06b036e  sb          $t3, 0x36E($v1)
    ctx->pc = 0x197eacu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 878), (uint8_t)GPR_U32(ctx, 11));
    // 0x197eb0: 0xa06a036f  sb          $t2, 0x36F($v1)
    ctx->pc = 0x197eb0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 879), (uint8_t)GPR_U32(ctx, 10));
    // 0x197eb4: 0xac690370  sw          $t1, 0x370($v1)
    ctx->pc = 0x197eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 880), GPR_U32(ctx, 9));
    // 0x197eb8: 0xac680374  sw          $t0, 0x374($v1)
    ctx->pc = 0x197eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 884), GPR_U32(ctx, 8));
    // 0x197ebc: 0xa0670378  sb          $a3, 0x378($v1)
    ctx->pc = 0x197ebcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 888), (uint8_t)GPR_U32(ctx, 7));
    // 0x197ec0: 0xa0660379  sb          $a2, 0x379($v1)
    ctx->pc = 0x197ec0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 889), (uint8_t)GPR_U32(ctx, 6));
    // 0x197ec4: 0x908d035c  lbu         $t5, 0x35C($a0)
    ctx->pc = 0x197ec4u;
    SET_GPR_U32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 860)));
    // 0x197ec8: 0x908c035d  lbu         $t4, 0x35D($a0)
    ctx->pc = 0x197ec8u;
    SET_GPR_U32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 861)));
    // 0x197ecc: 0x908b035e  lbu         $t3, 0x35E($a0)
    ctx->pc = 0x197eccu;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 862)));
    // 0x197ed0: 0x908a035f  lbu         $t2, 0x35F($a0)
    ctx->pc = 0x197ed0u;
    SET_GPR_U32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 863)));
    // 0x197ed4: 0x8c890360  lw          $t1, 0x360($a0)
    ctx->pc = 0x197ed4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 864)));
    // 0x197ed8: 0x8c880364  lw          $t0, 0x364($a0)
    ctx->pc = 0x197ed8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 868)));
    // 0x197edc: 0x90870368  lbu         $a3, 0x368($a0)
    ctx->pc = 0x197edcu;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 872)));
    // 0x197ee0: 0x90860369  lbu         $a2, 0x369($a0)
    ctx->pc = 0x197ee0u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 873)));
    // 0x197ee4: 0x9085036c  lbu         $a1, 0x36C($a0)
    ctx->pc = 0x197ee4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 876)));
    // 0x197ee8: 0xa085035c  sb          $a1, 0x35C($a0)
    ctx->pc = 0x197ee8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 860), (uint8_t)GPR_U32(ctx, 5));
    // 0x197eec: 0x9085036d  lbu         $a1, 0x36D($a0)
    ctx->pc = 0x197eecu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 877)));
    // 0x197ef0: 0xa085035d  sb          $a1, 0x35D($a0)
    ctx->pc = 0x197ef0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 861), (uint8_t)GPR_U32(ctx, 5));
    // 0x197ef4: 0x9085036e  lbu         $a1, 0x36E($a0)
    ctx->pc = 0x197ef4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 878)));
    // 0x197ef8: 0xa085035e  sb          $a1, 0x35E($a0)
    ctx->pc = 0x197ef8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 862), (uint8_t)GPR_U32(ctx, 5));
    // 0x197efc: 0x9085036f  lbu         $a1, 0x36F($a0)
    ctx->pc = 0x197efcu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 879)));
    // 0x197f00: 0xa085035f  sb          $a1, 0x35F($a0)
    ctx->pc = 0x197f00u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 863), (uint8_t)GPR_U32(ctx, 5));
    // 0x197f04: 0x8c850370  lw          $a1, 0x370($a0)
    ctx->pc = 0x197f04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 880)));
    // 0x197f08: 0xac850360  sw          $a1, 0x360($a0)
    ctx->pc = 0x197f08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 864), GPR_U32(ctx, 5));
    // 0x197f0c: 0x8c850374  lw          $a1, 0x374($a0)
    ctx->pc = 0x197f0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 884)));
    // 0x197f10: 0xac850364  sw          $a1, 0x364($a0)
    ctx->pc = 0x197f10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 868), GPR_U32(ctx, 5));
    // 0x197f14: 0x90850378  lbu         $a1, 0x378($a0)
    ctx->pc = 0x197f14u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 888)));
    // 0x197f18: 0xa0850368  sb          $a1, 0x368($a0)
    ctx->pc = 0x197f18u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 872), (uint8_t)GPR_U32(ctx, 5));
    // 0x197f1c: 0x90850379  lbu         $a1, 0x379($a0)
    ctx->pc = 0x197f1cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 889)));
    // 0x197f20: 0xa0850369  sb          $a1, 0x369($a0)
    ctx->pc = 0x197f20u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 873), (uint8_t)GPR_U32(ctx, 5));
    // 0x197f24: 0xa08d036c  sb          $t5, 0x36C($a0)
    ctx->pc = 0x197f24u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 876), (uint8_t)GPR_U32(ctx, 13));
    // 0x197f28: 0xa08c036d  sb          $t4, 0x36D($a0)
    ctx->pc = 0x197f28u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 877), (uint8_t)GPR_U32(ctx, 12));
    // 0x197f2c: 0xa08b036e  sb          $t3, 0x36E($a0)
    ctx->pc = 0x197f2cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 878), (uint8_t)GPR_U32(ctx, 11));
    // 0x197f30: 0xa08a036f  sb          $t2, 0x36F($a0)
    ctx->pc = 0x197f30u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 879), (uint8_t)GPR_U32(ctx, 10));
    // 0x197f34: 0xac890370  sw          $t1, 0x370($a0)
    ctx->pc = 0x197f34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 880), GPR_U32(ctx, 9));
    // 0x197f38: 0xac880374  sw          $t0, 0x374($a0)
    ctx->pc = 0x197f38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 884), GPR_U32(ctx, 8));
    // 0x197f3c: 0xa0870378  sb          $a3, 0x378($a0)
    ctx->pc = 0x197f3cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 888), (uint8_t)GPR_U32(ctx, 7));
    // 0x197f40: 0xa0860379  sb          $a2, 0x379($a0)
    ctx->pc = 0x197f40u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 889), (uint8_t)GPR_U32(ctx, 6));
    // 0x197f44: 0x8486037c  lh          $a2, 0x37C($a0)
    ctx->pc = 0x197f44u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 892)));
    // 0x197f48: 0x8465037c  lh          $a1, 0x37C($v1)
    ctx->pc = 0x197f48u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 892)));
    // 0x197f4c: 0xa485037c  sh          $a1, 0x37C($a0)
    ctx->pc = 0x197f4cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 892), (uint16_t)GPR_U32(ctx, 5));
    // 0x197f50: 0xa466037c  sh          $a2, 0x37C($v1)
    ctx->pc = 0x197f50u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 892), (uint16_t)GPR_U32(ctx, 6));
    // 0x197f54: 0x8486037e  lh          $a2, 0x37E($a0)
    ctx->pc = 0x197f54u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 894)));
    // 0x197f58: 0x8465037e  lh          $a1, 0x37E($v1)
    ctx->pc = 0x197f58u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 894)));
    // 0x197f5c: 0xa485037e  sh          $a1, 0x37E($a0)
    ctx->pc = 0x197f5cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 894), (uint16_t)GPR_U32(ctx, 5));
    // 0x197f60: 0xa466037e  sh          $a2, 0x37E($v1)
    ctx->pc = 0x197f60u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 894), (uint16_t)GPR_U32(ctx, 6));
    // 0x197f64: 0x90860381  lbu         $a2, 0x381($a0)
    ctx->pc = 0x197f64u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 897)));
    // 0x197f68: 0x90650381  lbu         $a1, 0x381($v1)
    ctx->pc = 0x197f68u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 897)));
    // 0x197f6c: 0xa0850381  sb          $a1, 0x381($a0)
    ctx->pc = 0x197f6cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 897), (uint8_t)GPR_U32(ctx, 5));
    // 0x197f70: 0x3e00008  jr          $ra
    ctx->pc = 0x197F70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x197F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197F70u;
        // 0x197f74: 0xa0660381  sb          $a2, 0x381($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 897), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x197F70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x197F78u;
    // 0x197f78: 0x0  nop
    ctx->pc = 0x197f78u;
    // NOP
    // 0x197f7c: 0x0  nop
    ctx->pc = 0x197f7cu;
    // NOP
}
