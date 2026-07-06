#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001FB498
// Address: 0x1fb498 - 0x1fb4f0
void sub_001FB498_0x1fb498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FB498_0x1fb498");
#endif

    switch (ctx->pc) {
        case 0x1fb4e0u: goto label_1fb4e0;
        default: break;
    }

    ctx->pc = 0x1fb498u;

    // 0x1fb498: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1fb498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1fb49c: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1fb49cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1fb4a0: 0xa2001a  div         $zero, $a1, $v0
    ctx->pc = 0x1fb4a0u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1fb4a4: 0xac850008  sw          $a1, 0x8($a0)
    ctx->pc = 0x1fb4a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
    // 0x1fb4a8: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1fb4a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x1fb4ac: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1FB4ACu;
    {
        const bool branch_taken_0x1fb4ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fb4ac) {
            ctx->pc = 0x1FB4B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB4ACu;
            // 0x1fb4b0: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FB4B4u;
            goto label_1fb4b4;
        }
    }
    ctx->pc = 0x1FB4B4u;
label_1fb4b4:
    // 0x1fb4b4: 0x1810  mfhi        $v1
    ctx->pc = 0x1fb4b4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1fb4b8: 0x3012  mflo        $a2
    ctx->pc = 0x1fb4b8u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x1fb4bc: 0x54600008  bnel        $v1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FB4BCu;
    {
        const bool branch_taken_0x1fb4bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fb4bc) {
            ctx->pc = 0x1FB4C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB4BCu;
            // 0x1fb4c0: 0x240203e8  addiu       $v0, $zero, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FB4E0u;
            goto label_1fb4e0;
        }
    }
    ctx->pc = 0x1FB4C4u;
    // 0x1fb4c4: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x1fb4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1fb4c8: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1FB4C8u;
    {
        const bool branch_taken_0x1fb4c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fb4c8) {
            ctx->pc = 0x1FB4CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB4C8u;
            // 0x1fb4cc: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FB4D0u;
            goto label_1fb4d0;
        }
    }
    ctx->pc = 0x1FB4D0u;
label_1fb4d0:
    // 0x1fb4d0: 0xac86000c  sw          $a2, 0xC($a0)
    ctx->pc = 0x1fb4d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
    // 0x1fb4d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1FB4D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FB4D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB4D4u;
            // 0x1fb4d8: 0xac830010  sw          $v1, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FB4DCu;
    // 0x1fb4dc: 0x0  nop
    ctx->pc = 0x1fb4dcu;
    // NOP
label_1fb4e0:
    // 0x1fb4e0: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x1fb4e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
    // 0x1fb4e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1FB4E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FB4E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB4E4u;
            // 0x1fb4e8: 0xac820010  sw          $v0, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FB4ECu;
    // 0x1fb4ec: 0x0  nop
    ctx->pc = 0x1fb4ecu;
    // NOP
    ctx->pc = 0x1fb4f0u;
}
