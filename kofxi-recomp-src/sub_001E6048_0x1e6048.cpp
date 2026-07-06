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

// Function: sub_001E6048
// Address: 0x1e6048 - 0x1e6128
void sub_001E6048_0x1e6048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E6048_0x1e6048");
#endif

    switch (ctx->pc) {
        case 0x1e6048u: goto label_1e6048;
        case 0x1e604cu: goto label_1e604c;
        case 0x1e6050u: goto label_1e6050;
        case 0x1e6054u: goto label_1e6054;
        case 0x1e6058u: goto label_1e6058;
        case 0x1e605cu: goto label_1e605c;
        case 0x1e6060u: goto label_1e6060;
        case 0x1e6064u: goto label_1e6064;
        case 0x1e6068u: goto label_1e6068;
        case 0x1e606cu: goto label_1e606c;
        case 0x1e6070u: goto label_1e6070;
        case 0x1e6074u: goto label_1e6074;
        case 0x1e6078u: goto label_1e6078;
        case 0x1e607cu: goto label_1e607c;
        case 0x1e6080u: goto label_1e6080;
        case 0x1e6084u: goto label_1e6084;
        case 0x1e6088u: goto label_1e6088;
        case 0x1e608cu: goto label_1e608c;
        case 0x1e6090u: goto label_1e6090;
        case 0x1e6094u: goto label_1e6094;
        case 0x1e6098u: goto label_1e6098;
        case 0x1e609cu: goto label_1e609c;
        case 0x1e60a0u: goto label_1e60a0;
        case 0x1e60a4u: goto label_1e60a4;
        case 0x1e60a8u: goto label_1e60a8;
        case 0x1e60acu: goto label_1e60ac;
        case 0x1e60b0u: goto label_1e60b0;
        case 0x1e60b4u: goto label_1e60b4;
        case 0x1e60b8u: goto label_1e60b8;
        case 0x1e60bcu: goto label_1e60bc;
        case 0x1e60c0u: goto label_1e60c0;
        case 0x1e60c4u: goto label_1e60c4;
        case 0x1e60c8u: goto label_1e60c8;
        case 0x1e60ccu: goto label_1e60cc;
        case 0x1e60d0u: goto label_1e60d0;
        case 0x1e60d4u: goto label_1e60d4;
        case 0x1e60d8u: goto label_1e60d8;
        case 0x1e60dcu: goto label_1e60dc;
        case 0x1e60e0u: goto label_1e60e0;
        case 0x1e60e4u: goto label_1e60e4;
        case 0x1e60e8u: goto label_1e60e8;
        case 0x1e60ecu: goto label_1e60ec;
        case 0x1e60f0u: goto label_1e60f0;
        case 0x1e60f4u: goto label_1e60f4;
        case 0x1e60f8u: goto label_1e60f8;
        case 0x1e60fcu: goto label_1e60fc;
        case 0x1e6100u: goto label_1e6100;
        case 0x1e6104u: goto label_1e6104;
        case 0x1e6108u: goto label_1e6108;
        case 0x1e610cu: goto label_1e610c;
        case 0x1e6110u: goto label_1e6110;
        case 0x1e6114u: goto label_1e6114;
        case 0x1e6118u: goto label_1e6118;
        case 0x1e611cu: goto label_1e611c;
        case 0x1e6120u: goto label_1e6120;
        case 0x1e6124u: goto label_1e6124;
        default: break;
    }

    ctx->pc = 0x1e6048u;

label_1e6048:
    // 0x1e6048: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e6048u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1e604c:
    // 0x1e604c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e604cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1e6050:
    // 0x1e6050: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1e6050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1e6054:
    // 0x1e6054: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e6054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1e6058:
    // 0x1e6058: 0xc0799f6  jal         func_1E67D8
label_1e605c:
    if (ctx->pc == 0x1E605Cu) {
        ctx->pc = 0x1E605Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6058u;
        // 0x1e605c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6060u;
        goto label_1e6060;
    }
    ctx->pc = 0x1E6058u;
    SET_GPR_U32(ctx, 31, 0x1E6060u);
    ctx->pc = 0x1E605Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6058u;
    // 0x1e605c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E67D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E67D8u, 0x1E6058u, 0x1E6060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6060u;
label_1e6060:
    // 0x1e6060: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e6060u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e6064:
    // 0x1e6064: 0xc0799fc  jal         func_1E67F0
