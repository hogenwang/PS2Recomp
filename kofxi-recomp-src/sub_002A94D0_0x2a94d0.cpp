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

// Function: sub_002A94D0
// Address: 0x2a94d0 - 0x2a9550
void sub_002A94D0_0x2a94d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A94D0_0x2a94d0");
#endif

    switch (ctx->pc) {
        case 0x2a9504u: goto label_2a9504;
        case 0x2a952cu: goto label_2a952c;
        default: break;
    }

    ctx->pc = 0x2a94d0u;

    // 0x2a94d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2a94d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2a94d4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2a94d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a94d8: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2a94d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2a94dc: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2a94dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a94e0: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x2a94e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2a94e4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2a94e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a94e8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2a94e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2a94ec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2a94ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a94f0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2a94f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2a94f4: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x2a94f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2a94f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a94f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a94fc: 0xc0a87b0  jal         func_2A1EC0
    ctx->pc = 0x2A94FCu;
    SET_GPR_U32(ctx, 31, 0x2A9504u);
    ctx->pc = 0x2A9500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A94FCu;
    // 0x2a9500: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A1EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A1EC0u, 0x2A94FCu, 0x2A9504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9504u;
label_2a9504:
    // 0x2a9504: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2A9504u;
    {
        const bool branch_taken_0x2a9504 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A9508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9504u;
        // 0x2a9508: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9504) {
            ctx->pc = 0x2A9538u;
            goto label_2a9538;
        }
    }
    ctx->pc = 0x2A950Cu;
    // 0x2a950c: 0xdfa70000  ld          $a3, 0x0($sp)
    ctx->pc = 0x2a950cu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a9510: 0x7803c  dsll32      $s0, $a3, 0
    ctx->pc = 0x2a9510u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 7) << (32 + 0));
    // 0x2a9514: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x2a9514u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x2a9518: 0x12400006  beqz        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A9518u;
    {
        const bool branch_taken_0x2a9518 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A951Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9518u;
        // 0x2a951c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9518) {
            ctx->pc = 0x2A9534u;
            goto label_2a9534;
        }
    }
    ctx->pc = 0x2A9520u;
    // 0x2a9520: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x2a9520u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2a9524: 0xc0a87b0  jal         func_2A1EC0
    ctx->pc = 0x2A9524u;
    SET_GPR_U32(ctx, 31, 0x2A952Cu);
    ctx->pc = 0x2A9528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9524u;
    // 0x2a9528: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A1EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A1EC0u, 0x2A9524u, 0x2A952Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A952Cu;
label_2a952c:
    // 0x2a952c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2a952cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2a9530: 0x62800b  movn        $s0, $v1, $v0
    ctx->pc = 0x2a9530u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
label_2a9534:
    // 0x2a9534: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2a9534u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a9538:
    // 0x2a9538: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2a9538u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a953c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2a953cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a9540: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2a9540u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a9544: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2a9544u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a9548: 0x3e00008  jr          $ra
    ctx->pc = 0x2A9548u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A954Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9548u;
        // 0x2a954c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A9548u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A9550u;
}
