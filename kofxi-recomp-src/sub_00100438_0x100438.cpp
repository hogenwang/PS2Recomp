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

// Function: sub_00100438
// Address: 0x100438 - 0x1004d8
void sub_00100438_0x100438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00100438_0x100438");
#endif

    switch (ctx->pc) {
        case 0x10045cu: goto label_10045c;
        case 0x100478u: goto label_100478;
        case 0x100494u: goto label_100494;
        case 0x1004a8u: goto label_1004a8;
        case 0x1004b4u: goto label_1004b4;
        default: break;
    }

    ctx->pc = 0x100438u;

    // 0x100438: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x100438u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x10043c: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x10043cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x100440: 0xffb20120  sd          $s2, 0x120($sp)
    ctx->pc = 0x100440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 18));
    // 0x100444: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x100444u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x100448: 0xffbf0130  sd          $ra, 0x130($sp)
    ctx->pc = 0x100448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 31));
    // 0x10044c: 0x24849980  addiu       $a0, $a0, -0x6680
    ctx->pc = 0x10044cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941056));
    // 0x100450: 0xffb10110  sd          $s1, 0x110($sp)
    ctx->pc = 0x100450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 17));
    // 0x100454: 0xc04485c  jal         func_112170
    ctx->pc = 0x100454u;
    SET_GPR_U32(ctx, 31, 0x10045Cu);
    ctx->pc = 0x100458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100454u;
    // 0x100458: 0xffb00100  sd          $s0, 0x100($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112170u, 0x100454u, 0x10045Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10045Cu;
label_10045c:
    // 0x10045c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x10045cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100460: 0x6410003  bgez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x100460u;
    {
        const bool branch_taken_0x100460 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x100464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100460u;
        // 0x100464: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100460) {
            ctx->pc = 0x100470u;
            goto label_100470;
        }
    }
    ctx->pc = 0x100468u;
    // 0x100468: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x100468u;
    {
        const bool branch_taken_0x100468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10046Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100468u;
        // 0x10046c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100468) {
            ctx->pc = 0x1004C0u;
            goto label_1004c0;
        }
    }
    ctx->pc = 0x100470u;
label_100470:
    // 0x100470: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x100470u;
    {
        const bool branch_taken_0x100470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x100474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100470u;
        // 0x100474: 0x3a0802d  daddu       $s0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100470) {
            ctx->pc = 0x10047Cu;
            goto label_10047c;
        }
    }
    ctx->pc = 0x100478u;
label_100478:
    // 0x100478: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x100478u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_10047c:
    // 0x10047c: 0x2e220100  sltiu       $v0, $s1, 0x100
    ctx->pc = 0x10047cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x100480: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x100480u;
    {
        const bool branch_taken_0x100480 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x100484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100480u;
        // 0x100484: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100480) {
            ctx->pc = 0x1004A0u;
            goto label_1004a0;
        }
    }
    ctx->pc = 0x100488u;
    // 0x100488: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x100488u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10048c: 0xc0449ee  jal         func_1127B8
    ctx->pc = 0x10048Cu;
    SET_GPR_U32(ctx, 31, 0x100494u);
    ctx->pc = 0x100490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10048Cu;
    // 0x100490: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1127B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1127B8u, 0x10048Cu, 0x100494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100494u;
label_100494:
    // 0x100494: 0x82030000  lb          $v1, 0x0($s0)
    ctx->pc = 0x100494u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x100498: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x100498u;
    {
        const bool branch_taken_0x100498 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x10049Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100498u;
        // 0x10049c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100498) {
            ctx->pc = 0x100478u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_100478;
        }
    }
    ctx->pc = 0x1004A0u;
label_1004a0:
    // 0x1004a0: 0xc044900  jal         func_112400
    ctx->pc = 0x1004A0u;
    SET_GPR_U32(ctx, 31, 0x1004A8u);
    ctx->pc = 0x1004A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1004A0u;
    // 0x1004a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112400u, 0x1004A0u, 0x1004A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1004A8u;
label_1004a8:
    // 0x1004a8: 0x2624fff7  addiu       $a0, $s1, -0x9
    ctx->pc = 0x1004a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967287));
    // 0x1004ac: 0xc048c54  jal         func_123150
    ctx->pc = 0x1004ACu;
    SET_GPR_U32(ctx, 31, 0x1004B4u);
    ctx->pc = 0x1004B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1004ACu;
    // 0x1004b0: 0x3a42021  addu        $a0, $sp, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123150u, 0x1004ACu, 0x1004B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1004B4u;
label_1004b4:
    // 0x1004b4: 0x3c030131  lui         $v1, 0x131
    ctx->pc = 0x1004b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)305 << 16));
    // 0x1004b8: 0x34635670  ori         $v1, $v1, 0x5670
    ctx->pc = 0x1004b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)22128);
    // 0x1004bc: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x1004bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1004c0:
    // 0x1004c0: 0xdfbf0130  ld          $ra, 0x130($sp)
    ctx->pc = 0x1004c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x1004c4: 0xdfb20120  ld          $s2, 0x120($sp)
    ctx->pc = 0x1004c4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1004c8: 0xdfb10110  ld          $s1, 0x110($sp)
    ctx->pc = 0x1004c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1004cc: 0xdfb00100  ld          $s0, 0x100($sp)
    ctx->pc = 0x1004ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1004d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1004D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1004D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1004D0u;
        // 0x1004d4: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1004D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1004D8u;
}