label_1e6068:
    if (ctx->pc == 0x1E6068u) {
        ctx->pc = 0x1E6068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6064u;
        // 0x1e6068: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E606Cu;
        goto label_1e606c;
    }
    ctx->pc = 0x1E6064u;
    SET_GPR_U32(ctx, 31, 0x1E606Cu);
    ctx->pc = 0x1E6068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6064u;
    // 0x1e6068: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E67F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E67F0u, 0x1E6064u, 0x1E606Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E606Cu;
label_1e606c:
    // 0x1e606c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1e606cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e6070:
    // 0x1e6070: 0x5060000d  beql        $v1, $zero, . + 4 + (0xD << 2)
label_1e6074:
    if (ctx->pc == 0x1E6074u) {
        ctx->pc = 0x1E6074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6070u;
        // 0x1e6074: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6078u;
        goto label_1e6078;
    }
    ctx->pc = 0x1E6070u;
    {
        const bool branch_taken_0x1e6070 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e6070) {
            ctx->pc = 0x1E6074u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E6070u;
            // 0x1e6074: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E60A8u;
            goto label_1e60a8;
        }
    }
    ctx->pc = 0x1E6078u;
label_1e6078:
    // 0x1e6078: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1e6078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1e607c:
    // 0x1e607c: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_1e6080:
    if (ctx->pc == 0x1E6080u) {
        ctx->pc = 0x1E6080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E607Cu;
        // 0x1e6080: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6084u;
        goto label_1e6084;
    }
    ctx->pc = 0x1E607Cu;
    {
        const bool branch_taken_0x1e607c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e607c) {
            ctx->pc = 0x1E6080u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E607Cu;
            // 0x1e6080: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E60A8u;
            goto label_1e60a8;
        }
    }
    ctx->pc = 0x1E6084u;
label_1e6084:
    // 0x1e6084: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1e6084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1e6088:
    // 0x1e6088: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
label_1e608c:
    if (ctx->pc == 0x1E608Cu) {
        ctx->pc = 0x1E608Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6088u;
        // 0x1e608c: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6090u;
        goto label_1e6090;
    }
    ctx->pc = 0x1E6088u;
    {
        const bool branch_taken_0x1e6088 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e6088) {
            ctx->pc = 0x1E608Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E6088u;
            // 0x1e608c: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E60A0u;
            goto label_1e60a0;
        }
    }
    ctx->pc = 0x1E6090u;
label_1e6090:
    // 0x1e6090: 0x60f809  jalr        $v1
label_1e6094:
    if (ctx->pc == 0x1E6094u) {
        ctx->pc = 0x1E6098u;
        goto label_1e6098;
    }
    ctx->pc = 0x1E6090u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1E6098u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E6090u, 0x1E6098u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E6098u;
label_1e6098:
    // 0x1e6098: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1e6098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1e609c:
    // 0x1e609c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e609cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1e60a0:
    // 0x1e60a0: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x1e60a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_1e60a4:
    // 0x1e60a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e60a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e60a8:
    // 0x1e60a8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e60a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1e60ac:
    // 0x1e60ac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e60acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1e60b0:
    // 0x1e60b0: 0x3e00008  jr          $ra
label_1e60b4:
    if (ctx->pc == 0x1E60B4u) {
        ctx->pc = 0x1E60B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E60B0u;
        // 0x1e60b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E60B8u;
        goto label_1e60b8;
    }
    ctx->pc = 0x1E60B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E60B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E60B0u;
        // 0x1e60b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E60B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E60B8u;
label_1e60b8:
    // 0x1e60b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e60b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1e60bc:
    // 0x1e60bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e60bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1e60c0:
    // 0x1e60c0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1e60c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1e60c4:
    // 0x1e60c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e60c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1e60c8:
    // 0x1e60c8: 0xc0799f6  jal         func_1E67D8
label_1e60cc:
    if (ctx->pc == 0x1E60CCu) {
        ctx->pc = 0x1E60CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E60C8u;
        // 0x1e60cc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E60D0u;
        goto label_1e60d0;
    }
    ctx->pc = 0x1E60C8u;
    SET_GPR_U32(ctx, 31, 0x1E60D0u);
    ctx->pc = 0x1E60CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E60C8u;
    // 0x1e60cc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E67D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E67D8u, 0x1E60C8u, 0x1E60D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E60D0u;
