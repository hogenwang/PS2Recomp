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

// Function: kofxiSifRpcAcquireRequestSlot
// Address: 0x110570 - 0x110618
void kofxiSifRpcAcquireRequestSlot_0x110570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("kofxiSifRpcAcquireRequestSlot_0x110570");
#endif

    switch (ctx->pc) {
        case 0x110588u: goto label_110588;
        case 0x1105a0u: goto label_1105a0;
        case 0x1105e4u: goto label_1105e4;
        case 0x110600u: goto label_110600;
        default: break;
    }

    ctx->pc = 0x110570u;

    // 0x110570: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x110570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x110574: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x110574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x110578: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x110578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11057c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x11057cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x110580: 0xc045ba8  jal         func_116EA0
    ctx->pc = 0x110580u;
    SET_GPR_U32(ctx, 31, 0x110588u);
    ctx->pc = 0x110584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110580u;
    // 0x110584: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116EA0u, 0x110580u, 0x110588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110588u;
label_110588:
    // 0x110588: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x110588u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x11058c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x11058cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110590: 0x18800019  blez        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x110590u;
    {
        const bool branch_taken_0x110590 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x110594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110590u;
        // 0x110594: 0x8e300004  lw          $s0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110590) {
            ctx->pc = 0x1105F8u;
            goto label_1105f8;
        }
    }
    ctx->pc = 0x110598u;
    // 0x110598: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x110598u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11059c: 0x0  nop
    ctx->pc = 0x11059cu;
    // NOP
label_1105a0:
    // 0x1105a0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1105a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1105a4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1105a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1105a8: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x1105A8u;
    {
        const bool branch_taken_0x1105a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1105a8) {
            ctx->pc = 0x1105ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1105A8u;
            // 0x1105ac: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1105ECu;
            goto label_1105ec;
        }
    }
    ctx->pc = 0x1105B0u;
    // 0x1105b0: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x1105b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1105b4: 0x34420005  ori         $v0, $v0, 0x5
    ctx->pc = 0x1105b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5);
    // 0x1105b8: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x1105b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x1105bc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1105bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1105c0: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x1105c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1105c4: 0x14650004  bne         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1105C4u;
    {
        const bool branch_taken_0x1105c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x1105C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1105C4u;
        // 0x1105c8: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1105c4) {
            ctx->pc = 0x1105D8u;
            goto label_1105d8;
        }
    }
    ctx->pc = 0x1105CCu;
    // 0x1105cc: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x1105ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x1105d0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1105d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1105d4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1105d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1105d8:
    // 0x1105d8: 0xae100014  sw          $s0, 0x14($s0)
    ctx->pc = 0x1105d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 16));
    // 0x1105dc: 0xc045bbc  jal         func_116EF0
    ctx->pc = 0x1105DCu;
    SET_GPR_U32(ctx, 31, 0x1105E4u);
    ctx->pc = 0x1105E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1105DCu;
    // 0x1105e0: 0xae030018  sw          $v1, 0x18($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116EF0u, 0x1105DCu, 0x1105E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1105E4u;
label_1105e4:
    // 0x1105e4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1105E4u;
    {
        const bool branch_taken_0x1105e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1105E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1105E4u;
        // 0x1105e8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1105e4) {
            ctx->pc = 0x110604u;
            goto label_110604;
        }
    }
    ctx->pc = 0x1105ECu;
label_1105ec:
    // 0x1105ec: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x1105ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1105f0: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x1105F0u;
    {
        const bool branch_taken_0x1105f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1105F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1105F0u;
        // 0x1105f4: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1105f0) {
            ctx->pc = 0x1105A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1105a0;
        }
    }
    ctx->pc = 0x1105F8u;
label_1105f8:
    // 0x1105f8: 0xc045bbc  jal         func_116EF0
    ctx->pc = 0x1105F8u;
    SET_GPR_U32(ctx, 31, 0x110600u);
    ctx->pc = 0x116EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116EF0u, 0x1105F8u, 0x110600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110600u;
label_110600:
    // 0x110600: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x110600u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_110604:
    // 0x110604: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x110604u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x110608: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x110608u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11060c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11060cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x110610: 0x3e00008  jr          $ra
    ctx->pc = 0x110610u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x110614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110610u;
        // 0x110614: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x110610u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x110618u;
}
