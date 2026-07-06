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

// Function: sub_001F07B0
// Address: 0x1f07b0 - 0x1f0838
void sub_001F07B0_0x1f07b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F07B0_0x1f07b0");
#endif

    switch (ctx->pc) {
        case 0x1f07ccu: goto label_1f07cc;
        case 0x1f07e4u: goto label_1f07e4;
        case 0x1f07f8u: goto label_1f07f8;
        default: break;
    }

    ctx->pc = 0x1f07b0u;

    // 0x1f07b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f07b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f07b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f07b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f07b8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f07b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f07bc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1f07bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1f07c0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1f07c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1f07c4: 0xc07d4a8  jal         func_1F52A0
    ctx->pc = 0x1F07C4u;
    SET_GPR_U32(ctx, 31, 0x1F07CCu);
    ctx->pc = 0x1F07C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F07C4u;
    // 0x1f07c8: 0x26110950  addiu       $s1, $s0, 0x950 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 2384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F52A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F52A0u, 0x1F07C4u, 0x1F07CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F07CCu;
label_1f07cc:
    // 0x1f07cc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1f07ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f07d0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f07d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f07d4: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F07D4u;
    {
        const bool branch_taken_0x1f07d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1F07D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F07D4u;
        // 0x1f07d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f07d4) {
            ctx->pc = 0x1F07ECu;
            goto label_1f07ec;
        }
    }
    ctx->pc = 0x1F07DCu;
    // 0x1f07dc: 0xc07c20e  jal         func_1F0838
    ctx->pc = 0x1F07DCu;
    SET_GPR_U32(ctx, 31, 0x1F07E4u);
    ctx->pc = 0x1F0838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F0838u, 0x1F07DCu, 0x1F07E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F07E4u;
label_1f07e4:
    // 0x1f07e4: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x1F07E4u;
    {
        const bool branch_taken_0x1f07e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f07e4) {
            ctx->pc = 0x1F07E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F07E4u;
            // 0x1f07e8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F0824u;
            goto label_1f0824;
        }
    }
    ctx->pc = 0x1F07ECu;
label_1f07ec:
    // 0x1f07ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f07ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f07f0: 0xc07c22a  jal         func_1F08A8
    ctx->pc = 0x1F07F0u;
    SET_GPR_U32(ctx, 31, 0x1F07F8u);
    ctx->pc = 0x1F07F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F07F0u;
    // 0x1f07f4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F08A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F08A8u, 0x1F07F0u, 0x1F07F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F07F8u;
label_1f07f8:
    // 0x1f07f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f07f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f07fc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1f07fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f0800: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1f0800u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1f0804: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F0804u;
    {
        const bool branch_taken_0x1f0804 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F0808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0804u;
        // 0x1f0808: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0804) {
            ctx->pc = 0x1F0820u;
            goto label_1f0820;
        }
    }
    ctx->pc = 0x1F080Cu;
    // 0x1f080c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f080cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f0810: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f0810u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f0814: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f0814u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f0818: 0x807eb90  j           func_1FAE40
    ctx->pc = 0x1F0818u;
    ctx->pc = 0x1F081Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0818u;
    // 0x1f081c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAE40u;
    sub_001FAE40_0x1fae40(rdram, ctx, runtime); return;
    ctx->pc = 0x1F0820u;
label_1f0820:
    // 0x1f0820: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f0820u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f0824:
    // 0x1f0824: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f0824u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f0828: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f0828u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f082c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F082Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F0830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F082Cu;
        // 0x1f0830: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F082Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F0834u;
    // 0x1f0834: 0x0  nop
    ctx->pc = 0x1f0834u;
    // NOP
    if (ctx->pc == 0x1f0834u) { ctx->pc = 0x1f0838u; }
}
