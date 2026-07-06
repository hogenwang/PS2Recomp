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

// Function: sub_00237028
// Address: 0x237028 - 0x237118
void sub_00237028_0x237028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00237028_0x237028");
#endif

    switch (ctx->pc) {
        case 0x23705cu: goto label_23705c;
        case 0x237074u: goto label_237074;
        case 0x2370e0u: goto label_2370e0;
        case 0x2370f8u: goto label_2370f8;
        default: break;
    }

    ctx->pc = 0x237028u;

label_237028:
    // 0x237028: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x237028u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x23702c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x23702cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x237030: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x237030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x237034: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x237034u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237038: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x237038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x23703c: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x23703cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237040: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x237040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x237044: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x237044u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237048: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x237048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23704c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x23704cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237050: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x237050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x237054: 0xc098552  jal         func_261548
    ctx->pc = 0x237054u;
    SET_GPR_U32(ctx, 31, 0x23705Cu);
    ctx->pc = 0x237058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237054u;
    // 0x237058: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261548u, 0x237054u, 0x23705Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23705Cu;
label_23705c:
    // 0x23705c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x23705cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237060: 0x56000005  bnel        $s0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x237060u;
    {
        const bool branch_taken_0x237060 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x237060) {
            ctx->pc = 0x237064u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x237060u;
            // 0x237064: 0xae120008  sw          $s2, 0x8($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x237078u;
            goto label_237078;
        }
    }
    ctx->pc = 0x237068u;
    // 0x237068: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x237068u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x23706c: 0xc08b5e0  jal         func_22D780
    ctx->pc = 0x23706Cu;
    SET_GPR_U32(ctx, 31, 0x237074u);
    ctx->pc = 0x237070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23706Cu;
    // 0x237070: 0x24844bc8  addiu       $a0, $a0, 0x4BC8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D780u, 0x23706Cu, 0x237074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237074u;
label_237074:
    // 0x237074: 0xae120008  sw          $s2, 0x8($s0)
    ctx->pc = 0x237074u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 18));
label_237078:
    // 0x237078: 0xae13000c  sw          $s3, 0xC($s0)
    ctx->pc = 0x237078u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 19));
    // 0x23707c: 0xae140010  sw          $s4, 0x10($s0)
    ctx->pc = 0x23707cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 20));
    // 0x237080: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x237080u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x237084: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x237084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x237088: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x237088u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x23708c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x23708cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x237090: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x237090u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x237094: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x237094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x237098: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x237098u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23709c: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x23709cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x2370a0: 0xae300010  sw          $s0, 0x10($s1)
    ctx->pc = 0x2370a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 16));
    // 0x2370a4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2370a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2370a8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2370a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2370ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2370acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2370b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2370B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2370B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2370B0u;
        // 0x2370b4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2370B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2370B8u;
    // 0x2370b8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2370b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2370bc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2370bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2370c0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2370c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2370c4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2370c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2370c8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2370c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2370cc: 0x18c0000c  blez        $a2, . + 4 + (0xC << 2)
    ctx->pc = 0x2370CCu;
    {
        const bool branch_taken_0x2370cc = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x2370D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2370CCu;
        // 0x2370d0: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2370cc) {
            ctx->pc = 0x237100u;
            goto label_237100;
        }
    }
    ctx->pc = 0x2370D4u;
    // 0x2370d4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2370d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2370d8: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2370d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2370dc: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x2370dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2370e0:
    // 0x2370e0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2370e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2370e4: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x2370e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2370e8: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x2370e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x2370ec: 0x8e070010  lw          $a3, 0x10($s0)
    ctx->pc = 0x2370ecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2370f0: 0xc08dc0a  jal         func_237028
    ctx->pc = 0x2370F0u;
    SET_GPR_U32(ctx, 31, 0x2370F8u);
    ctx->pc = 0x2370F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2370F0u;
    // 0x2370f4: 0x26100014  addiu       $s0, $s0, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237028u;
    goto label_237028;
    ctx->pc = 0x2370F8u;
label_2370f8:
    // 0x2370f8: 0x5620fff9  bnel        $s1, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2370F8u;
    {
        const bool branch_taken_0x2370f8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2370f8) {
            ctx->pc = 0x2370FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2370F8u;
            // 0x2370fc: 0x8e050008  lw          $a1, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2370E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2370e0;
        }
    }
    ctx->pc = 0x237100u;
label_237100:
    // 0x237100: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x237100u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x237104: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x237104u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x237108: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x237108u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23710c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23710cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x237110: 0x3e00008  jr          $ra
    ctx->pc = 0x237110u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x237114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237110u;
        // 0x237114: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x237110u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x237118u;
}
