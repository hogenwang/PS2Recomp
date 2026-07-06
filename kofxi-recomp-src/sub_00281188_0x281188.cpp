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

// Function: sub_00281188
// Address: 0x281188 - 0x281230
void sub_00281188_0x281188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00281188_0x281188");
#endif

    switch (ctx->pc) {
        case 0x2811a8u: goto label_2811a8;
        case 0x2811c8u: goto label_2811c8;
        case 0x2811d8u: goto label_2811d8;
        case 0x2811f8u: goto label_2811f8;
        case 0x281214u: goto label_281214;
        default: break;
    }

    ctx->pc = 0x281188u;

    // 0x281188: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x281188u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x28118c: 0x24070017  addiu       $a3, $zero, 0x17
    ctx->pc = 0x28118cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x281190: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x281190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x281194: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x281194u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281198: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x281198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28119c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x28119cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2811a0: 0xc09fdf8  jal         func_27F7E0
    ctx->pc = 0x2811A0u;
    SET_GPR_U32(ctx, 31, 0x2811A8u);
    ctx->pc = 0x2811A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2811A0u;
    // 0x2811a4: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27F7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27F7E0u, 0x2811A0u, 0x2811A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2811A8u;
label_2811a8:
    // 0x2811a8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2811a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2811ac: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2811ACu;
    {
        const bool branch_taken_0x2811ac = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2811B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2811ACu;
        // 0x2811b0: 0x2404000d  addiu       $a0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2811ac) {
            ctx->pc = 0x2811D0u;
            goto label_2811d0;
        }
    }
    ctx->pc = 0x2811B4u;
    // 0x2811b4: 0x24050087  addiu       $a1, $zero, 0x87
    ctx->pc = 0x2811b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 135));
    // 0x2811b8: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2811b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2811bc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2811bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2811c0: 0xc0a5648  jal         func_295920
    ctx->pc = 0x2811C0u;
    SET_GPR_U32(ctx, 31, 0x2811C8u);
    ctx->pc = 0x2811C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2811C0u;
    // 0x2811c4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x2811C0u, 0x2811C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2811C8u;
label_2811c8:
    // 0x2811c8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2811C8u;
    {
        const bool branch_taken_0x2811c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2811CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2811C8u;
        // 0x2811cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2811c8) {
            ctx->pc = 0x281218u;
            goto label_281218;
        }
    }
    ctx->pc = 0x2811D0u;
label_2811d0:
    // 0x2811d0: 0xc0a048c  jal         func_281230
    ctx->pc = 0x2811D0u;
    SET_GPR_U32(ctx, 31, 0x2811D8u);
    ctx->pc = 0x2811D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2811D0u;
    // 0x2811d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281230u, 0x2811D0u, 0x2811D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2811D8u;
label_2811d8:
    // 0x2811d8: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2811D8u;
    {
        const bool branch_taken_0x2811d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2811DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2811D8u;
        // 0x2811dc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2811d8) {
            ctx->pc = 0x281218u;
            goto label_281218;
        }
    }
    ctx->pc = 0x2811E0u;
    // 0x2811e0: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x2811e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2811e4: 0x24050087  addiu       $a1, $zero, 0x87
    ctx->pc = 0x2811e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 135));
    // 0x2811e8: 0x2406007b  addiu       $a2, $zero, 0x7B
    ctx->pc = 0x2811e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 123));
    // 0x2811ec: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2811ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2811f0: 0xc0a5648  jal         func_295920
    ctx->pc = 0x2811F0u;
    SET_GPR_U32(ctx, 31, 0x2811F8u);
    ctx->pc = 0x2811F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2811F0u;
    // 0x2811f4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x2811F0u, 0x2811F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2811F8u;
label_2811f8:
    // 0x2811f8: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2811F8u;
    {
        const bool branch_taken_0x2811f8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2811f8) {
            ctx->pc = 0x28120Cu;
            goto label_28120c;
        }
    }
    ctx->pc = 0x281200u;
    // 0x281200: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x281200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x281204: 0x10500004  beq         $v0, $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x281204u;
    {
        const bool branch_taken_0x281204 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x281208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281204u;
        // 0x281208: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281204) {
            ctx->pc = 0x281218u;
            goto label_281218;
        }
    }
    ctx->pc = 0x28120Cu;
label_28120c:
    // 0x28120c: 0xc0a070c  jal         func_281C30
    ctx->pc = 0x28120Cu;
    SET_GPR_U32(ctx, 31, 0x281214u);
    ctx->pc = 0x281210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28120Cu;
    // 0x281210: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281C30u, 0x28120Cu, 0x281214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281214u;
label_281214:
    // 0x281214: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x281214u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_281218:
    // 0x281218: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x281218u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28121c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x28121cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x281220: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x281220u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x281224: 0x3e00008  jr          $ra
    ctx->pc = 0x281224u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x281228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281224u;
        // 0x281228: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x281224u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28122Cu;
    // 0x28122c: 0x0  nop
    ctx->pc = 0x28122cu;
    // NOP
    if (ctx->pc == 0x28122cu) { ctx->pc = 0x281230u; }
}
