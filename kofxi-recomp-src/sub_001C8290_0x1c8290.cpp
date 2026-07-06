#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C8290
// Address: 0x1c8290 - 0x1c8318
void sub_001C8290_0x1c8290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C8290_0x1c8290");
#endif

    switch (ctx->pc) {
        case 0x1c82b8u: goto label_1c82b8;
        case 0x1c82d8u: goto label_1c82d8;
        default: break;
    }

    ctx->pc = 0x1c8290u;

    // 0x1c8290: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c8290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c8294: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1c8294u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8298: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c8298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c829c: 0x14e00006  bnez        $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C829Cu;
    {
        const bool branch_taken_0x1c829c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C82A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C829Cu;
            // 0x1c82a0: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c829c) {
            ctx->pc = 0x1C82B8u;
            goto label_1c82b8;
        }
    }
    ctx->pc = 0x1C82A4u;
    // 0x1c82a4: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1c82a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1c82a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c82a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c82ac: 0x2484b180  addiu       $a0, $a0, -0x4E80
    ctx->pc = 0x1c82acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947200));
    // 0x1c82b0: 0x8071ea4  j           func_1C7A90
    ctx->pc = 0x1C82B0u;
    ctx->pc = 0x1C82B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C82B0u;
            // 0x1c82b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C7A90u;
    if (runtime->hasFunction(0x1C7A90u)) {
        auto targetFn = runtime->lookupFunction(0x1C7A90u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001C7A90_0x1c7a90(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1C82B8u;
label_1c82b8:
    // 0x1c82b8: 0x1c800007  bgtz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C82B8u;
    {
        const bool branch_taken_0x1c82b8 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x1C82BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C82B8u;
            // 0x1c82bc: 0x240302ee  addiu       $v1, $zero, 0x2EE (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 750));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c82b8) {
            ctx->pc = 0x1C82D8u;
            goto label_1c82d8;
        }
    }
    ctx->pc = 0x1C82C0u;
    // 0x1c82c0: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1c82c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1c82c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c82c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c82c8: 0x2484b1a8  addiu       $a0, $a0, -0x4E58
    ctx->pc = 0x1c82c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947240));
    // 0x1c82cc: 0x8071ea4  j           func_1C7A90
    ctx->pc = 0x1C82CCu;
    ctx->pc = 0x1C82D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C82CCu;
            // 0x1c82d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C7A90u;
    if (runtime->hasFunction(0x1C7A90u)) {
        auto targetFn = runtime->lookupFunction(0x1C7A90u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001C7A90_0x1c7a90(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1C82D4u;
    // 0x1c82d4: 0x0  nop
    ctx->pc = 0x1c82d4u;
    // NOP
label_1c82d8:
    // 0x1c82d8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1c82d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c82dc: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x1c82dcu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1c82e0: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1C82E0u;
    {
        const bool branch_taken_0x1c82e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c82e0) {
            ctx->pc = 0x1C82E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C82E0u;
            // 0x1c82e4: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C82E8u;
            goto label_1c82e8;
        }
    }
    ctx->pc = 0x1C82E8u;
label_1c82e8:
    // 0x1c82e8: 0xace40010  sw          $a0, 0x10($a3)
    ctx->pc = 0x1c82e8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 4));
    // 0x1c82ec: 0x24060060  addiu       $a2, $zero, 0x60
    ctx->pc = 0x1c82ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x1c82f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c82f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c82f4: 0x1012  mflo        $v0
    ctx->pc = 0x1c82f4u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1c82f8: 0x28430061  slti        $v1, $v0, 0x61
    ctx->pc = 0x1c82f8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)97) ? 1 : 0);
    // 0x1c82fc: 0x2202a  slt         $a0, $zero, $v0
    ctx->pc = 0x1c82fcu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1c8300: 0xa4100a  movz        $v0, $a1, $a0
    ctx->pc = 0x1c8300u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x1c8304: 0x38630000  xori        $v1, $v1, 0x0
    ctx->pc = 0x1c8304u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)0);
    // 0x1c8308: 0xc3100a  movz        $v0, $a2, $v1
    ctx->pc = 0x1c8308u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 6));
    // 0x1c830c: 0xace20018  sw          $v0, 0x18($a3)
    ctx->pc = 0x1c830cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 2));
    // 0x1c8310: 0x3e00008  jr          $ra
    ctx->pc = 0x1C8310u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C8314u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8310u;
            // 0x1c8314: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C8318u;
    ctx->pc = 0x1c8318u;
}
