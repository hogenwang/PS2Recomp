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

// Function: sub_001E8FD0
// Address: 0x1e8fd0 - 0x1e9190
void sub_001E8FD0_0x1e8fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E8FD0_0x1e8fd0");
#endif

    switch (ctx->pc) {
        case 0x1e8ff0u: goto label_1e8ff0;
        case 0x1e9064u: goto label_1e9064;
        case 0x1e9078u: goto label_1e9078;
        case 0x1e9088u: goto label_1e9088;
        case 0x1e90c8u: goto label_1e90c8;
        case 0x1e9158u: goto label_1e9158;
        case 0x1e9164u: goto label_1e9164;
        case 0x1e916cu: goto label_1e916c;
        default: break;
    }

    ctx->pc = 0x1e8fd0u;

    // 0x1e8fd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e8fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e8fd4: 0x2405001b  addiu       $a1, $zero, 0x1B
    ctx->pc = 0x1e8fd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x1e8fd8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e8fd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e8fdc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1e8fdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1e8fe0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e8fe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e8fe4: 0x8c91205c  lw          $s1, 0x205C($a0)
    ctx->pc = 0x1e8fe4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8284)));
    // 0x1e8fe8: 0xc07ec02  jal         func_1FB008
    ctx->pc = 0x1E8FE8u;
    SET_GPR_U32(ctx, 31, 0x1E8FF0u);
    ctx->pc = 0x1E8FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8FE8u;
    // 0x1e8fec: 0x8e300000  lw          $s0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB008u, 0x1E8FE8u, 0x1E8FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8FF0u;
label_1e8ff0:
    // 0x1e8ff0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1e8ff0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8ff4: 0x8e220044  lw          $v0, 0x44($s1)
    ctx->pc = 0x1e8ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x1e8ff8: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1e8ff8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8ffc: 0x10430008  beq         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E8FFCu;
    {
        const bool branch_taken_0x1e8ffc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1E9000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8FFCu;
        // 0x1e9000: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8ffc) {
            ctx->pc = 0x1E9020u;
            goto label_1e9020;
        }
    }
    ctx->pc = 0x1E9004u;
    // 0x1e9004: 0xae230044  sw          $v1, 0x44($s1)
    ctx->pc = 0x1e9004u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 3));
    // 0x1e9008: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e9008u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e900c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e900cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e9010: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e9010u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e9014: 0x806e900  j           func_1BA400
    ctx->pc = 0x1E9014u;
    ctx->pc = 0x1E9018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9014u;
    // 0x1e9018: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BA400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BA400u, 0x1E9014u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1E901Cu;
    // 0x1e901c: 0x0  nop
    ctx->pc = 0x1e901cu;
    // NOP
label_1e9020:
    // 0x1e9020: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e9020u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e9024: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e9024u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e9028: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e9028u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e902c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E902Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E9030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E902Cu;
        // 0x1e9030: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E902Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E9034u;
    // 0x1e9034: 0x0  nop
    ctx->pc = 0x1e9034u;
    // NOP
    // 0x1e9038: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e9038u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e903c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1e903cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1e9040: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1e9040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1e9044: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e9044u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9048: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e9048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e904c: 0x26303608  addiu       $s0, $s1, 0x3608
    ctx->pc = 0x1e904cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 13832));
    // 0x1e9050: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1e9050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1e9054: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1e9054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1e9058: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e9058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1e905c: 0xc07ec02  jal         func_1FB008
    ctx->pc = 0x1E905Cu;
    SET_GPR_U32(ctx, 31, 0x1E9064u);
    ctx->pc = 0x1E9060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E905Cu;
    // 0x1e9060: 0x26333600  addiu       $s3, $s1, 0x3600 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 13824));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB008u, 0x1E905Cu, 0x1E9064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9064u;
