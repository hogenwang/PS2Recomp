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

// Function: sub_00299BA8
// Address: 0x299ba8 - 0x299c28
void sub_00299BA8_0x299ba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00299BA8_0x299ba8");
#endif

    switch (ctx->pc) {
        case 0x299bdcu: goto label_299bdc;
        case 0x299becu: goto label_299bec;
        case 0x299bf8u: goto label_299bf8;
        case 0x299c08u: goto label_299c08;
        default: break;
    }

    ctx->pc = 0x299ba8u;

    // 0x299ba8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x299ba8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x299bac: 0xffb20080  sd          $s2, 0x80($sp)
    ctx->pc = 0x299bacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
    // 0x299bb0: 0xffb10070  sd          $s1, 0x70($sp)
    ctx->pc = 0x299bb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 17));
    // 0x299bb4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x299bb4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299bb8: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x299bb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x299bbc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x299bbcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299bc0: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x299bc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299bc4: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x299BC4u;
    {
        const bool branch_taken_0x299bc4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x299BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299BC4u;
        // 0x299bc8: 0xffbf0090  sd          $ra, 0x90($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299bc4) {
            ctx->pc = 0x299BD4u;
            goto label_299bd4;
        }
    }
    ctx->pc = 0x299BCCu;
    // 0x299bcc: 0x3c0201c9  lui         $v0, 0x1C9
    ctx->pc = 0x299bccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)457 << 16));
    // 0x299bd0: 0x24504898  addiu       $s0, $v0, 0x4898
    ctx->pc = 0x299bd0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 18584));
label_299bd4:
    // 0x299bd4: 0xc0a64d8  jal         func_299360
    ctx->pc = 0x299BD4u;
    SET_GPR_U32(ctx, 31, 0x299BDCu);
    ctx->pc = 0x299BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299BD4u;
    // 0x299bd8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299360u, 0x299BD4u, 0x299BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299BDCu;
label_299bdc:
    // 0x299bdc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x299bdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299be0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x299be0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299be4: 0xc0a64ec  jal         func_2993B0
    ctx->pc = 0x299BE4u;
    SET_GPR_U32(ctx, 31, 0x299BECu);
    ctx->pc = 0x299BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299BE4u;
    // 0x299be8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2993B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2993B0u, 0x299BE4u, 0x299BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299BECu;
label_299bec:
    // 0x299bec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x299becu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299bf0: 0xc0a663c  jal         func_2998F0
    ctx->pc = 0x299BF0u;
    SET_GPR_U32(ctx, 31, 0x299BF8u);
    ctx->pc = 0x299BF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299BF0u;
    // 0x299bf4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2998F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2998F0u, 0x299BF0u, 0x299BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299BF8u;
label_299bf8:
    // 0x299bf8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x299bf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299bfc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x299bfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299c00: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x299C00u;
    SET_GPR_U32(ctx, 31, 0x299C08u);
    ctx->pc = 0x299C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299C00u;
    // 0x299c04: 0x2406005c  addiu       $a2, $zero, 0x5C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x299C00u, 0x299C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299C08u;
label_299c08:
    // 0x299c08: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x299c08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299c0c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x299c0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x299c10: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x299c10u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x299c14: 0xdfb10070  ld          $s1, 0x70($sp)
    ctx->pc = 0x299c14u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x299c18: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x299c18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x299c1c: 0x3e00008  jr          $ra
    ctx->pc = 0x299C1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x299C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299C1Cu;
        // 0x299c20: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x299C1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x299C24u;
    // 0x299c24: 0x0  nop
    ctx->pc = 0x299c24u;
    // NOP
    if (ctx->pc == 0x299c24u) { ctx->pc = 0x299c28u; }
}