label_1e60d0:
    // 0x1e60d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e60d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e60d4:
    // 0x1e60d4: 0xc0799fc  jal         func_1E67F0
label_1e60d8:
    if (ctx->pc == 0x1E60D8u) {
        ctx->pc = 0x1E60D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E60D4u;
        // 0x1e60d8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E60DCu;
        goto label_1e60dc;
    }
    ctx->pc = 0x1E60D4u;
    SET_GPR_U32(ctx, 31, 0x1E60DCu);
    ctx->pc = 0x1E60D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E60D4u;
    // 0x1e60d8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E67F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E67F0u, 0x1E60D4u, 0x1E60DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E60DCu;
label_1e60dc:
    // 0x1e60dc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e60dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e60e0:
    // 0x1e60e0: 0x5080000c  beql        $a0, $zero, . + 4 + (0xC << 2)
label_1e60e4:
    if (ctx->pc == 0x1E60E4u) {
        ctx->pc = 0x1E60E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E60E0u;
        // 0x1e60e4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E60E8u;
        goto label_1e60e8;
    }
    ctx->pc = 0x1E60E0u;
    {
        const bool branch_taken_0x1e60e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e60e0) {
            ctx->pc = 0x1E60E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E60E0u;
            // 0x1e60e4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E6114u;
            goto label_1e6114;
        }
    }
    ctx->pc = 0x1E60E8u;
label_1e60e8:
    // 0x1e60e8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1e60e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1e60ec:
    // 0x1e60ec: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1e60f0:
    if (ctx->pc == 0x1E60F0u) {
        ctx->pc = 0x1E60F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E60ECu;
        // 0x1e60f0: 0x2443ffff  addiu       $v1, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E60F4u;
        goto label_1e60f4;
    }
    ctx->pc = 0x1E60ECu;
    {
        const bool branch_taken_0x1e60ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E60F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E60ECu;
        // 0x1e60f0: 0x2443ffff  addiu       $v1, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e60ec) {
            ctx->pc = 0x1E6110u;
            goto label_1e6110;
        }
    }
    ctx->pc = 0x1E60F4u;
label_1e60f4:
    // 0x1e60f4: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_1e60f8:
    if (ctx->pc == 0x1E60F8u) {
        ctx->pc = 0x1E60F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E60F4u;
        // 0x1e60f8: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E60FCu;
        goto label_1e60fc;
    }
    ctx->pc = 0x1E60F4u;
    {
        const bool branch_taken_0x1e60f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E60F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E60F4u;
        // 0x1e60f8: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e60f4) {
            ctx->pc = 0x1E6110u;
            goto label_1e6110;
        }
    }
    ctx->pc = 0x1E60FCu;
label_1e60fc:
    // 0x1e60fc: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1e60fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1e6100:
    // 0x1e6100: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_1e6104:
    if (ctx->pc == 0x1E6104u) {
        ctx->pc = 0x1E6104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6100u;
        // 0x1e6104: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6108u;
        goto label_1e6108;
    }
    ctx->pc = 0x1E6100u;
    {
        const bool branch_taken_0x1e6100 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e6100) {
            ctx->pc = 0x1E6104u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E6100u;
            // 0x1e6104: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E6114u;
            goto label_1e6114;
        }
    }
    ctx->pc = 0x1E6108u;
label_1e6108:
    // 0x1e6108: 0x40f809  jalr        $v0
label_1e610c:
    if (ctx->pc == 0x1E610Cu) {
        ctx->pc = 0x1E6110u;
        goto label_1e6110;
    }
    ctx->pc = 0x1E6108u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E6110u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E6108u, 0x1E6110u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E6110u;
label_1e6110:
    // 0x1e6110: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e6110u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e6114:
    // 0x1e6114: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e6114u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1e6118:
    // 0x1e6118: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e6118u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1e611c:
    // 0x1e611c: 0x3e00008  jr          $ra
label_1e6120:
    if (ctx->pc == 0x1E6120u) {
        ctx->pc = 0x1E6120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E611Cu;
        // 0x1e6120: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6124u;
        goto label_1e6124;
    }
    ctx->pc = 0x1E611Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E6120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E611Cu;
        // 0x1e6120: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E611Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E6124u;
label_1e6124:
    // 0x1e6124: 0x0  nop
    ctx->pc = 0x1e6124u;
    // NOP
    if (ctx->pc == 0x1e6124u) { ctx->pc = 0x1e6128u; }
}
