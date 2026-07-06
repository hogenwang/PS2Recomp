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

// Function: sub_002D8FC0
// Address: 0x2d8fc0 - 0x2d9098
void sub_002D8FC0_0x2d8fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D8FC0_0x2d8fc0");
#endif

    switch (ctx->pc) {
        case 0x2d9020u: goto label_2d9020;
        case 0x2d9040u: goto label_2d9040;
        case 0x2d9050u: goto label_2d9050;
        case 0x2d9070u: goto label_2d9070;
        case 0x2d9078u: goto label_2d9078;
        case 0x2d9080u: goto label_2d9080;
        default: break;
    }

    ctx->pc = 0x2d8fc0u;

    // 0x2d8fc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d8fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2d8fc4: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x2d8fc4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8fc8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2d8fc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2d8fcc: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2d8fccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8fd0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2d8fd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2d8fd4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d8fd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8fd8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2d8fd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x2d8fdc: 0xb28826  xor         $s1, $a1, $s2
    ctx->pc = 0x2d8fdcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 18));
    // 0x2d8fe0: 0x30490001  andi        $t1, $v0, 0x1
    ctx->pc = 0x2d8fe0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2d8fe4: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2d8fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x2d8fe8: 0x27a70008  addiu       $a3, $sp, 0x8
    ctx->pc = 0x2d8fe8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x2d8fec: 0x27a60004  addiu       $a2, $sp, 0x4
    ctx->pc = 0x2d8fecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x2d8ff0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2d8ff0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8ff4: 0x2114023  subu        $t0, $s0, $s1
    ctx->pc = 0x2d8ff4u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x2d8ff8: 0x2603ffec  addiu       $v1, $s0, -0x14
    ctx->pc = 0x2d8ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967276));
    // 0x2d8ffc: 0x11200002  beqz        $t1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2D8FFCu;
    {
        const bool branch_taken_0x2d8ffc = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8FFCu;
        // 0x2d9000: 0x22042  srl         $a0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8ffc) {
            ctx->pc = 0x2D9008u;
            goto label_2d9008;
        }
    }
    ctx->pc = 0x2D9004u;
    // 0x2d9004: 0x2503ffec  addiu       $v1, $t0, -0x14
    ctx->pc = 0x2d9004u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967276));
label_2d9008:
    // 0x2d9008: 0x5520000f  bnel        $t1, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x2D9008u;
    {
        const bool branch_taken_0x2d9008 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d9008) {
            ctx->pc = 0x2D900Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D9008u;
            // 0x2d900c: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D9048u;
            goto label_2d9048;
        }
    }
    ctx->pc = 0x2D9010u;
    // 0x2d9010: 0xac630000  sw          $v1, 0x0($v1)
    ctx->pc = 0x2d9010u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 3));
    // 0x2d9014: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2d9014u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9018: 0xc0b6426  jal         func_2D9098
    ctx->pc = 0x2D9018u;
    SET_GPR_U32(ctx, 31, 0x2D9020u);
    ctx->pc = 0x2D901Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9018u;
    // 0x2d901c: 0x27a70008  addiu       $a3, $sp, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9098u, 0x2D9018u, 0x2D9020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9020u;
label_2d9020:
    // 0x2d9020: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d9020u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9024: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x2d9024u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d9028: 0x912821  addu        $a1, $a0, $s1
    ctx->pc = 0x2d9028u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x2d902c: 0x8fa80004  lw          $t0, 0x4($sp)
    ctx->pc = 0x2d902cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2d9030: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2d9030u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9034: 0x8fa90008  lw          $t1, 0x8($sp)
    ctx->pc = 0x2d9034u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d9038: 0xc0b6648  jal         func_2D9920
    ctx->pc = 0x2D9038u;
    SET_GPR_U32(ctx, 31, 0x2D9040u);
    ctx->pc = 0x2D903Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9038u;
    // 0x2d903c: 0x863023  subu        $a2, $a0, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9920u, 0x2D9038u, 0x2D9040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9040u;
label_2d9040:
    // 0x2d9040: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2D9040u;
    {
        const bool branch_taken_0x2d9040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d9040) {
            ctx->pc = 0x2D9070u;
            goto label_2d9070;
        }
    }
    ctx->pc = 0x2D9048u;
label_2d9048:
    // 0x2d9048: 0xc0b6426  jal         func_2D9098
    ctx->pc = 0x2D9048u;
    SET_GPR_U32(ctx, 31, 0x2D9050u);
    ctx->pc = 0x2D904Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9048u;
    // 0x2d904c: 0x27a60004  addiu       $a2, $sp, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9098u, 0x2D9048u, 0x2D9050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9050u;
label_2d9050:
    // 0x2d9050: 0x2112023  subu        $a0, $s0, $s1
    ctx->pc = 0x2d9050u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x2d9054: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x2d9054u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d9058: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2d9058u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d905c: 0x8fa80004  lw          $t0, 0x4($sp)
    ctx->pc = 0x2d905cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2d9060: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2d9060u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9064: 0x8fa90008  lw          $t1, 0x8($sp)
    ctx->pc = 0x2d9064u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d9068: 0xc0b647e  jal         func_2D91F8
    ctx->pc = 0x2D9068u;
    SET_GPR_U32(ctx, 31, 0x2D9070u);
    ctx->pc = 0x2D906Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9068u;
    // 0x2d906c: 0x863023  subu        $a2, $a0, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D91F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D91F8u, 0x2D9068u, 0x2D9070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9070u;
label_2d9070:
    // 0x2d9070: 0xc0433b8  jal         func_10CEE0
    ctx->pc = 0x2D9070u;
    SET_GPR_U32(ctx, 31, 0x2D9078u);
    ctx->pc = 0x2D9074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9070u;
    // 0x2d9074: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CEE0u, 0x2D9070u, 0x2D9078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9078u;
label_2d9078:
    // 0x2d9078: 0xc0433b8  jal         func_10CEE0
    ctx->pc = 0x2D9078u;
    SET_GPR_U32(ctx, 31, 0x2D9080u);
    ctx->pc = 0x2D907Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9078u;
    // 0x2d907c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CEE0u, 0x2D9078u, 0x2D9080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9080u;
label_2d9080:
    // 0x2d9080: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2d9080u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d9084: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2d9084u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d9088: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2d9088u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d908c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2d908cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d9090: 0x3e00008  jr          $ra
    ctx->pc = 0x2D9090u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D9094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9090u;
        // 0x2d9094: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D9090u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D9098u;
}
