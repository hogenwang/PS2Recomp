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

// Function: sub_001156E8
// Address: 0x1156e8 - 0x115778
void sub_001156E8_0x1156e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001156E8_0x1156e8");
#endif

    switch (ctx->pc) {
        case 0x115724u: goto label_115724;
        case 0x11573cu: goto label_11573c;
        case 0x115750u: goto label_115750;
        default: break;
    }

    ctx->pc = 0x1156e8u;

    // 0x1156e8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1156e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1156ec: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x1156ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x1156f0: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1156f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1156f4: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x1156f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x1156f8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1156f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1156fc: 0x2453868c  addiu       $s3, $v0, -0x7974
    ctx->pc = 0x1156fcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936204));
    // 0x115700: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x115700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x115704: 0x24719e68  addiu       $s1, $v1, -0x6198
    ctx->pc = 0x115704u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942312));
    // 0x115708: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x115708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x11570c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x11570cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115710: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x115710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x115714: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x115714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115718: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x115718u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11571c: 0xc049c22  jal         func_127088
    ctx->pc = 0x11571Cu;
    SET_GPR_U32(ctx, 31, 0x115724u);
    ctx->pc = 0x115720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11571Cu;
    // 0x115720: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127088u, 0x11571Cu, 0x115724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115724u;
label_115724:
    // 0x115724: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x115724u;
    {
        const bool branch_taken_0x115724 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x115728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115724u;
        // 0x115728: 0x3c100036  lui         $s0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115724) {
            ctx->pc = 0x115754u;
            goto label_115754;
        }
    }
    ctx->pc = 0x11572Cu;
    // 0x11572c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11572cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115730: 0x8e058764  lw          $a1, -0x789C($s0)
    ctx->pc = 0x115730u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294936420)));
    // 0x115734: 0xc049c22  jal         func_127088
    ctx->pc = 0x115734u;
    SET_GPR_U32(ctx, 31, 0x11573Cu);
    ctx->pc = 0x115738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115734u;
    // 0x115738: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127088u, 0x115734u, 0x11573Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11573Cu;
label_11573c:
    // 0x11573c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11573Cu;
    {
        const bool branch_taken_0x11573c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x115740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11573Cu;
        // 0x115740: 0x8e058764  lw          $a1, -0x789C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294936420)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11573c) {
            ctx->pc = 0x115754u;
            goto label_115754;
        }
    }
    ctx->pc = 0x115744u;
    // 0x115744: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x115744u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115748: 0xc049c22  jal         func_127088
    ctx->pc = 0x115748u;
    SET_GPR_U32(ctx, 31, 0x115750u);
    ctx->pc = 0x11574Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115748u;
    // 0x11574c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127088u, 0x115748u, 0x115750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115750u;
label_115750:
    // 0x115750: 0x2902b  sltu        $s2, $zero, $v0
    ctx->pc = 0x115750u;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_115754:
    // 0x115754: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x115754u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115758: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x115758u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11575c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x11575cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x115760: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x115760u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x115764: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x115764u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x115768: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x115768u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11576c: 0x3e00008  jr          $ra
    ctx->pc = 0x11576Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x115770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11576Cu;
        // 0x115770: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11576Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x115774u;
    // 0x115774: 0x0  nop
    ctx->pc = 0x115774u;
    // NOP
}
