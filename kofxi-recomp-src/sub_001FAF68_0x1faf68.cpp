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

// Function: sub_001FAF68
// Address: 0x1faf68 - 0x1fb008
void sub_001FAF68_0x1faf68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FAF68_0x1faf68");
#endif

    switch (ctx->pc) {
        case 0x1fafb0u: goto label_1fafb0;
        case 0x1fafe4u: goto label_1fafe4;
        default: break;
    }

    ctx->pc = 0x1faf68u;

    // 0x1faf68: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1faf68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1faf6c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1faf6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1faf70: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1faf70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1faf74: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1faf74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1faf78: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1faf78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1faf7c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1faf7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1faf80: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1faf80u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1faf84: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1faf84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1faf88: 0x16000007  bnez        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FAF88u;
    {
        const bool branch_taken_0x1faf88 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FAF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAF88u;
        // 0x1faf8c: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1faf88) {
            ctx->pc = 0x1FAFA8u;
            goto label_1fafa8;
        }
    }
    ctx->pc = 0x1FAF90u;
    // 0x1faf90: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x1faf90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x1faf94: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x1faf94u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x1faf98: 0x8c221540  lw          $v0, 0x1540($at)
    ctx->pc = 0x1faf98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 5440)));
    // 0x1faf9c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1FAF9Cu;
    {
        const bool branch_taken_0x1faf9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FAFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAF9Cu;
        // 0x1fafa0: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1faf9c) {
            ctx->pc = 0x1FAFE8u;
            goto label_1fafe8;
        }
    }
    ctx->pc = 0x1FAFA4u;
    // 0x1fafa4: 0x0  nop
    ctx->pc = 0x1fafa4u;
    // NOP
label_1fafa8:
    // 0x1fafa8: 0xc07b648  jal         func_1ED920
    ctx->pc = 0x1FAFA8u;
    SET_GPR_U32(ctx, 31, 0x1FAFB0u);
    ctx->pc = 0x1ED920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ED920u, 0x1FAFA8u, 0x1FAFB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FAFB0u;
label_1fafb0:
    // 0x1fafb0: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1fafb0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1fafb4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FAFB4u;
    {
        const bool branch_taken_0x1fafb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FAFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAFB4u;
        // 0x1fafb8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fafb4) {
            ctx->pc = 0x1FAFD8u;
            goto label_1fafd8;
        }
    }
    ctx->pc = 0x1FAFBCu;
    // 0x1fafbc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fafbcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fafc0: 0x34a50113  ori         $a1, $a1, 0x113
    ctx->pc = 0x1fafc0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)275);
    // 0x1fafc4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1fafc4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fafc8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1fafc8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fafcc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1fafccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1fafd0: 0x807b5c0  j           func_1ED700
    ctx->pc = 0x1FAFD0u;
    ctx->pc = 0x1FAFD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FAFD0u;
    // 0x1fafd4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED700u;
    sub_001ED700_0x1ed700(rdram, ctx, runtime); return;
    ctx->pc = 0x1FAFD8u;
label_1fafd8:
    // 0x1fafd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fafd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fafdc: 0xc07ec02  jal         func_1FB008
    ctx->pc = 0x1FAFDCu;
    SET_GPR_U32(ctx, 31, 0x1FAFE4u);
    ctx->pc = 0x1FAFE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FAFDCu;
    // 0x1fafe0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB008u, 0x1FAFDCu, 0x1FAFE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FAFE4u;
label_1fafe4:
    // 0x1fafe4: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x1fafe4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_1fafe8:
    // 0x1fafe8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fafe8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fafec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1fafecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1faff0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1faff0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1faff4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1faff4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1faff8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1faff8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1faffc: 0x3e00008  jr          $ra
    ctx->pc = 0x1FAFFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FB000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAFFCu;
        // 0x1fb000: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FAFFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FB004u;
    // 0x1fb004: 0x0  nop
    ctx->pc = 0x1fb004u;
    // NOP
}