label_1e9064:
    // 0x1e9064: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e9064u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9068: 0x10400041  beqz        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x1E9068u;
    {
        const bool branch_taken_0x1e9068 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E906Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9068u;
        // 0x1e906c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9068) {
            ctx->pc = 0x1E9170u;
            goto label_1e9170;
        }
    }
    ctx->pc = 0x1E9070u;
    // 0x1e9070: 0xc07a464  jal         func_1E9190
    ctx->pc = 0x1E9070u;
    SET_GPR_U32(ctx, 31, 0x1E9078u);
    ctx->pc = 0x1E9074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9070u;
    // 0x1e9074: 0xae33205c  sw          $s3, 0x205C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 8284), GPR_U32(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9190u, 0x1E9070u, 0x1E9078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9078u;
label_1e9078:
    // 0x1e9078: 0x1440003d  bnez        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x1E9078u;
    {
        const bool branch_taken_0x1e9078 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E907Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9078u;
        // 0x1e907c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9078) {
            ctx->pc = 0x1E9170u;
            goto label_1e9170;
        }
    }
    ctx->pc = 0x1E9080u;
    // 0x1e9080: 0xc07a4d2  jal         func_1E9348
    ctx->pc = 0x1E9080u;
    SET_GPR_U32(ctx, 31, 0x1E9088u);
    ctx->pc = 0x1E9348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9348u, 0x1E9080u, 0x1E9088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9088u;
label_1e9088:
    // 0x1e9088: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1e9088u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1e908c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1e908cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9090: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1e9090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9094: 0x16400008  bnez        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E9094u;
    {
        const bool branch_taken_0x1e9094 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E9098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9094u;
        // 0x1e9098: 0x34a50c04  ori         $a1, $a1, 0xC04 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3076);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9094) {
            ctx->pc = 0x1E90B8u;
            goto label_1e90b8;
        }
    }
    ctx->pc = 0x1E909Cu;
    // 0x1e909c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e909cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e90a0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e90a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e90a4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1e90a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e90a8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1e90a8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1e90ac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e90acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e90b0: 0x807b5c0  j           func_1ED700
    ctx->pc = 0x1E90B0u;
    ctx->pc = 0x1E90B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E90B0u;
    // 0x1e90b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED700u;
    sub_001ED700_0x1ed700(rdram, ctx, runtime); return;
    ctx->pc = 0x1E90B8u;
label_1e90b8:
    // 0x1e90b8: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x1e90b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1e90bc: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x1e90bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1e90c0: 0xc072cec  jal         func_1CB3B0
    ctx->pc = 0x1E90C0u;
    SET_GPR_U32(ctx, 31, 0x1E90C8u);
    ctx->pc = 0x1E90C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E90C0u;
    // 0x1e90c4: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB3B0u, 0x1E90C0u, 0x1E90C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E90C8u;
label_1e90c8:
    // 0x1e90c8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1e90c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e90cc: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x1e90ccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e90d0: 0x3c02001e  lui         $v0, 0x1E
    ctx->pc = 0x1e90d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30 << 16));
    // 0x1e90d4: 0x3c05001e  lui         $a1, 0x1E
    ctx->pc = 0x1e90d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)30 << 16));
    // 0x1e90d8: 0x3c03001e  lui         $v1, 0x1E
    ctx->pc = 0x1e90d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)30 << 16));
    // 0x1e90dc: 0x3c06001e  lui         $a2, 0x1E
    ctx->pc = 0x1e90dcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)30 << 16));
    // 0x1e90e0: 0x3c07001f  lui         $a3, 0x1F
    ctx->pc = 0x1e90e0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)31 << 16));
    // 0x1e90e4: 0x24ab7fc0  addiu       $t3, $a1, 0x7FC0
    ctx->pc = 0x1e90e4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 5), 32704));
    // 0x1e90e8: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x1e90e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e90ec: 0x262836b4  addiu       $t0, $s1, 0x36B4
    ctx->pc = 0x1e90ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 14004));
    // 0x1e90f0: 0x244a7f80  addiu       $t2, $v0, 0x7F80
    ctx->pc = 0x1e90f0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 32640));
    // 0x1e90f4: 0x24637fa0  addiu       $v1, $v1, 0x7FA0
    ctx->pc = 0x1e90f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32672));
    // 0x1e90f8: 0x24c67fe0  addiu       $a2, $a2, 0x7FE0
    ctx->pc = 0x1e90f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32736));
    // 0x1e90fc: 0x1520000a  bnez        $t1, . + 4 + (0xA << 2)
    ctx->pc = 0x1E90FCu;
    {
        const bool branch_taken_0x1e90fc = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E9100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E90FCu;
        // 0x1e9100: 0x24e78000  addiu       $a3, $a3, -0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294934528));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e90fc) {
            ctx->pc = 0x1E9128u;
            goto label_1e9128;
        }
    }
    ctx->pc = 0x1E9104u;
    // 0x1e9104: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1e9104u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1e9108: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e9108u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e910c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e910cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e9110: 0x34a50c05  ori         $a1, $a1, 0xC05
    ctx->pc = 0x1e9110u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3077);
    // 0x1e9114: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1e9114u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e9118: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1e9118u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1e911c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e911cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e9120: 0x807b5c0  j           func_1ED700
    ctx->pc = 0x1E9120u;
    ctx->pc = 0x1E9124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9120u;
    // 0x1e9124: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED700u;
    sub_001ED700_0x1ed700(rdram, ctx, runtime); return;
    ctx->pc = 0x1E9128u;
