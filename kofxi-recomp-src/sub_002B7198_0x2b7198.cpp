#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002B7198
// Address: 0x2b7198 - 0x2b7208
void sub_002B7198_0x2b7198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B7198_0x2b7198");
#endif

    ctx->pc = 0x2b7198u;

    // 0x2b7198: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2b7198u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2b719c: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x2b719cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x2b71a0: 0x2448d458  addiu       $t0, $v0, -0x2BA8
    ctx->pc = 0x2b71a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956120));
    // 0x2b71a4: 0x30820003  andi        $v0, $a0, 0x3
    ctx->pc = 0x2b71a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x2b71a8: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2B71A8u;
    {
        const bool branch_taken_0x2b71a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B71ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B71A8u;
            // 0x2b71ac: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b71a8) {
            ctx->pc = 0x2B71ECu;
            goto label_2b71ec;
        }
    }
    ctx->pc = 0x2B71B0u;
    // 0x2b71b0: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x2b71b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2b71b4: 0x82001a  div         $zero, $a0, $v0
    ctx->pc = 0x2b71b4u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2b71b8: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2B71B8u;
    {
        const bool branch_taken_0x2b71b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b71b8) {
            ctx->pc = 0x2B71BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2B71B8u;
            // 0x2b71bc: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2B71C0u;
            goto label_2b71c0;
        }
    }
    ctx->pc = 0x2B71C0u;
label_2b71c0:
    // 0x2b71c0: 0x1810  mfhi        $v1
    ctx->pc = 0x2b71c0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2b71c4: 0x54600009  bnel        $v1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2B71C4u;
    {
        const bool branch_taken_0x2b71c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b71c4) {
            ctx->pc = 0x2B71C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2B71C4u;
            // 0x2b71c8: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2B71ECu;
            goto label_2b71ec;
        }
    }
    ctx->pc = 0x2B71CCu;
    // 0x2b71cc: 0x24020190  addiu       $v0, $zero, 0x190
    ctx->pc = 0x2b71ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
    // 0x2b71d0: 0x82001a  div         $zero, $a0, $v0
    ctx->pc = 0x2b71d0u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2b71d4: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2B71D4u;
    {
        const bool branch_taken_0x2b71d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b71d4) {
            ctx->pc = 0x2B71D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2B71D4u;
            // 0x2b71d8: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2B71DCu;
            goto label_2b71dc;
        }
    }
    ctx->pc = 0x2B71DCu;
label_2b71dc:
    // 0x2b71dc: 0x1810  mfhi        $v1
    ctx->pc = 0x2b71dcu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2b71e0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B71E0u;
    {
        const bool branch_taken_0x2b71e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B71E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B71E0u;
            // 0x2b71e4: 0x2403001a  addiu       $v1, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b71e0) {
            ctx->pc = 0x2B71F0u;
            goto label_2b71f0;
        }
    }
    ctx->pc = 0x2B71E8u;
    // 0x2b71e8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2b71e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b71ec:
    // 0x2b71ec: 0x2403001a  addiu       $v1, $zero, 0x1A
    ctx->pc = 0x2b71ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_2b71f0:
    // 0x2b71f0: 0xe31018  mult        $v0, $a3, $v1
    ctx->pc = 0x2b71f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2b71f4: 0x451821  addu        $v1, $v0, $a1
    ctx->pc = 0x2b71f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2b71f8: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x2b71f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x2b71fc: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x2b71fcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b7200: 0x3e00008  jr          $ra
    ctx->pc = 0x2B7200u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B7204u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7200u;
            // 0x2b7204: 0x461021  addu        $v0, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B7208u;
    ctx->pc = 0x2b7208u;
}
