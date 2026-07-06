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

// Function: sub_0029A510
// Address: 0x29a510 - 0x29a578
void sub_0029A510_0x29a510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029A510_0x29a510");
#endif

    switch (ctx->pc) {
        case 0x29a53cu: goto label_29a53c;
        case 0x29a54cu: goto label_29a54c;
        case 0x29a55cu: goto label_29a55c;
        case 0x29a564u: goto label_29a564;
        default: break;
    }

    ctx->pc = 0x29a510u;

    // 0x29a510: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29a510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x29a514: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29a514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29a518: 0x3c10003b  lui         $s0, 0x3B
    ctx->pc = 0x29a518u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)59 << 16));
    // 0x29a51c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x29a51cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x29a520: 0x8e0267e8  lw          $v0, 0x67E8($s0)
    ctx->pc = 0x29a520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26600)));
    // 0x29a524: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x29A524u;
    {
        const bool branch_taken_0x29a524 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29A528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A524u;
        // 0x29a528: 0x3c05002a  lui         $a1, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a524) {
            ctx->pc = 0x29A568u;
            goto label_29a568;
        }
    }
    ctx->pc = 0x29A52Cu;
    // 0x29a52c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x29a52cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a530: 0x24a5a498  addiu       $a1, $a1, -0x5B68
    ctx->pc = 0x29a530u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943896));
    // 0x29a534: 0xc0a625c  jal         func_298970
    ctx->pc = 0x29A534u;
    SET_GPR_U32(ctx, 31, 0x29A53Cu);
    ctx->pc = 0x29A538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A534u;
    // 0x29a538: 0xfc400028  sd          $zero, 0x28($v0) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 2), 40), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x298970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x298970u, 0x29A534u, 0x29A53Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A53Cu;
label_29a53c:
    // 0x29a53c: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x29a53cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x29a540: 0x8e0467e8  lw          $a0, 0x67E8($s0)
    ctx->pc = 0x29a540u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26600)));
    // 0x29a544: 0xc0a625c  jal         func_298970
    ctx->pc = 0x29A544u;
    SET_GPR_U32(ctx, 31, 0x29A54Cu);
    ctx->pc = 0x29A548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A544u;
    // 0x29a548: 0x24a5a4b8  addiu       $a1, $a1, -0x5B48 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943928));
    ctx->in_delay_slot = false;
    ctx->pc = 0x298970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x298970u, 0x29A544u, 0x29A54Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A54Cu;
label_29a54c:
    // 0x29a54c: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x29a54cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x29a550: 0x8e0467e8  lw          $a0, 0x67E8($s0)
    ctx->pc = 0x29a550u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26600)));
    // 0x29a554: 0xc0a625c  jal         func_298970
    ctx->pc = 0x29A554u;
    SET_GPR_U32(ctx, 31, 0x29A55Cu);
    ctx->pc = 0x29A558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A554u;
    // 0x29a558: 0x24a5a4d0  addiu       $a1, $a1, -0x5B30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x298970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x298970u, 0x29A554u, 0x29A55Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A55Cu;
label_29a55c:
    // 0x29a55c: 0xc0a61ba  jal         func_2986E8
    ctx->pc = 0x29A55Cu;
    SET_GPR_U32(ctx, 31, 0x29A564u);
    ctx->pc = 0x29A560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A55Cu;
    // 0x29a560: 0x8e0467e8  lw          $a0, 0x67E8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26600)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2986E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2986E8u, 0x29A55Cu, 0x29A564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A564u;
label_29a564:
    // 0x29a564: 0xae0067e8  sw          $zero, 0x67E8($s0)
    ctx->pc = 0x29a564u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 26600), GPR_U32(ctx, 0));
label_29a568:
    // 0x29a568: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x29a568u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29a56c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29a56cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29a570: 0x3e00008  jr          $ra
    ctx->pc = 0x29A570u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29A574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A570u;
        // 0x29a574: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29A570u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29A578u;
}