label_1e9128:
    // 0x1e9128: 0xae690004  sw          $t1, 0x4($s3)
    ctx->pc = 0x1e9128u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 9));
    // 0x1e912c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1e912cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9130: 0xae720000  sw          $s2, 0x0($s3)
    ctx->pc = 0x1e9130u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 18));
    // 0x1e9134: 0xae28216c  sw          $t0, 0x216C($s1)
    ctx->pc = 0x1e9134u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8556), GPR_U32(ctx, 8));
    // 0x1e9138: 0xad070014  sw          $a3, 0x14($t0)
    ctx->pc = 0x1e9138u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 20), GPR_U32(ctx, 7));
    // 0x1e913c: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x1e913cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1e9140: 0xad0a0004  sw          $t2, 0x4($t0)
    ctx->pc = 0x1e9140u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 10));
    // 0x1e9144: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x1e9144u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x1e9148: 0xad030008  sw          $v1, 0x8($t0)
    ctx->pc = 0x1e9148u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 3));
    // 0x1e914c: 0xad0b000c  sw          $t3, 0xC($t0)
    ctx->pc = 0x1e914cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 11));
    // 0x1e9150: 0xc06e43a  jal         func_1B90E8
    ctx->pc = 0x1E9150u;
    SET_GPR_U32(ctx, 31, 0x1E9158u);
    ctx->pc = 0x1E9154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9150u;
    // 0x1e9154: 0xad060010  sw          $a2, 0x10($t0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B90E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B90E8u, 0x1E9150u, 0x1E9158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9158u;
label_1e9158:
    // 0x1e9158: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e9158u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e915c: 0xc07a5ee  jal         func_1E97B8
    ctx->pc = 0x1E915Cu;
    SET_GPR_U32(ctx, 31, 0x1E9164u);
    ctx->pc = 0x1E9160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E915Cu;
    // 0x1e9160: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E97B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E97B8u, 0x1E915Cu, 0x1E9164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9164u;
label_1e9164:
    // 0x1e9164: 0xc07a4f2  jal         func_1E93C8
    ctx->pc = 0x1E9164u;
    SET_GPR_U32(ctx, 31, 0x1E916Cu);
    ctx->pc = 0x1E9168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9164u;
    // 0x1e9168: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E93C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E93C8u, 0x1E9164u, 0x1E916Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E916Cu;
label_1e916c:
    // 0x1e916c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1e916cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e9170:
    // 0x1e9170: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e9170u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e9174: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e9174u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e9178: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1e9178u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e917c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1e917cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1e9180: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e9180u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e9184: 0x3e00008  jr          $ra
    ctx->pc = 0x1E9184u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E9188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9184u;
        // 0x1e9188: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E9184u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E918Cu;
    // 0x1e918c: 0x0  nop
    ctx->pc = 0x1e918cu;
    // NOP
    if (ctx->pc == 0x1e918cu) { ctx->pc = 0x1e9190u; }
}
