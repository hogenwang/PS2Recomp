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

// Function: sub_002A2340
// Address: 0x2a2340 - 0x2a23f0
void sub_002A2340_0x2a2340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A2340_0x2a2340");
#endif

    switch (ctx->pc) {
        case 0x2a2368u: goto label_2a2368;
        case 0x2a237cu: goto label_2a237c;
        case 0x2a23a0u: goto label_2a23a0;
        case 0x2a23b8u: goto label_2a23b8;
        default: break;
    }

    ctx->pc = 0x2a2340u;

    // 0x2a2340: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2a2340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2a2344: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2a2344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2a2348: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a2348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a234c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2a234cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2350: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2a2350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2a2354: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2a2354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2a2358: 0x1840000c  blez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2A2358u;
    {
        const bool branch_taken_0x2a2358 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2A235Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2358u;
        // 0x2a235c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2358) {
            ctx->pc = 0x2A238Cu;
            goto label_2a238c;
        }
    }
    ctx->pc = 0x2A2360u;
    // 0x2a2360: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x2a2360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2a2364: 0x0  nop
    ctx->pc = 0x2a2364u;
    // NOP
label_2a2368:
    // 0x2a2368: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x2a2368u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2a236c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2a236cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2a2370: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a2370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a2374: 0xc0a88a4  jal         func_2A2290
    ctx->pc = 0x2A2374u;
    SET_GPR_U32(ctx, 31, 0x2A237Cu);
    ctx->pc = 0x2A2378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2374u;
    // 0x2a2378: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2290u, 0x2A2374u, 0x2A237Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A237Cu;
label_2a237c:
    // 0x2a237c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2a237cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2a2380: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x2a2380u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2a2384: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2A2384u;
    {
        const bool branch_taken_0x2a2384 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a2384) {
            ctx->pc = 0x2A2388u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A2384u;
            // 0x2a2388: 0x8e23000c  lw          $v1, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A2368u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a2368;
        }
    }
    ctx->pc = 0x2A238Cu;
label_2a238c:
    // 0x2a238c: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x2a238cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2a2390: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A2390u;
    {
        const bool branch_taken_0x2a2390 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a2390) {
            ctx->pc = 0x2A2394u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A2390u;
            // 0x2a2394: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A23A8u;
            goto label_2a23a8;
        }
    }
    ctx->pc = 0x2A2398u;
    // 0x2a2398: 0xc0a8c0a  jal         func_2A3028
    ctx->pc = 0x2A2398u;
    SET_GPR_U32(ctx, 31, 0x2A23A0u);
    ctx->pc = 0x2A3028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3028u, 0x2A2398u, 0x2A23A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A23A0u;
label_2a23a0:
    // 0x2a23a0: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x2a23a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x2a23a4: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x2a23a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2a23a8:
    // 0x2a23a8: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A23A8u;
    {
        const bool branch_taken_0x2a23a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a23a8) {
            ctx->pc = 0x2A23ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A23A8u;
            // 0x2a23ac: 0x8e220014  lw          $v0, 0x14($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A23BCu;
            goto label_2a23bc;
        }
    }
    ctx->pc = 0x2A23B0u;
    // 0x2a23b0: 0xc0a8c0a  jal         func_2A3028
    ctx->pc = 0x2A23B0u;
    SET_GPR_U32(ctx, 31, 0x2A23B8u);
    ctx->pc = 0x2A3028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3028u, 0x2A23B0u, 0x2A23B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A23B8u;
label_2a23b8:
    // 0x2a23b8: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x2a23b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_2a23bc:
    // 0x2a23bc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2a23bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2a23c0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A23C0u;
    {
        const bool branch_taken_0x2a23c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A23C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A23C0u;
        // 0x2a23c4: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a23c0) {
            ctx->pc = 0x2A23DCu;
            goto label_2a23dc;
        }
    }
    ctx->pc = 0x2A23C8u;
    // 0x2a23c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a23c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a23cc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2a23ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a23d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a23d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a23d4: 0x80a8c0a  j           func_2A3028
    ctx->pc = 0x2A23D4u;
    ctx->pc = 0x2A23D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A23D4u;
    // 0x2a23d8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3028u;
    sub_002A3028_0x2a3028(rdram, ctx, runtime); return;
    ctx->pc = 0x2A23DCu;
label_2a23dc:
    // 0x2a23dc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2a23dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a23e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a23e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a23e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2A23E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A23E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A23E4u;
        // 0x2a23e8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A23E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A23ECu;
    // 0x2a23ec: 0x0  nop
    ctx->pc = 0x2a23ecu;
    // NOP
    if (ctx->pc == 0x2a23ecu) { ctx->pc = 0x2a23f0u; }
}
