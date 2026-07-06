#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00298358
// Address: 0x298358 - 0x2983b8
void sub_00298358_0x298358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00298358_0x298358");
#endif

    switch (ctx->pc) {
        case 0x29838cu: goto label_29838c;
        case 0x29839cu: goto label_29839c;
        case 0x2983acu: goto label_2983ac;
        default: break;
    }

    ctx->pc = 0x298358u;

    // 0x298358: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x298358u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x29835c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x29835cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x298360: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x298360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x298364: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x298364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x298368: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x298368u;
    {
        const bool branch_taken_0x298368 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x29836Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x298368u;
            // 0x29836c: 0x24020074  addiu       $v0, $zero, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298368) {
            ctx->pc = 0x298394u;
            goto label_298394;
        }
    }
    ctx->pc = 0x298370u;
    // 0x298370: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x298370u;
    {
        const bool branch_taken_0x298370 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x298374u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x298370u;
            // 0x298374: 0x24060092  addiu       $a2, $zero, 0x92 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 146));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298370) {
            ctx->pc = 0x2983A4u;
            goto label_2983a4;
        }
    }
    ctx->pc = 0x298378u;
    // 0x298378: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x298378u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x29837c: 0x240500b8  addiu       $a1, $zero, 0xB8
    ctx->pc = 0x29837cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 184));
    // 0x298380: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x298380u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298384: 0xc0a5648  jal         func_295920
    ctx->pc = 0x298384u;
    SET_GPR_U32(ctx, 31, 0x29838Cu);
    ctx->pc = 0x298388u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x298384u;
            // 0x298388: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (runtime->hasFunction(0x295920u)) {
        auto targetFn = runtime->lookupFunction(0x295920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29838Cu; }
        if (ctx->pc != 0x29838Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295920_0x295920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29838Cu; }
        if (ctx->pc != 0x29838Cu) { return; }
    }
    ctx->pc = 0x29838Cu;
label_29838c:
    // 0x29838c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x29838Cu;
    {
        const bool branch_taken_0x29838c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x298390u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29838Cu;
            // 0x298390: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29838c) {
            ctx->pc = 0x2983ACu;
            goto label_2983ac;
        }
    }
    ctx->pc = 0x298394u;
label_298394:
    // 0x298394: 0xc0aa534  jal         func_2A94D0
    ctx->pc = 0x298394u;
    SET_GPR_U32(ctx, 31, 0x29839Cu);
    ctx->pc = 0x298398u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x298394u;
            // 0x298398: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A94D0u;
    if (runtime->hasFunction(0x2A94D0u)) {
        auto targetFn = runtime->lookupFunction(0x2A94D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29839Cu; }
        if (ctx->pc != 0x29839Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A94D0_0x2a94d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29839Cu; }
        if (ctx->pc != 0x29839Cu) { return; }
    }
    ctx->pc = 0x29839Cu;
label_29839c:
    // 0x29839c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x29839Cu;
    {
        const bool branch_taken_0x29839c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2983A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29839Cu;
            // 0x2983a0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29839c) {
            ctx->pc = 0x2983B0u;
            goto label_2983b0;
        }
    }
    ctx->pc = 0x2983A4u;
label_2983a4:
    // 0x2983a4: 0xc0a60ee  jal         func_2983B8
    ctx->pc = 0x2983A4u;
    SET_GPR_U32(ctx, 31, 0x2983ACu);
    ctx->pc = 0x2983A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2983A4u;
            // 0x2983a8: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2983B8u;
    if (runtime->hasFunction(0x2983B8u)) {
        auto targetFn = runtime->lookupFunction(0x2983B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2983ACu; }
        if (ctx->pc != 0x2983ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002983B8_0x2983b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2983ACu; }
        if (ctx->pc != 0x2983ACu) { return; }
    }
    ctx->pc = 0x2983ACu;
label_2983ac:
    // 0x2983ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2983acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2983b0:
    // 0x2983b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2983B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2983B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2983B0u;
            // 0x2983b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2983B8u;
    ctx->pc = 0x2983b8u;
}
