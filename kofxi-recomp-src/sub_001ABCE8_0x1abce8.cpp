#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001ABCE8
// Address: 0x1abce8 - 0x1abd68
void sub_001ABCE8_0x1abce8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ABCE8_0x1abce8");
#endif

    ctx->pc = 0x1abce8u;

    // 0x1abce8: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1abce8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abcec: 0x84e20098  lh          $v0, 0x98($a3)
    ctx->pc = 0x1abcecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 152)));
    // 0x1abcf0: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1ABCF0u;
    {
        const bool branch_taken_0x1abcf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ABCF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABCF0u;
            // 0x1abcf4: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abcf0) {
            ctx->pc = 0x1ABD18u;
            goto label_1abd18;
        }
    }
    ctx->pc = 0x1ABCF8u;
    // 0x1abcf8: 0x80e2000f  lb          $v0, 0xF($a3)
    ctx->pc = 0x1abcf8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 15)));
    // 0x1abcfc: 0xace80048  sw          $t0, 0x48($a3)
    ctx->pc = 0x1abcfcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 72), GPR_U32(ctx, 8));
    // 0x1abd00: 0xc2001a  div         $zero, $a2, $v0
    ctx->pc = 0x1abd00u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1abd04: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1ABD04u;
    {
        const bool branch_taken_0x1abd04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1abd04) {
            ctx->pc = 0x1ABD08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABD04u;
            // 0x1abd08: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1ABD0Cu;
            goto label_1abd0c;
        }
    }
    ctx->pc = 0x1ABD0Cu;
label_1abd0c:
    // 0x1abd0c: 0x1812  mflo        $v1
    ctx->pc = 0x1abd0cu;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x1abd10: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1ABD10u;
    {
        const bool branch_taken_0x1abd10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ABD14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABD10u;
            // 0x1abd14: 0xace00074  sw          $zero, 0x74($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 116), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abd10) {
            ctx->pc = 0x1ABD4Cu;
            goto label_1abd4c;
        }
    }
    ctx->pc = 0x1ABD18u;
label_1abd18:
    // 0x1abd18: 0x80e2000d  lb          $v0, 0xD($a3)
    ctx->pc = 0x1abd18u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 13)));
    // 0x1abd1c: 0x80e5000e  lb          $a1, 0xE($a3)
    ctx->pc = 0x1abd1cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 14)));
    // 0x1abd20: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x1abd20u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1abd24: 0x24440007  addiu       $a0, $v0, 0x7
    ctx->pc = 0x1abd24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
    // 0x1abd28: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x1abd28u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x1abd2c: 0xace80048  sw          $t0, 0x48($a3)
    ctx->pc = 0x1abd2cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 72), GPR_U32(ctx, 8));
    // 0x1abd30: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x1abd30u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x1abd34: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x1abd34u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1abd38: 0x70c2001a  div1        $zero, $a2, $v0
    ctx->pc = 0x1abd38u;
    { int32_t divisor = GPR_S32(ctx, 2); int32_t dividend = GPR_S32(ctx, 6); if (divisor != 0) {     if (divisor == -1 && dividend == INT32_MIN) {         ctx->lo1 = (uint64_t)(int64_t)INT32_MIN; ctx->hi1 = 0;     } else {         ctx->lo1 = (uint64_t)(int64_t)(dividend / divisor);         ctx->hi1 = (uint64_t)(int64_t)(dividend % divisor);     } } else {     ctx->lo1 = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi1 = (uint64_t)(int64_t)dividend; } }
    // 0x1abd3c: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1ABD3Cu;
    {
        const bool branch_taken_0x1abd3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1abd3c) {
            ctx->pc = 0x1ABD40u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABD3Cu;
            // 0x1abd40: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1ABD44u;
            goto label_1abd44;
        }
    }
    ctx->pc = 0x1ABD44u;
label_1abd44:
    // 0x1abd44: 0xace00074  sw          $zero, 0x74($a3)
    ctx->pc = 0x1abd44u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 116), GPR_U32(ctx, 0));
    // 0x1abd48: 0x70001812  mflo1       $v1
    ctx->pc = 0x1abd48u;
    SET_GPR_U64(ctx, 3, ctx->lo1);
label_1abd4c:
    // 0x1abd4c: 0xace3004c  sw          $v1, 0x4C($a3)
    ctx->pc = 0x1abd4cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 76), GPR_U32(ctx, 3));
    // 0x1abd50: 0xace000f4  sw          $zero, 0xF4($a3)
    ctx->pc = 0x1abd50u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 244), GPR_U32(ctx, 0));
    // 0x1abd54: 0xace00090  sw          $zero, 0x90($a3)
    ctx->pc = 0x1abd54u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 144), GPR_U32(ctx, 0));
    // 0x1abd58: 0xace00094  sw          $zero, 0x94($a3)
    ctx->pc = 0x1abd58u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 148), GPR_U32(ctx, 0));
    // 0x1abd5c: 0x3e00008  jr          $ra
    ctx->pc = 0x1ABD5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ABD60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABD5Cu;
            // 0x1abd60: 0xace000f8  sw          $zero, 0xF8($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 248), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1ABD64u;
    // 0x1abd64: 0x0  nop
    ctx->pc = 0x1abd64u;
    // NOP
    ctx->pc = 0x1abd68u;
}
