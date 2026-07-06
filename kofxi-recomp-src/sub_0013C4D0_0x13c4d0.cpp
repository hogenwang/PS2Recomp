#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0013C4D0
// Address: 0x13c4d0 - 0x13c530
void sub_0013C4D0_0x13c4d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013C4D0_0x13c4d0");
#endif

    switch (ctx->pc) {
        case 0x13c4e8u: goto label_13c4e8;
        case 0x13c514u: goto label_13c514;
        default: break;
    }

    ctx->pc = 0x13c4d0u;

    // 0x13c4d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13c4d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13c4d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x13c4d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x13c4d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13c4d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13c4dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13c4dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c4e0: 0xc062804  jal         func_18A010
    ctx->pc = 0x13C4E0u;
    SET_GPR_U32(ctx, 31, 0x13C4E8u);
    ctx->pc = 0x13C4E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13C4E0u;
            // 0x13c4e4: 0x8c8400dc  lw          $a0, 0xDC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18A010u;
    if (runtime->hasFunction(0x18A010u)) {
        auto targetFn = runtime->lookupFunction(0x18A010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C4E8u; }
        if (ctx->pc != 0x13C4E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018A010_0x18a010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C4E8u; }
        if (ctx->pc != 0x13C4E8u) { return; }
    }
    ctx->pc = 0x13C4E8u;
label_13c4e8:
    // 0x13c4e8: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x13C4E8u;
    {
        const bool branch_taken_0x13c4e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13c4e8) {
            ctx->pc = 0x13C4ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13C4E8u;
            // 0x13c4ec: 0x8e02023c  lw          $v0, 0x23C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 572)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13C4F8u;
            goto label_13c4f8;
        }
    }
    ctx->pc = 0x13C4F0u;
    // 0x13c4f0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x13C4F0u;
    {
        const bool branch_taken_0x13c4f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C4F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13C4F0u;
            // 0x13c4f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c4f0) {
            ctx->pc = 0x13C518u;
            goto label_13c518;
        }
    }
    ctx->pc = 0x13C4F8u;
label_13c4f8:
    // 0x13c4f8: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x13c4f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x13c4fc: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x13C4FCu;
    {
        const bool branch_taken_0x13c4fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c4fc) {
            ctx->pc = 0x13C500u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13C4FCu;
            // 0x13c500: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13C50Cu;
            goto label_13c50c;
        }
    }
    ctx->pc = 0x13C504u;
    // 0x13c504: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x13C504u;
    {
        const bool branch_taken_0x13c504 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C508u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13C504u;
            // 0x13c508: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c504) {
            ctx->pc = 0x13C518u;
            goto label_13c518;
        }
    }
    ctx->pc = 0x13C50Cu;
label_13c50c:
    // 0x13c50c: 0xc04f880  jal         func_13E200
    ctx->pc = 0x13C50Cu;
    SET_GPR_U32(ctx, 31, 0x13C514u);
    ctx->pc = 0x13E200u;
    if (runtime->hasFunction(0x13E200u)) {
        auto targetFn = runtime->lookupFunction(0x13E200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C514u; }
        if (ctx->pc != 0x13C514u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013E200_0x13e200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C514u; }
        if (ctx->pc != 0x13C514u) { return; }
    }
    ctx->pc = 0x13C514u;
label_13c514:
    // 0x13c514: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x13c514u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_13c518:
    // 0x13c518: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13c518u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13c51c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13c51cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13c520: 0x3e00008  jr          $ra
    ctx->pc = 0x13C520u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13C524u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13C520u;
            // 0x13c524: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13C528u;
    // 0x13c528: 0x0  nop
    ctx->pc = 0x13c528u;
    // NOP
    // 0x13c52c: 0x0  nop
    ctx->pc = 0x13c52cu;
    // NOP
    ctx->pc = 0x13c530u;
}
