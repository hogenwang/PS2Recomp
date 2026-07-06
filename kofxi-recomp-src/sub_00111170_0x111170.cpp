#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00111170
// Address: 0x111170 - 0x111200
void sub_00111170_0x111170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00111170_0x111170");
#endif

    switch (ctx->pc) {
        case 0x111188u: goto label_111188;
        case 0x1111c0u: goto label_1111c0;
        case 0x1111e8u: goto label_1111e8;
        default: break;
    }

    ctx->pc = 0x111170u;

    // 0x111170: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x111170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x111174: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x111174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x111178: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x111178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11117c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x11117cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x111180: 0xc045ba8  jal         func_116EA0
    ctx->pc = 0x111180u;
    SET_GPR_U32(ctx, 31, 0x111188u);
    ctx->pc = 0x111184u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x111180u;
            // 0x111184: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x116EA0u;
    if (runtime->hasFunction(0x116EA0u)) {
        auto targetFn = runtime->lookupFunction(0x116EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x111188u; }
        if (ctx->pc != 0x111188u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiDisableInterruptsAndReturnState_0x116ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x111188u; }
        if (ctx->pc != 0x111188u) { return; }
    }
    ctx->pc = 0x111188u;
label_111188:
    // 0x111188: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x111188u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x11118c: 0x24638200  addiu       $v1, $v1, -0x7E00
    ctx->pc = 0x11118cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935040));
    // 0x111190: 0x8c700028  lw          $s0, 0x28($v1)
    ctx->pc = 0x111190u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x111194: 0x16110004  bne         $s0, $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x111194u;
    {
        const bool branch_taken_0x111194 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        if (branch_taken_0x111194) {
            ctx->pc = 0x1111A8u;
            goto label_1111a8;
        }
    }
    ctx->pc = 0x11119Cu;
    // 0x11119c: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x11119cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1111a0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1111A0u;
    {
        const bool branch_taken_0x1111a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1111A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1111A0u;
            // 0x1111a4: 0xac620028  sw          $v0, 0x28($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1111a0) {
            ctx->pc = 0x1111E0u;
            goto label_1111e0;
        }
    }
    ctx->pc = 0x1111A8u;
label_1111a8:
    // 0x1111a8: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x1111A8u;
    {
        const bool branch_taken_0x1111a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1111a8) {
            ctx->pc = 0x1111E0u;
            goto label_1111e0;
        }
    }
    ctx->pc = 0x1111B0u;
    // 0x1111b0: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x1111b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1111b4: 0x50710009  beql        $v1, $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1111B4u;
    {
        const bool branch_taken_0x1111b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        if (branch_taken_0x1111b4) {
            ctx->pc = 0x1111B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1111B4u;
            // 0x1111b8: 0x8e220014  lw          $v0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1111DCu;
            goto label_1111dc;
        }
    }
    ctx->pc = 0x1111BCu;
    // 0x1111bc: 0x0  nop
    ctx->pc = 0x1111bcu;
    // NOP
label_1111c0:
    // 0x1111c0: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x1111c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1111c4: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1111C4u;
    {
        const bool branch_taken_0x1111c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1111c4) {
            ctx->pc = 0x1111E0u;
            goto label_1111e0;
        }
    }
    ctx->pc = 0x1111CCu;
    // 0x1111cc: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1111ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1111d0: 0x1451fffb  bne         $v0, $s1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1111D0u;
    {
        const bool branch_taken_0x1111d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x1111D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1111D0u;
            // 0x1111d4: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1111d0) {
            ctx->pc = 0x1111C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1111c0;
        }
    }
    ctx->pc = 0x1111D8u;
    // 0x1111d8: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x1111d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_1111dc:
    // 0x1111dc: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x1111dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
label_1111e0:
    // 0x1111e0: 0xc045bbc  jal         func_116EF0
    ctx->pc = 0x1111E0u;
    SET_GPR_U32(ctx, 31, 0x1111E8u);
    ctx->pc = 0x116EF0u;
    if (runtime->hasFunction(0x116EF0u)) {
        auto targetFn = runtime->lookupFunction(0x116EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1111E8u; }
        if (ctx->pc != 0x1111E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiEnableInterruptsAndReturnState_0x116ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1111E8u; }
        if (ctx->pc != 0x1111E8u) { return; }
    }
    ctx->pc = 0x1111E8u;
label_1111e8:
    // 0x1111e8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1111e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1111ec: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1111ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1111f0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1111f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1111f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1111f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1111f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1111F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1111FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1111F8u;
            // 0x1111fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x111200u;
    ctx->pc = 0x111200u;
}
