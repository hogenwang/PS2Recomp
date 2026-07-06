#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00178990
// Address: 0x178990 - 0x1789e0
void sub_00178990_0x178990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00178990_0x178990");
#endif

    ctx->pc = 0x178990u;

    // 0x178990: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x178990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x178994: 0x41c03  sra         $v1, $a0, 16
    ctx->pc = 0x178994u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 16));
    // 0x178998: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x178998u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x17899c: 0x5062000c  beql        $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x17899Cu;
    {
        const bool branch_taken_0x17899c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x17899c) {
            ctx->pc = 0x1789A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17899Cu;
            // 0x1789a0: 0xaca40000  sw          $a0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1789D0u;
            goto label_1789d0;
        }
    }
    ctx->pc = 0x1789A4u;
    // 0x1789a4: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x1789a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1789a8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1789a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1789ac: 0x14c00002  bnez        $a2, . + 4 + (0x2 << 2)
    ctx->pc = 0x1789ACu;
    {
        const bool branch_taken_0x1789ac = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1789B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1789ACu;
            // 0x1789b0: 0x46001a  div         $zero, $v0, $a2 (Delay Slot)
        { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1789ac) {
            ctx->pc = 0x1789B8u;
            goto label_1789b8;
        }
    }
    ctx->pc = 0x1789B4u;
    // 0x1789b4: 0x1cd  break       0, 7
    ctx->pc = 0x1789b4u;
    runtime->handleBreak(rdram, ctx);
label_1789b8:
    // 0x1789b8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1789b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1789bc: 0x2012  mflo        $a0
    ctx->pc = 0x1789bcu;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x1789c0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1789c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1789c4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1789c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1789c8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1789C8u;
    {
        const bool branch_taken_0x1789c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1789CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1789C8u;
            // 0x1789cc: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1789c8) {
            ctx->pc = 0x1789D4u;
            goto label_1789d4;
        }
    }
    ctx->pc = 0x1789D0u;
label_1789d0:
    // 0x1789d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1789d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1789d4:
    // 0x1789d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1789D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1789DCu;
    // 0x1789dc: 0x0  nop
    ctx->pc = 0x1789dcu;
    // NOP
    ctx->pc = 0x1789e0u;
}
