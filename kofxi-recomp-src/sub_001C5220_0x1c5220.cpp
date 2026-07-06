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

// Function: sub_001C5220
// Address: 0x1c5220 - 0x1c52b8
void sub_001C5220_0x1c5220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C5220_0x1c5220");
#endif

    switch (ctx->pc) {
        case 0x1c5244u: goto label_1c5244;
        case 0x1c5250u: goto label_1c5250;
        case 0x1c5258u: goto label_1c5258;
        case 0x1c5270u: goto label_1c5270;
        case 0x1c5284u: goto label_1c5284;
        default: break;
    }

    ctx->pc = 0x1c5220u;

    // 0x1c5220: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c5220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c5224: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1c5224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1c5228: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1c5228u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c522c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c522cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c5230: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1c5230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1c5234: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c5234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c5238: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1c5238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1c523c: 0xc04a83e  jal         func_12A0F8
    ctx->pc = 0x1C523Cu;
    SET_GPR_U32(ctx, 31, 0x1C5244u);
    ctx->pc = 0x1C5240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C523Cu;
    // 0x1c5240: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A0F8u, 0x1C523Cu, 0x1C5244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5244u;
label_1c5244:
    // 0x1c5244: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c5244u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5248: 0xc04a83e  jal         func_12A0F8
    ctx->pc = 0x1C5248u;
    SET_GPR_U32(ctx, 31, 0x1C5250u);
    ctx->pc = 0x1C524Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5248u;
    // 0x1c524c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A0F8u, 0x1C5248u, 0x1C5250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5250u;
label_1c5250:
    // 0x1c5250: 0x12220003  beq         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C5250u;
    {
        const bool branch_taken_0x1c5250 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c5250) {
            ctx->pc = 0x1C5260u;
            goto label_1c5260;
        }
    }
    ctx->pc = 0x1C5258u;
label_1c5258:
    // 0x1c5258: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1C5258u;
    {
        const bool branch_taken_0x1c5258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C525Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5258u;
        // 0x1c525c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5258) {
            ctx->pc = 0x1C5298u;
            goto label_1c5298;
        }
    }
    ctx->pc = 0x1C5260u;
label_1c5260:
    // 0x1c5260: 0x1a20000c  blez        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x1C5260u;
    {
        const bool branch_taken_0x1c5260 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x1C5264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5260u;
        // 0x1c5264: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5260) {
            ctx->pc = 0x1C5294u;
            goto label_1c5294;
        }
    }
    ctx->pc = 0x1C5268u;
    // 0x1c5268: 0x2501821  addu        $v1, $s2, $s0
    ctx->pc = 0x1c5268u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x1c526c: 0x0  nop
    ctx->pc = 0x1c526cu;
    // NOP
label_1c5270:
    // 0x1c5270: 0x2701021  addu        $v0, $s3, $s0
    ctx->pc = 0x1c5270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x1c5274: 0x80650000  lb          $a1, 0x0($v1)
    ctx->pc = 0x1c5274u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c5278: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1c5278u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1c527c: 0xc071472  jal         func_1C51C8
    ctx->pc = 0x1C527Cu;
    SET_GPR_U32(ctx, 31, 0x1C5284u);
    ctx->pc = 0x1C5280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C527Cu;
    // 0x1c5280: 0x80440000  lb          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C51C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C51C8u, 0x1C527Cu, 0x1C5284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5284u;
label_1c5284:
    // 0x1c5284: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1C5284u;
    {
        const bool branch_taken_0x1c5284 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C5288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5284u;
        // 0x1c5288: 0x211182a  slt         $v1, $s0, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5284) {
            ctx->pc = 0x1C5258u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c5258;
        }
    }
    ctx->pc = 0x1C528Cu;
    // 0x1c528c: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1C528Cu;
    {
        const bool branch_taken_0x1c528c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C5290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C528Cu;
        // 0x1c5290: 0x2501821  addu        $v1, $s2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c528c) {
            ctx->pc = 0x1C5270u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c5270;
        }
    }
    ctx->pc = 0x1C5294u;
label_1c5294:
    // 0x1c5294: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c5294u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c5298:
    // 0x1c5298: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c5298u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c529c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c529cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c52a0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c52a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c52a4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1c52a4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c52a8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1c52a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c52ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1C52ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C52B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C52ACu;
        // 0x1c52b0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C52ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C52B4u;
    // 0x1c52b4: 0x0  nop
    ctx->pc = 0x1c52b4u;
    // NOP
    if (ctx->pc == 0x1c52b4u) { ctx->pc = 0x1c52b8u; }
}
